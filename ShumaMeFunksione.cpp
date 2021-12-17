#include<iostream>
using namespace std;
double shuma(int a, int b, float c, int d) {
	double s = 0;
	int i = a;
	do
	{
		s = s + (c * i + d);
		i++;
	} while (i<=b);
	return s;
}
int main(){
	int m = 3;
	double y = shuma(2, m, 1, 0) + shuma(1, m - 1, 1, 2) + 4 * shuma(3, m + 1, 3 / 2.0, 2);
	cout << "y=" << y << endl;
	return 0;
}