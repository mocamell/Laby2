
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	/*
	int liczba;

	cout << "Podaj liczbe: ";
	cin >> liczba;

	cout << "START" << endl;

	if (liczba > 0) {
		cout << "Liczba jest dodatnia" << endl;

		if (liczba % 2 == 0) {
			cout << "Liczba jest parzysta" << endl;
		}
		else {
			cout << "Liczba jest nieparzysta" << endl;
		}
	}
	else if (liczba < 0) {
		cout << "Liczba jest ujemna" << endl;
	}
	else {
		cout << "Liczba jest rowna zero" << endl;
	}

	cout << "KONIEC" << endl;
	*/
	/*
		float i = 0.0;
		while (i != 5.0) {
			cout << "Wartosc i = " << i << endl;
			i = i + 0.05;

			//if (i > 10)
			//    break;
		}
		*/

		//Zad1
	/*
	int a;
	int b;
	cout << "Podaj pierwsza liczbe calkowita: ";
	cin >> a;
	cout << "Podaj druga liczbe calkowita: ";
	cin >> b;
	if (a == b) {
		cout << "Liczby sa rowne" << endl;
	}
	else if (a < b) {
		cout << "Pierwsza liczba jest mniejsza od drugiej " << endl;
	}
	else if (a > b) {
		cout << "Pierwsza liczba jest wieksza od drugiej " << endl;
	}
	*/

	//Zad2
	/*
	int a;
	int b;
	cout << "Podaj pierwsza liczbe calkowita: ";
	cin >> a;
	cout << "Podaj druga liczbe calkowita: ";
	cin >> b;
	if (a == b) {
		cout << "Liczby sa rowne" << endl;
	}
	else {
		if (a < b) {
			cout << "Pierwsza liczba jest mniejsza od drugiej " << endl;
		}
		else {
			if (a > b) {
				cout << "Pierwsza liczba jest wieksza od drugiej " << endl;
			}
		}
	}
	*/
	//Zad3	
	/*
	double r;
	cout << "Podaj wspolczynnik r (od 0 do 1): ";
	cin >> r;
	if (r >= 0.7 && r <= 1) {
		cout << "Bardzo silna korelacja dodatnia" << endl;
	}
	else if (r >= 0.5 && r < 0.7) {
		cout << "Silna korelacja dodatnia" << endl;
	}
	else if (r >= 0.3 && r < 0.5) {
		cout << "Umiarkowana korelacja dodatnia" << endl;
	}
	else if (r >= 0.2 && r < 0.3) {
				cout << "Slaba korelacja dodatnia" << endl;
	}
	else if (r >= 0 && r < 0.2) {
		cout << "Brak korelacji" << endl;
	}
	*/
	//Zad4 
/*
double a;
double b;
double dodawanie, odejmowanie, mnozenie, dzielenie;
char znak;
cout << "Podaj pierwsza liczbe zmiennoprzecinkowa:";
cin >> a;
cout << "Podaj druga liczbe zmiennoprzecinkowa:";
cin >> b;
cout << "Podaj znak dzialania (+, -, *, /):";
cin >> znak;
if (znak == '+') {
	dodawanie = a + b;
	cout << "Wynik dodawania: " << dodawanie << endl;
}
else if (znak == '-') {
	odejmowanie = a - b;
	cout << "Wynik odejmowania: " << odejmowanie << endl;
}
else if (znak == '*') {
	mnozenie = a * b;
	cout << "Wynik mnozenia: " << mnozenie << endl;
}
else if (znak == '/') {
	if (b == 0) {
		cout << "Nie mozna dzielic przez zero!!" << endl;
	}
	else {
		dzielenie = a / b;
		cout << "Wynik dzielenia: " << dzielenie << endl;
	}
}*/

//Zad5
/*
for (int i = 0; ; i++) {
	cout << i;
}
*/
/*
while (1) {
	cout << "wow!" << endl;
}
*/
//Zad 6
/*
		double a;
		double b;
		double dodawanie, odejmowanie, mnozenie, dzielenie;
		char znak;
		char k;
	while(1) {
		cout << "Podaj pierwsza liczbe zmiennoprzecinkowa:";
		cin >> a;
		cout << "Podaj druga liczbe zmiennoprzecinkowa:";
		cin >> b;
		cout << "Podaj znak dzialania (+, -, *, /):";
		cin >> znak;
		if (znak == '+') {
			dodawanie = a + b;
			cout << "Wynik dodawania: " << dodawanie << endl;
		}
		else if (znak == '-') {
			odejmowanie = a - b;
			cout << "Wynik odejmowania: " << odejmowanie << endl;
		}
		else if (znak == '*') {
			mnozenie = a * b;
			cout << "Wynik mnozenia: " << mnozenie << endl;
		}
		else if (znak == '/') {
			if (b == 0) {
				cout << "Nie mozna dzielic przez zero!!" << endl;
			}
			else {
				dzielenie = a / b;
				cout << "Wynik dzielenia: " << dzielenie << endl;
			}
		}
		cout << "Czy chcesz zakonczyc dzialanie programu? (T/N): ";
			cin >> k;
		if (k == 'T') {
			return 0;
			}
	}
	*/
//Zad7
/*
int i = 0;
while (1) {
	if (i == 200) {
		break;
	}
	if (i % 2 == 0) {
		i++;
		continue;
	}
	
	cout << i << endl;
	i++;
}
*/
//Zad8
/*
int n;
char t = 0;
cout << "Podaj dodatnia liczbe naturalna: ";
cin >> n;
double p = sqrt(n);
for (int i = 2; i <= p; i++) {
	if (n % i == 0) {
		cout << "Jeden z dzielnikow tej liczby to: " << i << endl;
		t = 'T';
		break;
	}
	
}
if (t != 'T') {
	cout << "Wybrana liczba nie ma dzielnikow w tym zakresie." << endl;
}
*/
//Zad9
/*
int c;
cout << "Podaj temperature w stopniach Celsiusza: ";
cin >> c;
if (c < 0) {
	cout << "Mroz" << endl;
}
else if (c >= 0 && c < 10) {
	cout << "Zimno" << endl;
}
else if (c >= 10 && c < 20) {
	cout << "Umiarkowanie" << endl;
}
else if (c >= 20 && c < 30) {
	cout << "Cieplo" << endl;
}
else {
	cout << "Goraca" << endl;
}
*/
//Zad10
/*
int a, b, c;
cout << "Podaj pierwsza liczbe calkowita: ";
cin >> a;
cout << "Podaj druga liczbe calkowita: ";
cin >> b;
cout << "Podaj trzecia liczbe calkowita: ";
cin >> c;
if (a > b && a > c) {
	cout << "Najwieksza jest liczba " << a;
}
else if (b > a && b > c) {
	cout << "Najwieksza jest liczba " << b;
}
else if (c>a && c>b) {
	cout << "Najwieksza jest liczba " << c;
}
else if (a == b && a > c) {
	cout << "Najwieksze sa dwie wartosci rowne " << a;
}
else if (a == c && a>b) {
	cout << "Najwieksze sa dwie wartosci rowne " << a;
}
else if (c == b && c>a) {
	cout << "Najwieksze sa dwie wartosci rowne " << c;
}
else {
	cout << "Wszystkie wartosci sa rowne i wynosza " << a;
}
*/

//Zad 11
/*
int rok;
cout << "Podaj rok kalendarzowy: ";
cin >> rok;
if (rok % 4 == 0 && rok % 100 != 0) {
	cout << "Rok jest przestepny!" << endl;
}
else if (rok % 4 == 0 && rok % 100 == 0 && rok % 400 == 0) {
	cout << "Rok jest przestepny!" << endl;
}
else {
	cout << "Rok nie jest przestepny!" << endl;
}
*/
//Zad12
/*
int n;
cout << "Wybierz numer od 1 do 4: ";
cin >> n;
switch (n) {
case 1: 
	cout << "START" << endl;
	break;
case 2:
	cout << "USTAWIENIA" << endl;
	break;
case 3:
	cout << "POMOC" << endl;
	break;
case 4:
	cout << "KONIEC" << endl;
	break;
default:
	cout << "Wybrales niewlasciwy numer, sprobuj ponownie." << endl;
	break;

}
*/
//Zad13
/*
int o;
cout << "Wpisz ocene od 1 do 5: ";
cin >> o;
switch (o) {
case 1:
	cout << "niedostateczny" << endl;
	break;
case 2:
	cout << "dopuszczający" << endl;
	break;
case 3:
	cout << "dostateczny" << endl;
	break;
case 4:
	cout << "dobry" << endl;
	break;
case 5:
	cout << "bardzo dobry" << endl;
default:
	cout << "Wpisales niewlasciwa ocene, sprobuj ponownie." << endl;
	break;

}
*/
//zad14
/*
int suma = 0;
for (int i = 1;i <= 100;i++) {
	if (i % 3 == 0) {
		continue;
	}
	suma = suma + i;
}
cout << suma;
*/
//Zad15
/*
for (int i = 1;i <= 100;i++) {
	if (i > 50 && i % 7 == 0) {
		cout << i;
		break;
	}
}
*/
/*Nie ma potrzeby sprawdzać do 1000 bo interesuje nas tylko pierwsza liczba
spełniająca warunek
*/
//Zad16
/*
int wynik = 0;
for (int i = 1;i <= 10;i++) {
	for (int f = 1;f <= 10;f++) {
		wynik = i * f;
		cout << i << "*" << f << "=" << wynik << endl;
	}
}
*/
//Zad17
/*
int c;
int l = 0;
cout << "Podaj nieujemna liczbe calkowita: ";
cin >> c;
if (c == 0) {
	l = 1;
}
else {
	while (c > 0) {
		c = c / 10;
		l++;
	}
}
cout << "Liczba cyfr: " << l << endl;
*/
// Zad18
/*
int n;
cout << "Podaj liczbe calkowita: ";
cin >> n;
double limit = sqrt(n);
if (n <= 1) {
	cout << "To nie jest liczba pierwsza!" << endl;
}
for (int i = 2; i <= limit; i++) {
	if (n % i == 0) {
		cout << "To nie jest liczba pierwsza!" << endl;
		break;
	}
	else {
		cout << "To jest liczba pierwsza!" << endl;
	}
}
*/
//Zad19
/*
int n;
do {
	cout << "Wybierz numer od 1 do 4: ";
	cin >> n;
	switch (n) {
	case 1:
		cout << "START" << endl;
		break;
	case 2:
		cout << "USTAWIENIA" << endl;
		break;
	case 3:
		cout << "POMOC" << endl;
		break;
	case 4:
		cout << "KONIEC" << endl;
		break;
	default:
		cout << "Wybrales niewlasciwy numer, sprobuj ponownie." << endl;
		break;
	}
} while (n != 4);
*/
//Zad20
/*
int i = 0;
double s = 0;
double suma = 0;
while (s <= 10) {
	cout << "Suma: " << s << endl;
	s = s + 0.1;
		i++;
		suma = suma + s;
}

cout << "Koncowa suma: " << suma << endl;
cout << "Liczba wykonanych iteracji: " << i << endl;
*/
/*
int i = 0;
double s = 0;
double suma = 0;
while (s != 10) {
	cout << "Suma: " << s << endl;
	s = s + 0.1;
	i++;
	suma = suma + s;
}

cout << "Koncowa suma: " << suma << endl;
cout << "Liczba wykonanych iteracji: " << i << endl;
*/
/*Dokładne sprawdzanie wartości zmiennprzecinkowych może prowadzić do problemów ponieważ 
* w przypadku float czy double dodawanie wartosci powoduje kumulowanie się błędów zaokrąglen
* przez co wynik koncowy nigdy nie bedzie np rowny 10
*/
return 0;
}


    


