#include <iostream>
#include <cmath>
using namespace std;
/*
    Jeison Sandí Mena
    UVa 11876 N + NOD (N)
    Complejidad: 
*/
//Calcular NOD
long int NOD(int n){
    //Complejidad: O(n) = sqrt(n)
    int divisores = 0;
    for(int i = 1; i <= sqrt(n); i++){
    	if(i*i == n){
        	divisores +=1;
        }
        else{
        	if(n%i == 0){
            divisores += 2;
        	}
        }
    }
    return divisores;
}

//Secuencia
int main(int argc, char const *argv[])
{
    /* code */
    long int testing = NOD(100);
    cout<<testing;
    return 0;
}
