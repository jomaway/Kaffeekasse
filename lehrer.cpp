#include "lehrer.h"


Lehrer::Lehrer(QString v, QString n, double g)
    {
        this->vorname = v;
        this->nachname = n;
        this->guthaben = g;
    }

void Lehrer::setVname(QString v){this->vorname = v;}
void Lehrer::setNname(QString n){this->nachname = n;}
void Lehrer::setGuthaben(double g){this->guthaben = g;}

QString Lehrer::getVname(){return this->vorname;}
QString Lehrer::getNname(){return this->nachname;}
double Lehrer::getGuthaben(){return this->guthaben;}

void operator+=(Lehrer& l, double betrag){l.guthaben = l.guthaben + betrag;}
void operator-=(Lehrer& l, double betrag){l.guthaben = l.guthaben - betrag;}
