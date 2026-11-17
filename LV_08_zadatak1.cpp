#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Upisi broj:" << endl;
	cin >> a >> b;
	int brojac = 0;
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0) {
			cout << i << " ";
			brojac++;
		}
	}
	if (brojac == 0) {
		cout << "NEMA" << endl;
	}
	else {
		cout << endl;
	}
	cout << "Broj prikaranih brojeva:" << brojac << endl;
	return 0;
} 