//#include<iostream>
//using namespace std;
//int main() {
//	const int m = 4;
//	int A[m][m] = { {1,3,7,-1},{-8,0,4,1},{6,5,3,1},{1,1,2,8} };
//	int s = 0, p = 1;
//	int i = 0;
//	do
//	{
//		int j = 0;
//		do
//		{
//			cout << "Test\n";
//			if (i == j) {
//				s += A[i][j];
//			}
//			else if (i < j) {
//				p *= A[i][j];
//			}
//			j++;
//		} while (j<m);
//		i++;
//	} while (i<m);
//	cout << "Shuma: " << s << endl
//		<< "Prodhimi: " << p << endl;
//	return 0;
//}