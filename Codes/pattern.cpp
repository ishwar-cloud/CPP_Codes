/*
1     1
 2
   2  
  3 3
   4
  3 3 
 2   2 
1      1
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	if(n == 1) {
		cout << 1 << endl;
	} else {
		int space = 2 * (n - 1) - 1;
		int start = 0;
		
		for(int i = 1; i < n; i++) {
			for(int j = 0; j < start; j++) {
				cout << " ";
			}
			cout << i;
			for(int j = 0; j < space; j++) {
				cout << " ";
			}
			cout << i << endl;
			space -= 2;
			start++;
		}
		
		for(int j = 0; j < start; j++) {
			cout << " ";
		}
		cout << n << endl;
		start--;
		space = 1;
		for(int i = n - 1; i >= 1; i--) {
			for(int j = 0; j < start; j++) {
				cout << " ";
			}
			cout << i;
			for(int j = 0; j < space; j++) {
				cout << " ";
			}
			cout << i << endl;
			space += 2;
			start--;
		}
	}
	return 0;
}