#include <iostream>
using namespace std;

int main() // inceputul functiei
{
	cout << "\n\n Print the sum of 2 numbers : \n"; // mesaj initial
	cout << "----------------------------------\n"; // linie care separa

	int a, b, sum;
	cout << "a="; // introdu un numar
		cin >> a; // se citeste nr
	cout << "b="; // introdu un numar
		cin >> b; // se citeste nr

	sum = a + b; // aici se va calcula suma dintre cele doua variabile

	cout << "The sum of " << a << " and " << b << " is: " << sum << "\n\n";

		return 0;
}

