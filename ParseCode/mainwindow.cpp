#include <QtGui>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "version.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Slots();
}




MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::aboutVersion()
{
    QMessageBox::information(this, tr("�汾"),
                             tr("�˰汾Ϊ: %1")
                             .arg(app_version));
}


void MainWindow::Slots()
{
    QObject::connect(ui->action_version, SIGNAL(triggered()),
                     this, SLOT(aboutVersion()));
}

