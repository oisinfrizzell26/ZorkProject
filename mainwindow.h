#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPlainTextEdit>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // Method to append text to the QPlainTextEdit
    void appendOutput(const QString &message);

private slots:
    // Slots for button click events
    void on_southButton_clicked();
    void on_eastButton_clicked();
    void on_westButton_clicked();
    void on_northButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
