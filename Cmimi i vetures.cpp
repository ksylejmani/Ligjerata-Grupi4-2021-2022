#include<iostream>
#include<string>
using namespace std;
enum Transmisioni { manual, automatik };
struct Vetura {
	string tipi;
	Transmisioni transmisioni;
	int vitiProdhimit;
};
double cmimi(Vetura vetura) {
	double rezultati;
	if (vetura.vitiProdhimit >= 2010) {
		rezultati = 10000;
	}
	else {
		rezultati = 5000;
	}
	if (vetura.transmisioni == automatik) {
		rezultati *= 1.2;
	}
	return rezultati;
}
int main() {
	Vetura v = { "Golf",Transmisioni::automatik,2015 };
	cout << "\x80mimi: " << cmimi(v) << "0x80" << endl;
	return 0;
}