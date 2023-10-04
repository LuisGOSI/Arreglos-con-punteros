#ifndef VECTORES_H
#define VECTORES_H
#include <iostream>
using namespace std;

class Vectores
{
private:
    int *ar;
    int n;
    int ele;
    void quicksortRec(int li,int ls);
    int posPiv(int li, int ls);

public:
    Vectores(int n);
    void pideDatos();
    void imprimir();
    bool buscarSec(int ele);
    int buscarSecRec(int ele, int pos);
    void burbujaIte();
    int buscaBinaria(int ele);
    int buscaBinariaRec(int ele, int limI, int limS);
    void quicksort();
    void quicksortLu(int li, int ls);
    void insercion();
    void insercionBinaria();
    void goyoplus();


};

#endif // VECTORES_H
