#include <iostream>
#include <algorithm>

using namespace std;
/*
    Jeison Sandí Mena
    UVa 12965 Angry Bids
    Complejidad: 

*/


int main() {
    //Lectura de datos
	int T, P, C;
	cin >> T;
	for(int i = 0; i < T; i++){
		cin >> P;
		cin >> C;
		int preciosP[P];
		int preciosC[C];
		for(int i = 0; i < P; i++){
			int precioActual;
			cin >> precioActual;
			preciosP[i] = precioActual;
		}
		for(int i = 0; i < C; i++){
			int precioActual;
			cin >> precioActual;
			preciosC[i] = precioActual;
		}

        //Ordenamiento de arreglos
        sort(preciosP, preciosP + sizeof preciosP/sizeof preciosP[0]);
        sort(preciosC, preciosC + sizeof preciosC/sizeof preciosC[0]);
        

	}
	return 0;
}