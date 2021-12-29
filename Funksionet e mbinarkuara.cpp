//#include<iostream>
//using namespace std;
//int numro(int a, int b, int m, int A[]) {
//	int k = 0;
//	for (int i = 0; i < m; i++) {
//		if (A[i] >= a && A[i] <= b) {
//			k++;
//		}
//	}
//	return k;
//}
//int numro(int a, int b,int c, int d, int m, int A[]) {
//	int k = 0;
//	for (int i = 0; i < m; i++) {
//		if ((A[i] >= a && A[i] <= b)|| (A[i] >= c && A[i] <= d)) {
//			k++;
//		}
//	}
//	return k;
//}
//int main() {
//	const int m = 8;
//	int a = 0, b = 2, c = 4, d = 7;
//	int A[m] = { 0,-4,1,2,-9,6,10,2 };
//	cout << "Numri i vlera ne mes " << a << " dhe " << b << " eshte: "
//		<< numro(a, b, m, A) << endl;
//	cout << "Numri i vleave ne diapazonin ne mes te " << a << " dhe "
//		<< b << ", si dhe ne mes te " << c << " dhe " << d << " eshte: "
//		<< numro(a, b, c, d, m, A) << endl;
//	return 0;
//}