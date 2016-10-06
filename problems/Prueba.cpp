using namespace std;
#include <iostream>
#include <vector>

int main(void){
	vector <string> zeros (5, "0");
	for(int i = 0; i < zeros.size(); i++){
		cout << zeros[i] << endl;
	}
}
