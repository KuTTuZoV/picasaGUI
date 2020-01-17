#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QDockWidget>
#include <QDirIterator>
#include <QDir>
#include <QListView>
#include <QListWidgetItem>
#include "../../pluginGUI/widget.h"

const double M_PI = 3.14;

typedef unsigned __int16 WORD;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void filter(char * image, int width, int height);
    ~MainWindow();

private slots:
    void on_bw_clicked();

    void on_filterList_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;

    QString file;
    QPixmap pixmap;
    QByteArray original;
    QList<QDockWidget*> docks;
};
#endif // MAINWINDOW_H
