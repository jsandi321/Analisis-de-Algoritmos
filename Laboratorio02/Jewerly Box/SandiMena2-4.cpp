#include <iostream>
#include <cmath>
using namespace std;
/*
    Jeison Sandí Mena
    Kattis JewerlyBox
    Complejidad: 
*/

double jewerlyBox(int x, int y){
	double h;
	h = (x+y - sqrt((x+y)*(x+y) - 3 * x * y))/6;
	double volumenMax = (x-2*h)* (y-2*h) * h;
	return volumenMax;
}

int main(int argc, char const *argv[])
{
    //Lectura de datos y llamadas
    int inputs, x, y;
    cin >> inputs;
    for(int i = 0; i < inputs; i++){
        cin >> x;
        cin >> y;
        double volumenMax = jewerlyBox(x, y);
        cout << volumenMax << "\n";
    }
    return 0;
}
