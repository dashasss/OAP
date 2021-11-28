

#include <iostream>
/* Белодед пидор *\ 
using namespace std;




int main()
{
	setlocale(LC_ALL, "ru");

	int A, B, C;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A % 2 == 0 && B % 2 == 0) {
		cout << "\nA и B четные";


	}
	else if (A % 2 == 0 && C % 2 == 0) {
		cout << "\nA и C четный";
	}
	else if (B % 2 == 0 && C % 2 == 0) {
		cout << "\nC и B четные";
	}
	else {
		cout << "\nДвух четных нет!"; 
	}
}

