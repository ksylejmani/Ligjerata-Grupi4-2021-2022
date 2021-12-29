//#include <iostream>
//#include<math.h>
//using namespace std;
//float MSE(int m, float A[], float B[]);
//float MaxError(int m, float A[], float B[]);
//int main(){
//	const int m = 5;
//	float A[m] = {1.1,1,1.4,1,0.8};
//	float B[m] = { 1.2,1.5,1.1,0.7,1.3 };
//	cout << "Mean Squared Error: " << MSE(m, A, B) << endl;
//	cout << "Max Error: " << MaxError(m, A, B) << endl;
//	return 0;
//}
//float MSE(int m, float A[], float B[]) {
//	float s = 0;
//	int i = 0;
//	while (i<m)
//	{
//		s = s + pow(A[i] - B[i], 2);
//		i++;
//	}
//	return s / m;
//}
//float MaxError(int m, float A[], float B[]) {
//	float max = abs(A[0] - B[0]);
//	int i = 1;
//	while (i<m)
//	{
//		if (abs(A[i] - B[i]) > max) {
//			max = abs(A[i] - B[i]);
//		}
//		i++;
//	}
//	return max;
//}