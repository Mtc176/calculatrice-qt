#include "calculatrice.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    a.setStyleSheet(
        "QPushButton {"
        " background-color: #222222;"
        " border-radius: 25px;"
        " border: none;"
        " min-width: 50px;"
        " min-height: 50px;"
        " max-width: 50px;"
        " max-height: 50px;"
        " font-size: 18px;"
        " font-weight: bold;"
        " color: white;"
        "}"

        "QPushButton:hover {"
        " background-color: #444444;"
        "}"

        "QPushButton:pressed {"
        " background-color: #222222;"
        "}"
        );


    Calculatrice w;
    w.show();
    return QCoreApplication::exec();
}
