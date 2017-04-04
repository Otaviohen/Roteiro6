#include "TelevisaoTeste.h"
#include "Televisao.h"
#include <iostream>

using namespace std;

TelevisaoTeste::TelevisaoTeste()
{
    //ctor
}

void TelevisaoTeste::main()
{
    Televisao t;
    t.aumentarVolume();
    t.aumentarVolume();
    t.aumentarCanal();
    t.aumentarCanal();
    t.aumentarCanal();

    cout << "Canal: " << t.getCanal() << endl;
    cout << "Volume: " << t.getVolume() << endl;
    t.diminuirCanal();
    t.diminuirVolume();

    cout << "Canal: " << t.getCanal() << endl;
    cout << "Volume: " << t.getVolume() << endl;

}
