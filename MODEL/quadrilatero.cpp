#include "quadrilatero.h"

/*  CONTROLLI DA FARE:
 * -    somma degli angoli = 360
*/

quadrilatero::quadrilatero(double lato, colore* col) : poligono(4, "quadrato", col) {
    QVector<punto> punti;
    punti.push_back(punto(0,0));
    punti.push_back(punto(lato,0));
    punti.push_back(punto(lato,lato));
    punti.push_back(punto(0,lato));
    setPunti(punti);
}

quadrilatero::quadrilatero(double latoA, double latoB, colore* col) : poligono(4, "quadrato", col){
    QVector<punto> punti;
    punti.push_back(punto(0,0));
    punti.push_back(punto(latoA,0));
    punti.push_back(punto(latoA,latoB));
    punti.push_back(punto(0,latoB));
    setPunti(punti);
}
/*
quadrilatero::quadrilatero(double latoA, double latoB, double latoC, double latoD, angolo a, angolo b, angolo c, colore* col){

}

double quadrilatero::getArea()const{

}
*/