#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include <string>
#include "Pedido.h"

using namespace std;



class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido();
        void zeraPedidos();
        double calculaTotal();

    protected:

    private:
        Pedido pedidos[20];
        double total;

};

#endif // MESADERESTAURANTE_H
