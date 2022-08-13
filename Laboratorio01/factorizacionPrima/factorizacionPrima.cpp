#include <iostream>
#include <cmath>
using namespace std;

//Factorizacion Prima
//Notacion O = O(n^2)

void factorPrima(int n){
	for(int i = 2; n > 1; i++){
		while(n%i == 0){
			n = n/i;
			if(n > 1){
				cout << i <<"x";
			}
			else{
				cout << i;
			}
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
		factorPrima(actual);	//O(n)
	}
	return 0;
}