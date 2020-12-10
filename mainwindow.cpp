#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionSpeichern_triggered()
{
    //Öffnet Fenster um den Speicherort und Namen einzugeben
    QString fileName = QFileDialog::getSaveFileName(this, tr("Speichern nach:"), "", tr("CSV Files(*.csv)"));
    // überprüft ob ein Dateiname eingegeben wurde
    if (fileName.isEmpty()) { return; }
/*
    if (model->saveTo(fileName)) {
        // gibt in der statusbar aus das erfolgreich gespeichert wurde
        this->ui->statusbar->showMessage(tr("Kaffeekasse gespeichert"));
    } else {
        // Wenn ein Fehler auftritt wird diese Nachricht ausgegeben
        this->ui->statusbar->showMessage(tr("Kaffeekasse konnte nicht gespeichert werden"));
    }
    */
}

void MainWindow::on_actionLaden_triggered()
{
    //Öffnet Fenster um die zu Öffnende datei auszuwählen
    QString fileName = QFileDialog::getOpenFileName(this, tr("Kaffeekasse auswählen"), "", tr("CSV Files(*.csv)"));
    // überprüft ob etwas ausgewählt wurde
    if (fileName.isEmpty()) { return; }
/*    if (model->openFrom(fileName)) {
        this->ui->statusbar->showMessage(tr("Kaffeekasse geöffnet"));
    } else {
        this->ui->statusbar->showMessage(tr("Die ausgewählte Datei konnte nicht geöffnet werden:"));
    }
    */
}
