#include "convertor.h"
#include "ui_convertor.h"
#include <QtWidgets>
#include <QtCore/QCoreApplication>


QString rezArie="";
double  arieMp2,arie,lungimeM,lungime,volumMp3,volum,timpMin,timp,vitezaMps,viteza,temperaturaC,temperatura,masaKg,masa,energieJ,energie;
double presiunePa,presiune,densitateKgM3,densitate,consumL,consum;

Convertor::Convertor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Convertor)
{
    ui->setupUi(this);

    ui->comboBox->setCurrentIndex(7);
    ui->comboBox_12->setCurrentIndex(7);

    ui->comboBox_2->setCurrentIndex(4);
    ui->comboBox_16->setCurrentIndex(4);

    ui->comboBox_3->setCurrentIndex(9);
    ui->comboBox_17->setCurrentIndex(9);

    ui->comboBox_4->setCurrentIndex(5);
    ui->comboBox_15->setCurrentIndex(5);

    ui->comboBox_5->setCurrentIndex(14);
    ui->comboBox_13->setCurrentIndex(14);

    ui->comboBox_7->setCurrentIndex(1);
    ui->comboBox_14->setCurrentIndex(1);

    ui->comboBox_8->setCurrentIndex(5);
    ui->comboBox_18->setCurrentIndex(5);

    ui->comboBox_9->setCurrentIndex(23);
    ui->comboBox_19->setCurrentIndex(23);

    ui->comboBox_10->setCurrentIndex(7);
    ui->comboBox_11->setCurrentIndex(7);

    ui->comboBox_22->setCurrentIndex(0);
    ui->comboBox_23->setCurrentIndex(0);

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
//

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

     ui->comboBox->setCurrentIndex(7);
     ui->comboBox_12->setCurrentIndex(7);
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

    ui->comboBox_2->setCurrentIndex(4);
    ui->comboBox_16->setCurrentIndex(4);
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

    ui->comboBox_3->setCurrentIndex(9);
    ui->comboBox_17->setCurrentIndex(9);
}

//Timp

void Convertor::transTimpMin(int index)
{
    if(index == 0) timpMin = ui->lineEdit_4->text().toDouble() * 525600;
    else if(index == 1) timpMin = ui->lineEdit_4->text().toDouble() * 43800;
    else if(index == 2) timpMin = ui->lineEdit_4->text().toDouble() * 10080;
    else if(index == 3) timpMin = ui->lineEdit_4->text().toDouble() * 1440;
    else if(index == 4) timpMin = ui->lineEdit_4->text().toDouble() * 60;
    else if(index == 5) timpMin = ui->lineEdit_4->text().toDouble();
    else if(index == 6) timpMin = ui->lineEdit_4->text().toDouble() * 0.016666666666666666;
    else if(index == 7) timpMin = ui->lineEdit_4->text().toDouble() * 0.0016666666666666668;
    else if(index == 8) timpMin = ui->lineEdit_4->text().toDouble() * 0.00016666666666666666;

    transTimp(ui->comboBox_15->currentIndex());


}

void Convertor::transTimp(int index)
{

     if(index == 0)
        {
             timp = timpMin * 0.000001902587519025875;
             ui->lineEdit_16->setText(QString::number(timp,'g',14));
        }
    else
            if(index == 1)
            {
                timp = timpMin * 0.000022831050228310503;
                ui->lineEdit_16->setText(QString::number(timp,'g',14));
            }
    else
            if(index == 2)
            {
                timp = timpMin * 0.0000992063492063492;
                ui->lineEdit_16->setText(QString::number(timp,'g',14));
            }
    else
            if(index == 3)
            {
                timp = timpMin * 0.0006944444444444445;
                ui->lineEdit_16->setText(QString::number(timp,'g',14));
            }
    else
            if(index == 4)
            {
                timp = timpMin * 0.016666666666666666;
                ui->lineEdit_16->setText(QString::number(timp,'g',14));
            }
    else
            if(index == 5)
            {
                timp = timpMin;
                ui->lineEdit_16->setText(QString::number(timp,'g',14));
            }
    else
            if(index == 6)
            {
                timp = timpMin * 60 ;
                ui->lineEdit_16->setText(QString::number(timp,'g',14));
            }
    else
            if(index == 7)
            {
                timp = timpMin * 600;
                ui->lineEdit_16->setText(QString::number(timp,'g',14));
            }
    else
            if(index == 8)
            {
                timp = timpMin * 6000;
                ui->lineEdit_16->setText(QString::number(timp,'g',14));
            }

}

void Convertor::on_comboBox_4_activated(int index)
{
    transTimpMin(index);
}

void Convertor::on_comboBox_15_activated(int index)
{
      transTimpMin(ui->comboBox_4->currentIndex());
}

void Convertor::on_pushButton_4_clicked()
{
    ui->lineEdit_4->setText("");
    ui->lineEdit_16->setText("");

    ui->comboBox_4->setCurrentIndex(5);
    ui->comboBox_15->setCurrentIndex(5);

}

//Viteza

void Convertor::transVitezaMps(int index)
{
    if(index == 0) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.0001666667;
    else if(index == 1) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.01;
    else if(index == 2) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.000084667;
    else if(index == 3) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.00508;
    else if(index == 4) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.3048;
    else if(index == 5) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.000084667;
    else if(index == 6) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.3048;
    else if(index == 7) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.0254;
    else if(index == 8) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.0254;
    else if(index == 9) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.27777778;
    else if(index == 10) vitezaMps = ui->lineEdit_5->text().toDouble() * 16.666667;
    else if(index == 11) vitezaMps = ui->lineEdit_5->text().toDouble() * 1000;
    else if(index == 12) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.000277778;
    else if(index == 13) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.016666667;
    else if(index == 14) vitezaMps = ui->lineEdit_5->text().toDouble();
    else if(index == 15) vitezaMps = ui->lineEdit_5->text().toDouble() * 1609.344;
    else if(index == 16) vitezaMps = ui->lineEdit_5->text().toDouble() * 26.8224;
    else if(index == 17) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.44704;
    else if(index == 18) vitezaMps = ui->lineEdit_5->text().toDouble();
    else if(index == 19) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.5144;
    else if(index == 20) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.000254;
    else if(index == 21) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.015240004;
    else if(index == 22) vitezaMps = ui->lineEdit_5->text().toDouble() * 0.9144002494;

    transViteza(ui->comboBox_13->currentIndex());



}

void Convertor::transViteza(int index)
{

    if(index == 0)
       {
            viteza = vitezaMps * 5999.99880000024;
            ui->lineEdit_11->setText(QString::number(viteza,'g',14));
       }
   else
           if(index == 1)
           {
               viteza = vitezaMps * 100;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 2)
           {
               viteza = vitezaMps * 11810.977122137316;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 3)
           {
               viteza = vitezaMps * 196.85039370078738;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 4)
           {
               viteza = vitezaMps * 3.280839895013123;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 5)
           {
               viteza = vitezaMps * 11810.977122137316;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 6)
           {
               viteza = vitezaMps * 3.280839895013123 ;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 7)
           {
               viteza = vitezaMps * 39.37007874015748;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 8)
           {
               viteza = vitezaMps * 39.37007874015748;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }


   else
            if(index == 9)
           {
            viteza = vitezaMps * 3.5999999712000004;
            ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 10)
           {
               viteza = vitezaMps * 0.05999999880000002;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 11)
           {
               viteza = vitezaMps * 0.001;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 12)
           {
               viteza = vitezaMps * 3599.9971200023037;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 13)
           {
               viteza = vitezaMps * 59.99999880000003;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 14)
           {
               viteza = vitezaMps;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 15)
           {
               viteza = vitezaMps * 0.0006213711922373339 ;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 16)
           {
               viteza = vitezaMps * 0.03728227153424004;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 17)
           {
               viteza = vitezaMps * 2.2369362920544025;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }


    if(index == 18)
       {
            viteza = vitezaMps;
            ui->lineEdit_11->setText(QString::number(viteza,'g',14));
       }
   else
           if(index == 19)
           {
               viteza = vitezaMps * 1.944012441679627;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 20)
           {
               viteza = vitezaMps * 3937.0078740157483;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 21)
           {
               viteza = vitezaMps * 65.61678067801033;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }
   else
           if(index == 22)
           {
               viteza = vitezaMps * 1.0936130000578717;
               ui->lineEdit_11->setText(QString::number(viteza,'g',14));
           }

}

void Convertor::on_comboBox_5_activated(int index)
{
    transVitezaMps(index);
}

void Convertor::on_comboBox_13_activated(int index)
{
    transVitezaMps(ui->comboBox_5->currentIndex());
}

void Convertor::on_pushButton_9_clicked()
{
    ui->lineEdit_5->setText("");
    ui->lineEdit_11->setText("");

    ui->comboBox_5->setCurrentIndex(14);
    ui->comboBox_13->setCurrentIndex(14);
}

//Temperatura

void Convertor::transTemperaturaC(int index)
{
    temperaturaC = 0;

    if(index == 0) temperaturaC = ui->lineEdit_6->text().toDouble();
    else if(index == 1) temperaturaC = (ui->lineEdit_6->text().toDouble() - 32) / 1.8;
    else if(index == 2) temperaturaC = ui->lineEdit_6->text().toDouble() - 273.15;
    else if(index == 3) temperaturaC = (ui->lineEdit_6->text().toDouble() - 491.67) / 1.8;

    transTemperatura(ui->comboBox_20->currentIndex());
}

void Convertor::transTemperatura(int index)
{
    temperatura = 0;

    if(index == 0)
       {
            temperatura = temperaturaC;
            ui->lineEdit_14->setText(QString::number(temperatura,'g',14));
       }
   else
           if(index == 1)
           {
               temperatura = temperaturaC * 1.8 + 32;
               ui->lineEdit_14->setText(QString::number(temperatura,'g',14));
           }
   else
           if(index == 2)
           {
               temperatura = temperaturaC + 273.15;
               ui->lineEdit_14->setText(QString::number(temperatura,'g',14));
           }
   else
           if(index == 3)
           {
               temperatura = temperaturaC * 1.8 + 491.67;
               ui->lineEdit_14->setText(QString::number(temperatura,'g',14));
           }

}

void Convertor::on_comboBox_6_activated(int index)
{
    transTemperaturaC(index);
}

void Convertor::on_comboBox_20_activated(int index)
{
    transTemperaturaC(ui->comboBox_6->currentIndex());
}

void Convertor::on_pushButton_8_clicked()
{
    ui->lineEdit_6->setText("");
    ui->lineEdit_14->setText("");

    ui->comboBox_6->setCurrentIndex(0);
    ui->comboBox_20->setCurrentIndex(0);
}

//Masa

void Convertor::transMasaKg(int index)
{
    if(index == 0) masaKg = ui->lineEdit_7->text().toDouble() * 0.001;
    else if(index == 1) masaKg = ui->lineEdit_7->text().toDouble();
    else if(index == 2) masaKg = ui->lineEdit_7->text().toDouble() * 0.453592;
    else if(index == 3) masaKg = ui->lineEdit_7->text().toDouble() * 0.000001;
    else if(index == 4) masaKg = ui->lineEdit_7->text().toDouble() * 0.0283495;
    else if(index == 5) masaKg = ui->lineEdit_7->text().toDouble() * 0.0311035;
    else if(index == 6) masaKg = ui->lineEdit_7->text().toDouble() * 14.593903;
    else if(index == 7) masaKg = ui->lineEdit_7->text().toDouble() * 1000;

    transMasa(ui->comboBox_14->currentIndex());

}

void Convertor::transMasa(int index)
{
    if(index == 0)
       {
            masa = masaKg * 1000;
            ui->lineEdit_17->setText(QString::number(masa,'g',14));
       }
   else
           if(index == 1)
           {
               masa = masaKg;
               ui->lineEdit_17->setText(QString::number(masa,'g',14));
           }
   else
           if(index == 2)
           {
               masa = masaKg * 2.2046244201837775;
               ui->lineEdit_17->setText(QString::number(masa,'g',14));
           }
   else
           if(index == 3)
           {
               masa = masaKg * 1000000;
               ui->lineEdit_17->setText(QString::number(masa,'g',14));
           }
   else
           if(index == 4)
           {
               masa = masaKg * 35.27399072294044;
               ui->lineEdit_17->setText(QString::number(masa,'g',14));
           }
   else
           if(index == 5)
           {
               masa = masaKg * 32.15072258749016;
               ui->lineEdit_17->setText(QString::number(masa,'g',14));
           }
   else
           if(index == 6)
           {
               masa = masaKg * 0.06852176556196105 ;
               ui->lineEdit_17->setText(QString::number(masa,'g',14));
           }
   else
           if(index == 7)
           {
               masa = masaKg * 0.001;
               ui->lineEdit_17->setText(QString::number(masa,'g',14));
           }


}

void Convertor::on_comboBox_7_activated(int index)
{
    transMasaKg(index);
}

void Convertor::on_comboBox_14_activated(int index)
{
    transMasaKg(ui->comboBox_7->currentIndex());
}

void Convertor::on_pushButton_7_clicked()
{
    ui->lineEdit_7->setText("");
    ui->lineEdit_17->setText("");

    ui->comboBox_7->setCurrentIndex(1);
    ui->comboBox_14->setCurrentIndex(1);

}

//Energie

void Convertor::transEnergieJ(int index)
{
    if(index == 0) energieJ = ui->lineEdit_8->text().toDouble() * 1055.06;
    else if(index == 1) energieJ = ui->lineEdit_8->text().toDouble() * 4.1868;
    else if(index == 2) energieJ = ui->lineEdit_8->text().toDouble() * 0.0000001;
    else if(index == 3) energieJ = ui->lineEdit_8->text().toDouble() * 1.3558179483314;
    else if(index == 4) energieJ = ui->lineEdit_8->text().toDouble() * 0.11298482902;
    else if(index == 5) energieJ = ui->lineEdit_8->text().toDouble();
    else if(index == 6) energieJ = ui->lineEdit_8->text().toDouble() * 4186.8;
    else if(index == 7) energieJ = ui->lineEdit_8->text().toDouble() * 1000;
    else if(index == 8) energieJ = ui->lineEdit_8->text().toDouble() * 3600000;
    else if(index == 9) energieJ = ui->lineEdit_8->text().toDouble() * 1055060000000000000;
    else if(index == 10) energieJ = ui->lineEdit_8->text().toDouble() * 29307600000;
    else if(index == 11) energieJ = ui->lineEdit_8->text().toDouble() * 29307600000;
    else if(index == 12) energieJ = ui->lineEdit_8->text().toDouble() * 29307600000;
    else if(index == 13) energieJ = ui->lineEdit_8->text().toDouble() * 41868000000;
    else if(index == 14) energieJ = ui->lineEdit_8->text().toDouble() * 41868000000;
    else if(index == 15) energieJ = ui->lineEdit_8->text().toDouble() * 4186800;
    else if(index == 16) energieJ = ui->lineEdit_8->text().toDouble() * 3600;
    else if(index == 17) energieJ = ui->lineEdit_8->text().toDouble();

    transEnergie(ui->comboBox_18->currentIndex());

}

void Convertor::transEnergie(int index)
{
    if(index == 0)
       {
            energie = energieJ * 0.0009478133944988911;
            ui->lineEdit_15->setText(QString::number(energie,'g',14));
       }
   else
           if(index == 1)
           {
               energie = energieJ * 0.23884589662749595;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 2)
           {
               energie = energieJ * 10000000;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 3)
           {
               energie = energieJ * 0.7375621492772656;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 4)
           {
               energie = energieJ * 8.850745791923844;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 5)
           {
               energie = energieJ;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 6)
           {
               energie = energieJ * 0.00023884589662749592 ;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 7)
           {
               energie = energieJ * 0.001;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 8)
           {
               energie = energieJ * 2.7777777777777776e-7;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }


   else
            if(index == 9)
           {
            energie = energieJ * 9.47813394498891e-19;
            ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 10)
           {
               energie = energieJ * 3.412084237535656e-11;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 11)
           {
               energie = energieJ * 3.412084237535656e-11;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 12)
           {
               energie = energieJ * 3.412084237535656e-11;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 13)
           {
               energie = energieJ * 2.3884589662749594e-11;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 14)
           {
               energie = energieJ * 2.3884589662749594e-11;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 15)
           {
               energie = energieJ * 2.388458966274959e-7 ;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 16)
           {
               energie = energieJ * 0.0002777777777777778;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }
   else
           if(index == 17)
           {
               energie = energieJ;
               ui->lineEdit_15->setText(QString::number(energie,'g',14));
           }

}

void Convertor::on_comboBox_8_activated(int index)
{
    transEnergieJ(index);
}

void Convertor::on_comboBox_18_activated(int index)
{
    transEnergieJ(ui->comboBox_8->currentIndex());
}

void Convertor::on_pushButton_6_clicked()
{
    ui->lineEdit_8->setText("");
    ui->lineEdit_15->setText("");

    ui->comboBox_8->setCurrentIndex(5);
    ui->comboBox_18->setCurrentIndex(5);


}

//Presiune

void Convertor::transPresiunePa(int index)
{
    if(index == 0) presiunePa = ui->lineEdit_9->text().toDouble() * 98066.5;
    else if(index == 1) presiunePa = ui->lineEdit_9->text().toDouble() * 101325.2738;
    else if(index == 2) presiunePa = ui->lineEdit_9->text().toDouble() * 98000;
    else if(index == 3) presiunePa = ui->lineEdit_9->text().toDouble() * 248.84;
    else if(index == 4) presiunePa = ui->lineEdit_9->text().toDouble() * 3386.38815789;
    else if(index == 5) presiunePa = ui->lineEdit_9->text().toDouble() * 98000;
    else if(index == 6) presiunePa = ui->lineEdit_9->text().toDouble() * 1000;
    else if(index == 7) presiunePa = ui->lineEdit_9->text().toDouble() * 47.88;
    else if(index == 8) presiunePa = ui->lineEdit_9->text().toDouble() * 6894.75729317;
    else if(index == 9) presiunePa = ui->lineEdit_9->text().toDouble() * 98;
    else if(index == 10) presiunePa = ui->lineEdit_9->text().toDouble() * 9800;
    else if(index == 11) presiunePa = ui->lineEdit_9->text().toDouble() * 9800;
    else if(index == 12) presiunePa = ui->lineEdit_9->text().toDouble() * 9800;
    else if(index == 13) presiunePa = ui->lineEdit_9->text().toDouble() * 9.8;
    else if(index == 14) presiunePa = ui->lineEdit_9->text().toDouble() * 9.8;
    else if(index == 15) presiunePa = ui->lineEdit_9->text().toDouble() * 9.8;
    else if(index == 16) presiunePa = ui->lineEdit_9->text().toDouble() * 133.322368421;
    else if(index == 17) presiunePa = ui->lineEdit_9->text().toDouble() * 9.8;
    else if(index == 18) presiunePa = ui->lineEdit_9->text().toDouble() * 9.8;
    else if(index == 19) presiunePa = ui->lineEdit_9->text().toDouble() * 1000000;
    else if(index == 20) presiunePa = ui->lineEdit_9->text().toDouble() * 9800;
    else if(index == 21) presiunePa = ui->lineEdit_9->text().toDouble() * 9800;
    else if(index == 22) presiunePa = ui->lineEdit_9->text().toDouble() * 1000000;
    else if(index == 23) presiunePa = ui->lineEdit_9->text().toDouble();
    else if(index == 24) presiunePa = ui->lineEdit_9->text().toDouble() * 6894.75729317;
    else if(index == 25) presiunePa = ui->lineEdit_9->text().toDouble() * 133.322368421;

     transPresiune(ui->comboBox_19->currentIndex());

}

void Convertor::transPresiune(int index)
{
    if(index == 0)
       {
            presiune = presiunePa * 0.000010197162129779282;
            ui->lineEdit_13->setText(QString::number(presiune,'g',14));
       }
   else
           if(index == 1)
           {
               presiune = presiunePa * 0.000009869205998632101;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 2)
           {
               presiune = presiunePa * 0.000010204081632653061;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 3)
           {
               presiune = presiunePa * 0.0040186465198521135;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 4)
           {
               presiune = presiunePa * 0.00029529987508079483;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 5)
           {
               presiune = presiunePa * 0.000010204081632653061;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 6)
           {
               presiune = presiunePa * 0.001 ;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 7)
           {
               presiune = presiunePa * 0.020885547201336674;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 8)
           {
               presiune = presiunePa * 0.00014503773773017476;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }


   else
            if(index == 9)
           {
                presiune = presiunePa * 0.01020408163265306;
                ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 10)
           {
               presiune = presiunePa * 0.00010204081632653062;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 11)
           {
               presiune = presiunePa * 0.00010204081632653062;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 12)
           {
               presiune = presiunePa * 0.00010204081632653062;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 13)
           {
               presiune = presiunePa * 0.1020408163265306;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 14)
           {
               presiune = presiunePa * 0.1020408163265306;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 15)
           {
               presiune = presiunePa * 0.1020408163265306 ;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 16)
           {
               presiune = presiunePa * 0.007500616827044659;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 17)
           {
               presiune = presiunePa * 0.1020408163265306;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }


    if(index == 18)
       {
            presiune = presiunePa * 0.1020408163265306;
            ui->lineEdit_13->setText(QString::number(presiune,'g',14));
       }
   else
           if(index == 19)
           {
               presiune = presiunePa * 0.000001;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 20)
           {
               presiune = presiunePa * 0.00010204081632653062;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 21)
           {
               presiune = presiunePa * 0.00010204081632653062;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 22)
           {
               presiune = presiunePa * 0.000001;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 23)
           {
               presiune = presiunePa;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 24)
           {
               presiune = presiunePa * 0.00014503773773017476;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }
   else
           if(index == 25)
           {
               presiune = presiunePa * 0.007500616827044659;
               ui->lineEdit_13->setText(QString::number(presiune,'g',14));
           }

}

void Convertor::on_comboBox_9_activated(int index)
{
    transPresiunePa(index);
}

void Convertor::on_comboBox_19_activated(int index)
{
    transPresiunePa(ui->comboBox_9->currentIndex());
}

void Convertor::on_pushButton_12_clicked()
{
    ui->lineEdit_9->setText("");
    ui->lineEdit_13->setText("");

    ui->comboBox_9->setCurrentIndex(23);
    ui->comboBox_19->setCurrentIndex(23);
}

//Densitate

void Convertor::transDensitateKgM3(int index)
{
    if(index == 0) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 1000;
    else if(index == 1) densitateKgM3 = ui->lineEdit_10->text().toDouble();
    else if(index == 2) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 0.001;
    else if(index == 3) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 1000;
    else if(index == 4) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 1000000;
    else if(index == 5) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 1000000;
    else if(index == 6) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 1000;
    else if(index == 7) densitateKgM3 = ui->lineEdit_10->text().toDouble();
    else if(index == 8) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 16.017940092904052;
    else if(index == 9) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 27679.89858;
    else if(index == 10) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 99.77637266;
    else if(index == 11) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 119.8264273;
    else if(index == 12) densitateKgM3 = ui->lineEdit_10->text().toDouble();
    else if(index == 13) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 0.001;
    else if(index == 14) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 0.000001;
    else if(index == 15) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 6.236023291;
    else if(index == 16) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 7.489150094;
    else if(index == 17) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 1.001153961;
    else if(index == 18) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 1729.994044;
    else if(index == 19) densitateKgM3 = ui->lineEdit_10->text().toDouble() * 1000;

    transDensitate(ui->comboBox_11->currentIndex());

}

void Convertor::transDensitate(int index)
{
    if(index == 0)
       {
            densitate = densitateKgM3 * 0.001;
            ui->lineEdit_18->setText(QString::number(densitate,'g',14));
       }
   else
           if(index == 1)
           {
               densitate = densitateKgM3;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 2)
           {
               densitate = densitateKgM3 * 1000;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 3)
           {
               densitate = densitateKgM3 * 0.001;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 4)
           {
               densitate = densitateKgM3 * 0.000001;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 5)
           {
               densitate = densitateKgM3 * 0.000001;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 6)
           {
               densitate = densitateKgM3 * 0.001 ;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 7)
           {
               densitate = densitateKgM3;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 8)
           {
               densitate = densitateKgM3 * 0.06243;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }


   else
            if(index == 9)
           {
                densitate = densitateKgM3 * 0.00003612730000111149;
                ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 10)
           {
               densitate = densitateKgM3 * 0.010022412855272063;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 11)
           {
               densitate = densitateKgM3 * 0.00834540445319611;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 12)
           {
               densitate = densitateKgM3;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 13)
           {
               densitate = densitateKgM3 * 1000;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 14)
           {
               densitate = densitateKgM3 * 1000000;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 15)
           {
               densitate = densitateKgM3 * 0.16035860569078172 ;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 16)
           {
               densitate = densitateKgM3 * 0.13352649999646274;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }
   else
           if(index == 17)
           {
               densitate = densitateKgM3 * 0.9988473690911163;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }


    if(index == 18)
       {
            densitate = densitateKgM3 * 0.0005780366721308782;
            ui->lineEdit_18->setText(QString::number(densitate,'g',14));
       }
   else
           if(index == 19)
           {
               densitate = densitateKgM3 * 0.001;
               ui->lineEdit_18->setText(QString::number(densitate,'g',14));
           }

}

void Convertor::on_comboBox_10_activated(int index)
{
    transDensitateKgM3(index);
}

void Convertor::on_comboBox_11_activated(int index)
{
    transDensitateKgM3(ui->comboBox_10->currentIndex());
}

void Convertor::on_pushButton_11_clicked()
{
    ui->lineEdit_10->setText("");
    ui->lineEdit_18->setText("");

    ui->comboBox_10->setCurrentIndex(7);
    ui->comboBox_11->setCurrentIndex(7);

}


//Consum Combustibil

void Convertor::transConsumL(int index)
{
    if(index == 0) consumL = ui->lineEdit_21->text().toDouble();
    else if(index == 1) consumL = 100 / ui->lineEdit_21->text().toDouble();
    else if(index == 2) consumL = 235.2145833  / ui->lineEdit_21->text().toDouble();
    else if(index == 3) consumL = ui->lineEdit_21->text().toDouble() * 2.3521458 ;
    else if(index == 4) consumL = 282.4809363  / ui->lineEdit_21->text().toDouble();
    else if(index == 5) consumL = ui->lineEdit_21->text().toDouble() * 2.8248094 ;
    else if(index == 6) consumL = 62.1371192  / ui->lineEdit_21->text().toDouble();
    else if(index == 7) consumL = ui->lineEdit_21->text().toDouble() * 0.6213712 ;

     transConsum(ui->comboBox_23->currentIndex());
}

void Convertor::transConsum(int index)
{
    if(index == 0)
       {
            consum = consumL;
            ui->lineEdit_22->setText(QString::number(consum,'g',14));
       }
   else
           if(index == 1)
           {
               consum = 100.0 / consumL;

               ui->lineEdit_22->setText(QString::number(consum,'g',14));
           }
   else
           if(index == 2)
           {
               consum = 235.2145833 / consumL;
               ui->lineEdit_22->setText(QString::number(consum,'g',14));
           }
   else
           if(index == 3)
           {
               consum = consumL * 0.4251437 ;
               ui->lineEdit_22->setText(QString::number(consum,'g',14));
           }
   else
           if(index == 4)
           {
               consum = 282.4809363 / consumL;
               ui->lineEdit_22->setText(QString::number(consum,'g',14));
           }
   else
           if(index == 5)
           {
               consum = consumL * 0.3540062;
               ui->lineEdit_22->setText(QString::number(consum,'g',14));
           }
   else
           if(index == 6)
           {
               consum = 62.1371192 / consumL;
               ui->lineEdit_22->setText(QString::number(consum,'g',14));
           }
   else
           if(index == 7)
           {
               consum = consumL * 1.609344;
               ui->lineEdit_22->setText(QString::number(consum,'g',14));
           }
}



void Convertor::on_comboBox_22_activated(int index)
{
    transConsumL(index);
}

void Convertor::on_comboBox_23_activated(int index)
{
    transConsumL(ui->comboBox_22->currentIndex());
}


void Convertor::on_pushButton_10_clicked()
{
    ui->lineEdit_21->setText("");
    ui->lineEdit_22->setText("");

    ui->comboBox_22->setCurrentIndex(0);
    ui->comboBox_23->setCurrentIndex(0);
}
