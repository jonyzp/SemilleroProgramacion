using namespace std;
#include <iostream>

const int MAXN = 55;
int a [MAXN];
int main(){
int n, k;
cin >> n >> k;
for (int i = 0; i < n; i++) cin >> a[i];

 	int count = 0;
 	int min_score = a[k-1];
 	for (int i = 0; i < n; i++){
 	if (a[i] >= min_score and a[i] > 0) count++;
 	else break;
}
 	cout << count << endl;

 	return 0;
}