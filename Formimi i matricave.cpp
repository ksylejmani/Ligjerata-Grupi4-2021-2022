//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	const int n = 4;
//	int A[n] = { -5,-10,-15,-20 };
//	int B[n][n] = { {4,4,4,4},{4,4,4,4} ,{4,4,4,4} ,{4,4,4,4} };
//	int C[n + 1][n + 1];
//	int i = 0;
//	do
//	{
//		int j = 0;
//		do
//		{
//			if (j == 0)
//				C[i][j] = -1;
//			else if (i == 0)
//				C[i][j] = A[j - 1];
//			else
//				C[i][j] = B[i - 1][j - 1];
//			j++;
//		} while (j<n+1);
//		i++;
//	} while (i<n+1);
//	cout << "Matrica:\n";
//	for (int i = 0; i < n + 1; i++) {
//		for (int j = 0; j < n + 1; j++){
//			cout <<setw(5)<< C[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}