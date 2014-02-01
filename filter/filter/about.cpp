#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    this->setWindowTitle("About");
    ui->label->setText("- Software used to filter Images");
    ui->label_2->setText("- Version 1 [15/10/2013]");
    ui->label_3->setText("- Company: ");
    ui->label_4->setText("- By Ahmad AL HAJJAR");
    ui->label_5->setText("- Legal Copyright:GPL ");
    ui->label_6->setText("- Email: ahmad.al.hajjar@hotmail.fr");
}

About::~About()
{
    delete ui;
}

void About::on_pushButton_clicked()
{
    close();
}
