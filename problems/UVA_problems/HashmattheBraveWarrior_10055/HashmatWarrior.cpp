//Using std c++ 11 compilation
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define D(x) cout << #x << " " << x <<endl
long long int oppNmbr = 0;
long long int mySoldiersNmbr = 0;
long long int dif = 0;
int main (){
	while(cin >> oppNmbr >> mySoldiersNmbr){
		dif = oppNmbr - mySoldiersNmbr;
		cout << ((dif >= 0) ? to_string(dif) : to_string(abs(dif))) << endl;
	}
}