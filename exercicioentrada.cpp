#include <iostream>

using namespace std;

int main() {
	float num1, num2, num3;
	float media;

	cout << "digite o primeiro nummero: ";
	cin >> num1;
	cout << "digite o segundoo nummero: ";
	cin >> num2;
	cout << "digite o terceiro nummero: ";
	cin >> num3;
	cout << "os numeros digitados foram: " << "\n" << num1 << "\n" << num2 << "\n" << num3 << "\n" << endl;
	media = (num1 + num2 + num3) /3;
	cout<<" a media dos numeros informados e: " << media << endl;

	system("Pause");

}