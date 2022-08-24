#include <iostream>
#include <cmath>
using namespace std;
/*
    Jeison Sandí Mena
    UVa 11876 N + NOD (N)
    Complejidad: 
*/
const int MAX = 1000001;
long int V[MAX+1];

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

void calcularSecuencia( ){
	V[0] = 1;
	//int inicio = A;
	for(int i = 1; i <= MAX; i++){
		V[i] = V[i-1] + NOD(V[i-1]);
		//cout << V[i] << "\n";
	}
}

int busquedaBinaria(int clave){
	int arriba = sizeof V/sizeof V[0]+1;
	int abajo = 0;
	int centro = 0;
	while(abajo <= arriba){
		centro = (abajo+arriba)/2;
		if(V[centro] == clave){
			return centro + 1;
		}
		else{
			if(clave < V[centro]){
				arriba = centro - 1;
			}
			else{
				abajo = centro +1;
			}
		}
	}
	//cout << "No encontrado, el más cercano es: " << centro << "\n";
	return centro;
}

//Secuencia
int main(int argc, char const *argv[])
{
	calcularSecuencia();	//Calcular secuencia principal
	int T, A, B;
	cin >> T;
	for(int i = 1; i <= T; i++){
		cin >> A;
		cin >> B;
		int indexB = busquedaBinaria(B);
		int indexA = busquedaBinaria(A);
		int dif = (indexB - indexA) + 1;
		cout <<"Case "<< i <<": "<<dif << "\n";
		
	}
    return 0;
}
