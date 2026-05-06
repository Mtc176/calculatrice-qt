#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculatrice;
}
QT_END_NAMESPACE

class Calculatrice : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculatrice(QWidget *parent = nullptr);
    ~Calculatrice() override;
    void ajouterChiffre();

private slots:
    void on_btn_1_clicked();

    void on_reset_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_20_clicked();

private:
    Ui::Calculatrice *ui;
    double premierNombre;
    QString operation;
    bool nouveauNombre;
};
#endif // CALCULATRICE_H
