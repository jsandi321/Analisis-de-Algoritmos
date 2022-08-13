#include <iostream>
#include <cmath>
using namespace std;

//Factorizacion Prima
//Notacion O = O(log(n))

void factorPrima(int n){
	for(int i = 2; n > 1; i++){
		while(n%i == 0){
			cout << i <<"x";
			n = n/i;
		}
	}
	cout << "\n";
}

int main() {
	
	int tam;
	int actual;
	cin >> tam;
	for(int i = 0; i < tam; i++){
		cin >> actual;
		factorPrima(actual);
	}
	return 0;
}