#include <iostream>
using namespace std;

//Notacion O = n*sqrt(n)

bool esPrimo(int n){		//sqrt(n)
	if(n==2){
		return true;
	}
	if(!n%2){
		return false;
	}
	for(int i = 3; (i*i) <= n; i+=2){
		if(!(n%i)){
			return false;
		}
	}
	return true;
}

int main() {
	int tam;
	int actual;
	cin >> tam;
	for(int i = 0; i < tam; i++){	//n
		cin >> actual;
		if(esPrimo(actual)){		// sqrt(n)
			cout << "Si" << "\n";
		}
		else{
			cout << "No" << "\n";
		}
	}
	return 0;
}