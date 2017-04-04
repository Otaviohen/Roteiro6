#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include <string>
#include "MesaDeRestaurante.h"
#include "Pedido.h"

using namespace std;



class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        //void adicionaAoPedido();
        double calculaTotalRestaurante();
        MesaDeRestaurante mesas[30];

    protected:

    private:
        double totalvendas;
        int nmesa;
        int qtd;

};

#endif // RESTAURANTECASEIRO_H
