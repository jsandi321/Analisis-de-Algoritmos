#include <iostream>
#include <vector>
using namespace std;


int main() {
	// your code goes here
	int b, r;
	cin >> b;
	for(int i = 1; i <= b; i++){
		cin >> r;
		//vector<int> routes(r-1);
		int s;
        int sum = 0, start = 0, temp = 1, final = 0, max = 0;
		for(int j = 2; j <= r; j++){
            cin >> s;
            sum += s;
            if (sum > max || (sum == max && (j - temp > final - start))){
                max = sum;
                start = temp;
                final = j;
            }
            if(sum < 0) sum = 0, temp = j;
        }
        if(max > 0){
            cout << "The nicest part of route " << i <<" is between stops "<< start <<" and " << final <<"\n";
        }
        else{
            cout <<"Route " << i <<" has no nice parts" << "\n";
        }
	}
	return 0;
}