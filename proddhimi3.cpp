#include <iostream>
using namespace std;
int main() {
	int n, p = 1;
	cout<< "Cakto numrin n";
	cin >> n;
	for (int i = 2; i <= n; i++) {
		
		if (i != 5) {
			p = p * i;
		}
		
	}
	cout << p;
	return 0;

}