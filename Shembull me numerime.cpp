//#include<iostream>
//#include<string>
//using namespace std;
//enum course {
//	Math=1,
//	Physics,
//	BasicsE,
//	BasicsP,
//	Elective
//};
//int main() {
//	course c;
//	string courses[] = { "Math","Physics","Basics of Electrotechnics","Basics of Programming","Elective" };
//	int intC;
//	cout << "Write the number of a course (1 to 5): ";
//	cin >> intC;
//	c = static_cast<course>(intC);
//	
//	cout << "Number of ECTS credits for "
//		<<courses[c-1]
//		<<" is: ";
//	switch (c)
//	{
//	case Math:
//		cout << 7;
//		break;
//	case Physics:
//		cout << 6;
//		break;
//	case BasicsE:
//		cout << 7;
//		break;
//	case BasicsP:
//		cout << 5;
//		break;
//	case Elective:
//		cout << 5;
//		break;
//	default:
//		cout << "Unknown course!";
//		break;
//	}
//	cout << endl;
//	return 0;
//
//}