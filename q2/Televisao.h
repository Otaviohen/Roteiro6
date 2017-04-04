#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    public:
        Televisao();
        void aumentarVolume();
        void diminuirVolume();
        void aumentarCanal();
        void diminuirCanal();
        void inserirCanal(int);
        int getVolume();
        int getCanal();

    protected:

    private:
        int volume;
        int canal;
};

#endif // TELEVISãO_H
