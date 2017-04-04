#include "RelogioTeste.h"
#include "Relogio.h"
#include <iostream>

using namespace std;

RelogioTeste::RelogioTeste()
{
    //ctor
}

void RelogioTeste::main()
{
    Relogio ho;
    ho.setHorario(19, 00, 59);
    cout << ho.getHora() << ":" << ho.getMinuto() << ":" << ho.getSegundo() << endl;
    ho.avancarHorario();
    cout << ho.getHora() << ":" << ho.getMinuto() << ":" << ho.getSegundo() << endl;

}
