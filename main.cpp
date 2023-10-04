#include <QCoreApplication>
#include "vectores.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int n, ele;
    cout << "Cuantos elementos? ";
    cin >> n;
    Vectores vec(n);
    vec.pideDatos();
    vec.goyoplus();//    vec.burbujaIte();
//    cout << "Ingresa el dato que quieres buscar: ";
//    cin >> ele;
    vec.imprimir();
//    int pos= vec.buscaBinariaRec(ele, 0, n-1);
//    if (pos == -1) {
//        cout << "No se encontro el elemento deseado";
//    }
//    else{
//    cout << "Se encuentra en: "<<pos;
//    }
//    vec.imprimir();
    //    vec.buscarSec(ele);
    //    int pos=vec.buscarSecRec(ele, 0);
    //    if (pos == -1) cout << "No se encuentra";
    //    else
    //    cout << "Se encuentra en la pos: "<<pos;
    //  vec.imprimir();

    return a.exec();
}
