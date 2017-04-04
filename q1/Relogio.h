#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio
{
    public:
        Relogio();
        void setHorario(int, int, int);
        int getHora();
        int getMinuto();
        int getSegundo();
        void avancarHorario();

    protected:

    private:
        int hora;
        int minuto;
        int segundo;

};

#endif // RELOGIO_H
