//Using std c++ 11 compilation
#include <iostream>     // std::cout, cin
//#include <algorithm>	// std::max
using namespace std;

int emp1, emp2, emp3;
int testCases;

int middle(int a, int b, int c){
    if(a<=b and c>=b or c<=b and a>=b) return b;
    if(c<=a and b>=a or b<=a and c>=a) return a;
	if(b<=c and a>=c or a<=c and b>=c) return c;
}

int main (){
	cin >> testCases;
	for(int i=1; i <= testCases; ++i){
		cin >> emp1 >> emp2 >> emp3;
		cout << "Case " << i << ": " << middle(emp3, emp2, emp1) << endl;
	}
}