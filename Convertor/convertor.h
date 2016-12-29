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

    void transArieMp2(int index);
    void transArie(int index);

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

private:
    Ui::Convertor *ui;
};

#endif // CONVERTOR_H
