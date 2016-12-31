#ifndef CONVERTOR_H
#define CONVERTOR_H

#include <QMainWindow>

namespace Ui {
class Convertor;
}

class Convertor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Convertor(QWidget *parent = 0);
    ~Convertor();

private slots:
    void on_pushButton_clicked();

    void transVitezaMps(int index);
    void transViteza(int index);

    void transMasaKg(int index);
    void transMasa(int index);

    void transEnergieJ(int index);
    void transEnergie(int index);

    void transArieMp2(int index);
    void transArie(int index);

    void transTemperaturaC(int index);
    void transTemperatura(int index);


    void transTimpMin(int index);
    void transTimp(int index);

    void transVolumMp3(int index);
    void transVolum(int index);

    void on_comboBox_activated(int index);

    void transLungimeM(int index);

    void transLungime(int index);

    void on_comboBox_12_activated(int index);

    void on_pushButton_2_clicked();

    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_2_activated(int index);

    void on_comboBox_16_activated(int index);

    void on_pushButton_3_clicked();

    void on_comboBox_3_activated(int index);

    void on_comboBox_17_activated(int index);

    void on_pushButton_5_clicked();

    void on_comboBox_4_activated(int index);

    void on_comboBox_15_activated(int index);

    void on_pushButton_4_clicked();

    void on_comboBox_5_activated(int index);

    void on_comboBox_13_activated(int index);

    void on_pushButton_9_clicked();

    void on_comboBox_6_activated(int index);

    void on_comboBox_20_activated(int index);

    void on_pushButton_8_clicked();

    void on_comboBox_7_activated(int index);

    void on_comboBox_14_activated(int index);

    void on_pushButton_7_clicked();

    void on_comboBox_8_activated(int index);

    void on_comboBox_18_activated(int index);

    void on_pushButton_6_clicked();

private:
    Ui::Convertor *ui;
};

#endif // CONVERTOR_H
