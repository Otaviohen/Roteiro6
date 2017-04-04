#include "Relogio.h"
#include <iostream>

using namespace std;

Relogio::Relogio()
:
hora(0),
minuto(0),
segundo(0)
{
    //ctor
}

void Relogio::setHorario(int h, int m, int s)
{
    hora = h;
    minuto = m;
    segundo = s;
}

int Relogio::getHora()
{
    return hora;
}

int Relogio::getMinuto()
{
    return minuto;
}

int Relogio::getSegundo()
{
    return segundo;
}

void Relogio::avancarHorario()
{
    segundo++;
    if(segundo == 60)
    {
        minuto++;
        segundo = 0;
    }
    if(minuto == 60)
    {
        hora++;
        minuto = 0;
    }

}
