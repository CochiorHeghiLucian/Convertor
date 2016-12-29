#include "convertor.h"
#include "ui_convertor.h"
#include <QtWidgets>
#include <QtCore/QCoreApplication>


QString rezArie="";
double  arieMp2,arie,lungimeM,lungime,volumMp3,volum;

Convertor::Convertor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Convertor)
{
    ui->setupUi(this);



}

Convertor::~Convertor()
{
    delete ui;
}

//Arie

void Convertor::transArieMp2(int index)
{
    if(index == 0)  arieMp2 = ui->lineEdit->text().toDouble() * 100;
    else if(index == 1) arieMp2 = ui->lineEdit->text().toDouble() * 4046.856119;
    else if(index == 2) arieMp2 = ui->lineEdit->text().toDouble() / 10000.0;
    else if(index == 3) arieMp2 = ui->lineEdit->text().toDouble() * 0.0929;
    else if(index == 4) arieMp2 = ui->lineEdit->text().toDouble() * 10000;
    else if(index == 5) arieMp2 = ui->lineEdit->text().toDouble() * 0.0006452;
    else if(index == 6) arieMp2 = ui->lineEdit->text().toDouble() * 1000000;
    else if(index == 7) arieMp2 = ui->lineEdit->text().toDouble();
    else if(index == 8) arieMp2 = ui->lineEdit->text().toDouble() * 0.000001;
    else if(index == 9) arieMp2 = ui->lineEdit->text().toDouble() * 0.836127816;

    transArie(ui->comboBox_12->currentIndex());


}

void Convertor::transArie(int index)
{
    if(index == 0)
    {
        arie = arieMp2 * 0.01;
        ui->lineEdit_12->setText(QString::number(arie,'g',14));
    }
    else
        if(index == 1)
        {
             arie = arieMp2 * 0.00024710539999309525;
             ui->lineEdit_12->setText(QString::number(arie,'g',14));
        }
    else
        if(index == 2)
        {
             arie = arieMp2 * 10000;
             ui->lineEdit_12->setText(QString::number(arie,'g',14));
        }
    else
            if(index == 3)
            {
                arie = arieMp2 * 10.764262648008613;
                ui->lineEdit_12->setText(QString::number(arie,'g',14));
            }
    else
            if(index == 4)
            {
                arie = arieMp2 * 0.0001;
                ui->lineEdit_12->setText(QString::number(arie,'g',14));
            }
    else
            if(index == 5)
            {
                arie = arieMp2 * 1549.9070055796653;
                ui->lineEdit_12->setText(QString::number(arie,'g',14));
            }
    else
            if(index == 6)
            {
                arie = arieMp2 * 0.000001;
                ui->lineEdit_12->setText(QString::number(arie,'g',14));
            }
    else
            if(index == 7)
            {
                arie = arieMp2;
                ui->lineEdit_12->setText(QString::number(arie,'g',14));
            }
    else
            if(index == 8)
            {
                arie = arieMp2 * 1000000;
                ui->lineEdit_12->setText(QString::number(arie,'g',14));
            }
    else
            if(index == 9)
            {
                arie = arieMp2 * 1.195989394042597;
                ui->lineEdit_12->setText(QString::number(arie,'g',14));
            }


}

void Convertor::on_pushButton_clicked()
{

}



void Convertor::on_comboBox_activated(int index)
{
    transArieMp2(index);
}

void Convertor::on_comboBox_12_activated(int index)
{
   transArieMp2(ui->comboBox->currentIndex());
}

void Convertor::on_pushButton_2_clicked()
{
     ui->lineEdit_12->setText("");
     ui->lineEdit->setText("");
}

//Lungime

void Convertor::transLungimeM(int index)
{
    if(index == 0)  lungimeM = ui->lineEdit_2->text().toDouble() * 0.01;
    else if(index == 1) lungimeM = ui->lineEdit_2->text().toDouble() * 0.3048;
    else if(index == 2) lungimeM = ui->lineEdit_2->text().toDouble() *0.0254;
    else if(index == 3) lungimeM = ui->lineEdit_2->text().toDouble() * 1000;
    else if(index == 4) lungimeM = ui->lineEdit_2->text().toDouble();
    else if(index == 5) lungimeM = ui->lineEdit_2->text().toDouble() * 0.001;
    else if(index == 6) lungimeM = ui->lineEdit_2->text().toDouble() * 1609.344;
    else if(index == 7) lungimeM = ui->lineEdit_2->text().toDouble() * 1852;
    else if(index == 8) lungimeM = ui->lineEdit_2->text().toDouble() * 0.9144002494;
   \
    transLungime(ui->comboBox_16->currentIndex());



}

void Convertor::transLungime(int index)
{
    if(index == 0)
    {
        lungime = lungimeM * 100;
        ui->lineEdit_19->setText(QString::number(lungime,'g',14));
    }
    else
        if(index == 1)
        {
             lungime = lungimeM * 3.280839895013123;
             ui->lineEdit_19->setText(QString::number(lungime,'g',14));
        }
    else
        if(index == 2)
        {
             lungime = lungimeM * 39.37007874015748;
             ui->lineEdit_19->setText(QString::number(lungime,'g',14));
        }
    else
            if(index == 3)
            {
                lungime = lungimeM * 0.001;
                ui->lineEdit_19->setText(QString::number(lungime,'g',14));
            }
    else
            if(index == 4)
            {
                lungime = lungimeM;
                ui->lineEdit_19->setText(QString::number(lungime,'g',14));
            }
    else
            if(index == 5)
            {
                lungime = lungimeM * 1000;
                ui->lineEdit_19->setText(QString::number(lungime,'g',14));
            }
    else
            if(index == 6)
            {
                lungime = lungimeM * 0.0006213711922373339;
                ui->lineEdit_19->setText(QString::number(lungime,'g',14));
            }
    else
            if(index == 7)
            {
                lungime = lungimeM * 0.0005399568034557236;
                ui->lineEdit_19->setText(QString::number(lungime,'g',14));
            }
    else
            if(index == 8)
            {
                lungime = lungimeM * 1.0936130000578717;
                ui->lineEdit_19->setText(QString::number(lungime,'g',14));
            }

}


void Convertor::on_comboBox_2_currentIndexChanged(int index)
{

}

void Convertor::on_comboBox_2_activated(int index)
{
    transLungimeM(index);
}

void Convertor::on_comboBox_16_activated(int index)
{
    transLungimeM(ui->comboBox_2->currentIndex());
}

void Convertor::on_pushButton_3_clicked()
{
    ui->lineEdit_2->setText("");
    ui->lineEdit_19->setText("");
}

//Volum

void Convertor::transVolumMp3(int index)
{
    if(index == 0)  volumMp3 = ui->lineEdit_3->text().toDouble() * 0.00001;
    else if(index == 1) volumMp3 = ui->lineEdit_3->text().toDouble() * 0.000001;
    else if(index == 2) volumMp3 = ui->lineEdit_3->text().toDouble() * 0.0001;
    else if(index == 3) volumMp3 = ui->lineEdit_3->text().toDouble() * 0.001;
    else if(index == 4) volumMp3 = ui->lineEdit_3->text().toDouble() * 0.02832;
    else if(index == 5) volumMp3 = ui->lineEdit_3->text().toDouble() * 0.004546;
    else if(index == 6) volumMp3 = ui->lineEdit_3->text().toDouble() * 0.003785;
    else if(index == 7) volumMp3 = ui->lineEdit_3->text().toDouble() * 0.000016387064;
    else if(index == 8) volumMp3 = ui->lineEdit_3->text().toDouble() * 0.001;
    else if(index == 9) volumMp3 = ui->lineEdit_3->text().toDouble();
    else if(index == 10) volumMp3 = ui->lineEdit_3->text().toDouble() * 0.000001;
    else if(index == 11) volumMp3 = ui->lineEdit_3->text().toDouble() * 0.76456;
   \
    transVolum(ui->comboBox_17->currentIndex());

}

void Convertor::transVolum(int index)
{
   // QMessageBox::information(this,QString::number(index),"aaa");
    if(index == 0)
    {
        volum = volumMp3 * 99999.99999999999;
        ui->lineEdit_20->setText(QString::number(volum,'g',14));
    }
    else
        if(index == 1)
        {
             volum = volumMp3 * 1000000;
             ui->lineEdit_20->setText(QString::number(volum,'g',14));
        }
    else
        if(index == 2)
        {
             volum = volumMp3 * 10000;
             ui->lineEdit_20->setText(QString::number(volum,'g',14));
        }
    else
            if(index == 3)
            {
                volum = volumMp3 * 1000;
                ui->lineEdit_20->setText(QString::number(volum,'g',14));
            }
    else
            if(index == 4)
            {
                volum = volumMp3 * 35.31073446327684;
                ui->lineEdit_20->setText(QString::number(volum,'g',14));
            }
    else
            if(index == 5)
            {
                volum = volumMp3 * 219.9736031676199;
                ui->lineEdit_20->setText(QString::number(volum,'g',14));
            }
    else
            if(index == 6)
            {
                volum = volumMp3 * 264.2007926023778;
                ui->lineEdit_20->setText(QString::number(volum,'g',14));
            }
    else
            if(index == 7)
            {
                volum = volumMp3 * 61023.74409473229;
                ui->lineEdit_20->setText(QString::number(volum,'g',14));
            }
    else
            if(index == 8)
            {
                volum = volumMp3 * 1000 ;
                ui->lineEdit_20->setText(QString::number(volum,'g',14));
            }
    else
            if(index == 9)
            {
                volum = volumMp3;
                ui->lineEdit_20->setText(QString::number(volum,'g',14));
            }
    else
            if(index == 10)
            {
                volum = volumMp3 * 1000000;
                ui->lineEdit_20->setText(QString::number(volum,'g',14));
            }
    else
            if(index == 11)
            {
                volum = volumMp3 * 1.3079418227477242;
                ui->lineEdit_20->setText(QString::number(volum,'g',14));
            }

}

void Convertor::on_comboBox_3_activated(int index)
{
    transVolumMp3(index);
}

void Convertor::on_comboBox_17_activated(int index)
{


    transVolumMp3(ui->comboBox_3->currentIndex());
}

void Convertor::on_pushButton_5_clicked()
{
    ui->lineEdit_3->setText("");
    ui->lineEdit_20->setText("");
}
