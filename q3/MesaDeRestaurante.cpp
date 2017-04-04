#include "MesaDeRestaurante.h"
#include <iostream>
#include <string>
#include "Pedido.h"

using namespace std;

int mesa = 0;

MesaDeRestaurante::MesaDeRestaurante()
{
    total = 0.0;
    for(int i = 0; i < 20; i++)
    {
        pedidos[i].setDescricao("");
        pedidos[i].setNumero(0);
        pedidos[i].setQuantidade(0);
        pedidos[i].setPreco(0);
    }
}

void MesaDeRestaurante::adicionaAoPedido()
{
    int num, qtd;
    double pre;
    string nom;
    cout << "Numero: " << endl;
    cin >> num;
    pedidos[mesa].setNumero(num);
    cout << "Descricao: " << endl;
    getline(cin, nom);
    pedidos[mesa].setDescricao(nom);
    cout << "Quantidade: " << endl;
    cin >> qtd;
    pedidos[mesa].setQuantidade(qtd);
    cout << "preco: " << endl;
    cin >> pre;
    pedidos[mesa].setPreco(pre);
    mesa++;

}

void MesaDeRestaurante::zeraPedidos()
{
    for(int i = 0 ; i < 20; i++)
    {
        pedidos[i].setDescricao("");
        pedidos[i].setNumero(0);
        pedidos[i].setQuantidade(0);
        pedidos[i].setPreco(0);
    }
}

double MesaDeRestaurante::calculaTotal()
{
    for(int i = 0; i < 20; i++)
    {
        total = total + pedidos[i].getPreco();
    }
}
