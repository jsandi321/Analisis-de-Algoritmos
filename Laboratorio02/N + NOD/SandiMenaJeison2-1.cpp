#include <iostream>
#include <cmath>
using namespace std;
/*
    Jeison Sandí Mena
    UVa 11876 N + NOD (N)
    Complejidad: 
*/
//Calcular NOD
int NOD(int n){
    //Complejidad: O(n) = sqrt(n)
    int factores = 2;
    for(int i = 1; i < sqrt(n); i++){
        if(n%i == 0){
            factores ++;
            factores ++;
        }
    }
    return factores;
}

//Secuencia
int main(int argc, char const *argv[])
{
    /* code */
    int testing = NOD(100);
    cout<<testing;
    return 0;
}
