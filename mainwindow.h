#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_decodeMode_clicked();

    void on_btn_encodeMode_clicked();

    void on_btn_decode_clicked();

    void on_btn_encode_clicked();

private:
    void setModeButtonsColor(bool decodeMode);

private:
    bool decodeMode = true;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
