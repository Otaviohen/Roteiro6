#include "Pedido.h"
#include <iostream>
#include <string>

using namespace std;

Pedido::Pedido()
{
    //ctor
}
void Pedido::setNumero(int n)
{
    numero = n;
}
int Pedido::getNumero()
{
    return numero;
}
void Pedido::setDescricao(string d)
{
    descricao = d;
}
string Pedido::getDescricao()
{
    return descricao;
}
void Pedido::setQuantidade(int q)
{
    quantidade = q;
}
int Pedido::getQuantidade()
{
    return quantidade;
}
void Pedido::setPreco(double p)
{
    preco = p;
}
double Pedido::getPreco()
{
    return preco;
}
