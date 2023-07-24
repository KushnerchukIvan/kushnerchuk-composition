#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

// ------------------------------------------------------------------------------------
class UkrainianLetter
{
public:
    UkrainianLetter(QString letter) : letter_(letter) {}

private:
    QString letter_;
};
// ------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------
class Number
{
public:
    Number(int value) : value_(value) {}

private:
    int value_;
};
// ------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------
class EnglishLetter
{
public:
    EnglishLetter(QString letter) : letter_(letter) {}

private:
    QString letter_;
};
// ------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------
class CompositeClass
{
public:
    CompositeClass(UkrainianLetter ukrLetter, Number number, EnglishLetter engLetter)
        : ukrLetter_(ukrLetter), number_(number), engLetter_(engLetter) {}

private:
    UkrainianLetter ukrLetter_;
    Number number_;
    EnglishLetter engLetter_;
    QString passport;
    QString iban;
    QString car;
};
// ------------------------------------------------------------------------------------

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
