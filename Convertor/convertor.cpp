#include "convertor.h"
#include "ui_convertor.h"
#include <QtWidgets>
#include <QtCore/QCoreApplication>


QString rezArie="";
double  arieMp2,arie;

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

void Convertor::transArieMp2()
{
    if(ui->comboBox->currentIndex() == 0)  arieMp2 = ui->lineEdit->text().toDouble() * 100;
    else if(ui->comboBox->currentIndex() == 1) arieMp2 = ui->lineEdit->text().toDouble() * 4046.856119;
    else if(ui->comboBox->currentIndex() == 2) arieMp2 = ui->lineEdit->text().toDouble() / 10000.0;
    else if(ui->comboBox->currentIndex() == 3) arieMp2 = ui->lineEdit->text().toDouble() * 0.0929;
    else if(ui->comboBox->currentIndex() == 4) arieMp2 = ui->lineEdit->text().toDouble() * 10000;
    else if(ui->comboBox->currentIndex() == 5) arieMp2 = ui->lineEdit->text().toDouble() * 0.0006452;
    else if(ui->comboBox->currentIndex() == 6) arieMp2 = ui->lineEdit->text().toDouble() * 1000000;
    else if(ui->comboBox->currentIndex() == 7) arieMp2 = ui->lineEdit->text().toDouble();
    else if(ui->comboBox->currentIndex() == 8) arieMp2 = ui->lineEdit->text().toDouble() * 0.000001;
    else if(ui->comboBox->currentIndex() == 9) arieMp2 = ui->lineEdit->text().toDouble() * 0.836127816;

}

void Convertor::transArie()
{
    if(ui->comboBox_12->currentIndex() == 0)  arie = arieMp2 * 0.01;
    else if(ui->comboBox_12->currentIndex() == 1) arie = arieMp2 * 0.00024710539999309525;
    else if(ui->comboBox_12->currentIndex() == 2) arie = arieMp2 * 10000;
    else if(ui->comboBox_12->currentIndex() == 3) arie = arieMp2 * 10.764262648008613;
    else if(ui->comboBox_12->currentIndex() == 4) arie = arieMp2 * 0.0001;
    else if(ui->comboBox_12->currentIndex() == 5) arie = arieMp2 * 1549.9070055796653;
    else if(ui->comboBox_12->currentIndex() == 6) arie = arieMp2 * 0.000001;
    else if(ui->comboBox_12->currentIndex() == 7) arie = arieMp2;
    else if(ui->comboBox_12->currentIndex() == 8) arie = arieMp2 * 1000000;
    else if(ui->comboBox_12->currentIndex() == 9) arie = arieMp2 * 1.195989394042597;


}

void Convertor::on_pushButton_clicked()
{
}



void Convertor::on_comboBox_activated(int index)
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

}

void Convertor::on_comboBox_12_activated(int index)
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

void Convertor::on_pushButton_2_clicked()
{
     ui->lineEdit_12->setText("");
     ui->lineEdit->setText("");
}
