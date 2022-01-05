//#include<iostream>
//using namespace std;
//enum course {
//	math,programming, eletrotechnics,physics,elective 
//};
//struct grade {
//	int exam, lectures, lab;
//	int calculateGrade();
//};
//int main() {
//	grade gS1 = { 78,10,7 }, gS2 = { 42,10,10 };
//	cout << "First student's grade: " << gS1.calculateGrade() << endl;
//	cout << "Second student's grade: " << gS2.calculateGrade() << endl;
//}
//int grade::calculateGrade()
//{
//	int result;
//	int total = exam + lectures + lab;
//	if ((exam < 40) ||(total<50)) {
//		result = 5;
//	}
//	else {
//		if (total < 60) {
//			result = 6;
//		}
//		else if (total < 70) {
//			result = 7;
//		}
//		else if (total < 80) {
//			result = 8;
//		}
//		else if (total < 90) {
//			result = 9;
//		}
//		else {
//			result = 10;
//		}
//	}
//	return result;
//}