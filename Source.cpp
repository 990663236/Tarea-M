
#include<iostream>
using namespace std;
int main() {

	int n, menor, nota, suma;

	float promedio;

	cout << "\ningrese la cantidad de alumnos: ";
	cin >> n;
	for (int j = 0; j < n; j++) {
		suma = 0;
		menor = 21;
		for (int k = 1; k <= 4; k++) {
			cout << "ingrese la nota: ";
			cin >> nota;
			suma = suma + nota;
			if (nota < menor) {
				menor = nota;

			}


		}

		promedio = (suma - menor) / 3;
		cout << "\n  el promedio:  " << j + 1 << "es: " << promedio << endl;
	}


	return 0;
}