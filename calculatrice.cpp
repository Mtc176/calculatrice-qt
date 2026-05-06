#include "calculatrice.h"
#include "./ui_calculatrice.h"

Calculatrice::Calculatrice(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculatrice)
{
    ui->setupUi(this);
    connect(ui->btn_0, &QPushButton::clicked, this, &Calculatrice::ajouterChiffre);
    connect(ui->btn_1, &QPushButton::clicked, this, &Calculatrice::ajouterChiffre);
    connect(ui->btn_2, &QPushButton::clicked, this, &Calculatrice::ajouterChiffre);
    connect(ui->btn_3, &QPushButton::clicked, this, &Calculatrice::ajouterChiffre);
    connect(ui->btn_4, &QPushButton::clicked, this, &Calculatrice::ajouterChiffre);
    connect(ui->btn_5, &QPushButton::clicked, this, &Calculatrice::ajouterChiffre);
    connect(ui->btn_6, &QPushButton::clicked, this, &Calculatrice::ajouterChiffre);
    connect(ui->btn_7, &QPushButton::clicked, this, &Calculatrice::ajouterChiffre);
    connect(ui->btn_8, &QPushButton::clicked, this, &Calculatrice::ajouterChiffre);
    connect(ui->btn_9, &QPushButton::clicked, this, &Calculatrice::ajouterChiffre);


}

Calculatrice::~Calculatrice()
{
    delete ui;
}

void Calculatrice::on_btn_1_clicked()
{


    qDebug()<<"Ok";

}




void Calculatrice::ajouterChiffre()
{
    QPushButton *button = (QPushButton*) sender();
    QString chiffre = button->text();

    if (nouveauNombre) {
        ui->lineEdit->setText(chiffre);
        nouveauNombre = false;
    } else {
        ui->lineEdit->setText(ui->lineEdit->text() + chiffre);
    }
}
void Calculatrice::on_reset_clicked()

{
    ui->lineEdit->clear();
}


void Calculatrice::on_pushButton_14_clicked()
{

    premierNombre = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("+");
    operation = "+";
    nouveauNombre = true;
}


void Calculatrice::on_pushButton_13_clicked()
{
    double deuxiemeNombre = ui->lineEdit->text().toDouble();
    double resultat = 0;

    if (operation == "/") {
        resultat = premierNombre / deuxiemeNombre;
    }

    if (operation == "x") {
        resultat = premierNombre * deuxiemeNombre;
    }

    if (operation == "-") {
        resultat = premierNombre - deuxiemeNombre;
    }

    if (operation == "+") {
        resultat = premierNombre + deuxiemeNombre;
    }

    ui->lineEdit->setText(QString::number(resultat));
    nouveauNombre = true;
}


void Calculatrice::on_pushButton_15_clicked()
{
    premierNombre = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText(ui->lineEdit->text()+"-");
    operation = "-";
    nouveauNombre = true;
}


void Calculatrice::on_pushButton_16_clicked()
{
    premierNombre = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("x");
    operation = "x";
    nouveauNombre = true;
}


void Calculatrice::on_pushButton_20_clicked()
{
    premierNombre = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("/");
    operation = "/";
    nouveauNombre = true;
}

