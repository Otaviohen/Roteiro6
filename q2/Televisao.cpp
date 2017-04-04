#include "Televisao.h"
#include <iostream>

using namespace std;

Televisao::Televisao()
:
volume(0),
canal(0)
{
    //ctor
}

void Televisao::aumentarVolume()
{
    volume++;
}

void Televisao::diminuirVolume()
{
    volume--;
}


void Televisao::aumentarCanal()
{
    canal++;
}

void Televisao::diminuirCanal()
{
    canal--;
}
void Televisao::inserirCanal(int c)
{
    canal = c;
}

int Televisao::getVolume()
{
    return volume;
}
int Televisao::getCanal()
{
    return canal;
}
