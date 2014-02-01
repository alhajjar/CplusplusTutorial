#include "fullview.h"
#include "ui_fullview.h"


Fullview::Fullview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fullview)
{
    ui->setupUi(this);

}

Fullview::~Fullview()
{
    delete ui;
}

void Fullview::display(IplImage * ipl){

    ui->full_view_2->setFixedHeight(ipl->height);
    ui->full_view_2->setFixedWidth(ipl->width);


     iplim.IplImagetoQImage(ipl);
    QImage * qimg   = iplim.get_qimage();
     ui->full_view_2->setPixmap(QPixmap::fromImage(*qimg));

                                     }
