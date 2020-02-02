#include<iostream>

using namespace std;

int main() {
	int num1 = 0; int num2 = 1; int num3; int aux; int n;
	cout << "Digite o numero: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		num3 = num2 + num1;
		if (n >= 1) {
			cout << num1 << ",";
			aux = num2;
			num2 = num3;
			num1 = aux;
			continue;
		}
	}
}