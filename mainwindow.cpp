#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->plainTextEdit, SIGNAL(textChanged()), this, SLOT(viewHtml()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::viewHtml(){
     ui->webEngineView->setHtml(ui->plainTextEdit->toPlainText());
}
