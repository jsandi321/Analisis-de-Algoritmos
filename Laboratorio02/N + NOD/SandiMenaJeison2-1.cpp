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

void calcularSecuencia(int max){
	long int V[max+1];
	V[0] = 1;
	//int inicio = A;
	for(int i = 1; i <= max; i++){
		V[i] = V[i-1] + NOD(V[i-1]);
		cout << V[i] << "\n";
	}
}

//Secuencia
int main(int argc, char const *argv[])
{
	int T, A, B;
	cin >> T;
	for(int i = 1; i <= T; i++){
		cin >> A;
		cin >> B;
		
		calcularSecuencia(9999);
		cout << "Secuencia Calculada";
		
	}
    return 0;
}
