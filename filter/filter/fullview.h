#ifndef FULLVIEW_H
#define FULLVIEW_H

#include <QDialog>
#include "iplimage2qimage.h"
namespace Ui {
class Fullview;
}

class Fullview : public QDialog
{
    Q_OBJECT

public:
    explicit Fullview(QWidget *parent = 0);
    ~Fullview();
    void  display(IplImage *ipl);

private:
    Ui::Fullview *ui;
    IplImage2Qimage iplim;
    IplImage *qresult;
};

#endif // FULLVIEW_H
