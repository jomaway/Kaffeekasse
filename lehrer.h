#ifndef LEHRER_H
#define LEHRER_H
#include <QString>

class Lehrer
{
private:
    QString vorname;
    QString nachname;
    double  guthaben;

public:
    Lehrer(QString v, QString n, double g);
    ~Lehrer(){}

    void setVname(QString v);
    void setNname(QString n);
    void setGuthaben(double g);

    QString getVname();
    QString getNname();
    double getGuthaben();

    friend void operator+=(Lehrer& l, double betrag);
    friend void operator-=(Lehrer& l, double betrag);

};

#endif // LEHRER_H
