//#include<iostream>
//using namespace std;
//int main() {
//	const int m = 3, n = 2;
//	int A[m][n]; //= { {-1,3},{8,2},{4,6} };
//	int k = 0;
//	cout << "Vlerat e matrices:\n";
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
//			cin >> A[i][j];
//		}
//	}
//	//for (int i = 0; i < m; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		if (A[i][j] % 4 == 0) {
//	//			k++;
//	//		}
//	//	}
//	//}
//	int i = 0;
//	do
//	{
//		int j = 0;
//		do
//		{
//			if (A[i][j] % 4 == 0)
//				k++;
//			j++;
//		} while (j<n);
//		i++;
//	} while (i<m);
//	cout << "Numri i anetareve qe plotepjestohen me 4 eshte: " << k << endl;
//	return 0;
//}