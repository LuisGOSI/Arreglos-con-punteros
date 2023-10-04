#include "vectores.h"

Vectores::Vectores(int n)
{
    this->n=n;
    ar=new int[n];  //En esta linea se almacena memoria para el puntero
}

void Vectores::pideDatos(){
    for (int i = 0; i < n; ++i) {
        cout << "Ingresa un dato: ";
        cin >> *(ar+i);
    }
}

void Vectores::imprimir(){
    for (int i = 0; i < n; ++i)
        cout << i <<" Valor= "<<*(ar+i)<<endl;
}

bool Vectores::buscarSec(int ele){
    for (int i = 0; i < n; ++i) {
        if (ele == *(ar+i)) {
            cout << "Posicion de su busqueda: "<<i<<endl;
            cout << "Direccion de memoria: "<<(ar+i)<<endl;
        }
    }
    cout << "Valor no encontrado";
    return 0;
}

int Vectores::buscarSecRec(int ele, int pos){
    if (pos>=n ) return -1;
    if (*(ar+pos) == ele)return pos;
    return buscarSecRec(ele, pos+1);
}

void Vectores::burbujaIte(){
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(*(ar+i)>*(ar+j)){
                int temp=*(ar+i);
                *(ar+i)=*(ar+j);
                *(ar+j)=temp;
            }

        }
    }
}

int Vectores::buscaBinaria(int ele){
    int limSup=n-1;
    int limIn=0;
    while(limIn <= limSup) {
        int pos=((limIn+limSup)/2);
        if (*(ar+pos) == ele) {
            return pos;
        } else {
            if(*(ar) < ele){
                limIn=pos+1;
            }
            else{
                limSup=pos-1;
            }
        }
    }
    return -1;
}

int Vectores::buscaBinariaRec(int ele, int limI, int limS){
    if (limI>limS) return -1;
    int pos = (limI+limS)/2;
    if (*(ar+pos)==ele) return pos;
    if(*(ar)<ele) return buscaBinariaRec(ele, pos+1, limS);
    return buscaBinariaRec(ele, limI, pos-1);
}

void Vectores::quicksort() {
    quicksortRec(0,n-1);
}

void Vectores::quicksortRec(int li, int ls){
    if (li >= ls) return;
    int pos = posPiv(li, ls);
    quicksortRec(li, pos-1);
    quicksortRec(pos +1, ls);
}

int Vectores::posPiv(int li, int ls){
    int piv = *(ar + ls);
    int i=li-1;
    for (int j = li; j < ls; ++j) {
        if(*(ar+j)<piv){
            i++;
            if(i<j){
                swap(*(ar+i),*(ar+j));
            }
        }
    }
    swap(*(ar+i+1),*(ar+ls));
    return i+1;
}

//void Vectores::quicksortLu(int li, int ls){
//    int piv = *(ar+ls);
//    while (li!=ls) {
//        if(*(ar+li)<piv)
//            li=li+1;
//        if(li<ls)
//            swap(*(ar+li), *(ar+));
//    }
//}

void Vectores::insercion() {
    int temp = 0;
    for (int i = 1; i < n; ++i) {
        int j = i;
        temp = *(ar + i);
        while (j > 0 && *(ar + j - 1) > temp) {
            *(ar + j) = *(ar + j - 1);
            j--;
        }
        *(ar + j) = temp;
    }
}

void Vectores::insercionBinaria() {
    for (int i = 1; i < n; ++i) {
        int temp = *(ar + i);
        int low = 0;
        int high = i - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (*(ar + mid) > temp) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        for (int j = i - 1; j >= low; --j) {
            *(ar + j + 1) = *(ar + j);
        }

        *(ar + low) = temp;
    }
}




void Vectores::goyoplus() {
    int comp = 1;
    int i = 0;
    int j = n - 1;
    int k = 0;

    while (k <= j) {
        if (*(ar + k) < comp) {
            swap(*(ar + k), *(ar + i));
            i++;
            k++;
        } else if (*(ar + k) == comp) {
            k++;
        } else if (*(ar + k) > comp) {
            swap(*(ar + k), *(ar + j));
            j--;
        }
    }
}


















