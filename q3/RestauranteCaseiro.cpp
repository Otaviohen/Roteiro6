#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"
#include <iostream>
#include <string>
#include "Pedido.h"

using namespace std;

RestauranteCaseiro::RestauranteCaseiro()
{
    totalvendas = 0.0;
}

/*void RestauranteCaseiro::adicionaAoPedido()
{
    cout << "Digite o numero da mesa: " << endl;
    cin >> nmesa;
    mesas[nmesa].adicionaAoPedido();
}*/

double RestauranteCaseiro::calculaTotalRestaurante()
{
    for(int i = 0; i < 30; i++)
    {
        totalvendas = totalvendas + mesas[i].calculaTotal();
    }

}
