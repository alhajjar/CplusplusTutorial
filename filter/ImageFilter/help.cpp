#include "help.h"
#include "ui_help.h"

Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{

    ui->setupUi(this);
    this->setWindowTitle("Help");
//    ui->label->setText("- Open the container or the first image in the sequence that you want to convert");
//    ui->label_2->setText("- Enter the saving Name with the format (Name.format)");
//    ui->label_3->setText("- Enter the number of Images to convert");
//    ui->label_4->setText("- The digits Number is the number of digits after the name of the saved container(only if output is a sequence)");
//    ui->label_5->setText("- If you want to resize the input Container than simply write the output Width and Height and the Fiter to use");
//    ui->label_6->setText("- If the input container is a YUV then you should enter the Width, Height, Sampling , the Bits number and if its a sequence or not");
//    ui->label_7->setText("- For a YUV output YOU should specify the Sampling(Optional if the input is a YUV), bits Number(8 Or 16),Color space YUV, ");
//    ui->label_8->setText("Sequence or a Container and finaly Planar or Packed(interleaved)  ");
//    ui->label_9->setText("- To generate an Avi its not important to chose a saving name only enter the frame rate ");
//    ui->label_10->setText("- To extract images from an Avi indicate the first Frame and the Last Frame ");
//    ui->label_11->setText("- Finaly Press Convert Button to start the process ");
//    ui->label_12->setText("- Supported Formats : DPX, TIF ,YUV and AVI ");

}

Help::~Help()
{
    delete ui;
}

void Help::on_pushButton_clicked()
{
    close();
}
