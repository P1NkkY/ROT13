#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rot13cipher.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->widget_swapButtons->addWidget(ui->page_decode);
    ui->widget_swapButtons->addWidget(ui->page_encode);

    setModeButtonsColor(decodeMode);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_decodeMode_clicked()
{
    decodeMode = true;
    setModeButtonsColor(decodeMode);
    ui->widget_swapButtons->setCurrentIndex(0);
}

void MainWindow::on_btn_encodeMode_clicked()
{
    decodeMode = false;
    setModeButtonsColor(decodeMode);
    ui->widget_swapButtons->setCurrentIndex(1);
}

void MainWindow::on_btn_decode_clicked()
{
    QString input = ui->textEdit_input->toPlainText();
    QString output = Rot13Cipher::apply(input);

    ui->textEdit_output->setText(output);
}

void MainWindow::on_btn_encode_clicked()
{
    QString input = ui->textEdit_input->toPlainText();
    QString output = Rot13Cipher::apply(input);

    ui->textEdit_output->setText(output);
}

void MainWindow::setModeButtonsColor(bool decodeMode)
{
    if (decodeMode) {
        ui->btn_decodeMode->setStyleSheet("text-align: left; background-color:"
                                          " #84f542; color: black;");
        ui->btn_encodeMode->setStyleSheet("text-align: left; background-color:"
                                          " #b4becf; color: black;");
    } else {
        ui->btn_decodeMode->setStyleSheet("text-align: left; background-color:"
                                          " #b4becf; color: black;");
        ui->btn_encodeMode->setStyleSheet("text-align: left; background-color:"
                                          " #84f542; color: black;");
    }
}
