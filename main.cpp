#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    QCoreApplication::setOrganizationName("RDF");
    QCoreApplication::setApplicationName("Kaffeekasse");
    window.show();
    return app.exec();
    //Test
}
