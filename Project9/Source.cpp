#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
void choise(char);
void menu();
void BblxoD();
void graphic();
void Tablica();
void uravnenie();
void zastavka();
void supergrafic();
void integrall();
void korni();
using namespace std;
void cleaner()
{
	system("cls");
}
void integrall() {
	cleaner();
	float i, a, b, integ, n, sag, x;
	HANDLE hzchoeto = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordinatylllo;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 7;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Интеграл на отрезке методом трапеций:" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 8;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Введите нижний предел:" << endl;
	coordinatylllo.X = 57;
		coordinatylllo.Y = 8;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cin >> a;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 9;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Введите верхний предел:" << endl;
	coordinatylllo.X = 58;
	coordinatylllo.Y = 9;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cin >> b;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 10;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Сколько шагов:" << endl;
	coordinatylllo.X = 49;
	coordinatylllo.Y = 10;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cin >> n;
	sag = (b - a) / n;
	integ = 0;
	for (i = 1; i < n; i++) {
		x = a + i * sag;
		integ += fabs(2 * (exp(x) - exp(-x)));
	}
	integ = integ * sag / 2.0;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 11;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "равен :" << integ << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 13;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Интеграл на отрезке методом прямоугольников:" << endl;
	integ = (exp(b) - exp(-b) + exp(a) - exp(-a));
	for (i = 1; i < n; i++) {
		integ += fabs(exp(a + sag * (0.5 + i)));
	}
	integ = integ * sag;
		coordinatylllo.X = 35;
	coordinatylllo.Y = 14;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Ответ:" << integ << endl;
	_getch();
}
void korni() {
	HANDLE hzchoeto = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordinatylllo;
	cleaner();
	int k, c;
	float a, b, otbet, x, i = 0, sag;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 8;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Корни уравнения 2ln(x+1)+arctg x - 3 = 0 " << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 9;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Введите начало отрезка" << endl;
	coordinatylllo.X = 57;
	coordinatylllo.Y = 9;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cin >> a;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 10;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Введите конец отрезка" << endl;
	coordinatylllo.X = 56;
	coordinatylllo.Y = 10;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cin >> b;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 11;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "От " << a << " до " << b << endl;
		for (a; a < b; a += 0.001) {
			x = fabs(2 * log(a + 1) + atan(a) - 3);
			if (x < 0.001) {
				otbet = x;
				coordinatylllo.X = 35;
				coordinatylllo.Y = 12 + i;
				SetConsoleCursorPosition(hzchoeto, coordinatylllo);
				cout << "Ответ:" << a << endl;
				i++;
			}
		}
	_getch();
}
void infaaboutme()
{
	cleaner();
	HANDLE hzchoeto = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordinatylllo;
	SetConsoleTextAttribute(hzchoeto, FOREGROUND_RED);
	coordinatylllo.X = 35;
	coordinatylllo.Y = 5;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Фамилия:Кичигин" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 7;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Имя:Михаил" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 9;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Профессия:Студент" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 11;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Место работы:ОмГТУ" << endl;
		coordinatylllo.X = 35;
	coordinatylllo.Y = 13;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Краткая информация:Просто хороший человек" << endl;
	_getch();
}
void rab_menu()
{
	char chislodlyamenu;
	HANDLE hzchoeto = GetStdHandle(STD_OUTPUT_HANDLE);
	/*Тут схема переключения между пунктами меню*/
	while (true) {
		menu();
		HANDLE hzchoeto = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coordinatylllo;
		chislodlyamenu = _getch();
		choise(chislodlyamenu);
	}
}
void choise(char chislodlyamenu)
{
	switch (chislodlyamenu) {
	case '1': zastavka(); cleaner(); break;
	case '2': Tablica(); cleaner(); break;
	case '3': supergrafic(); cleaner(); break;
	case '4': infaaboutme(); cleaner(); break;
	case '5': integrall(); cleaner(); break;
	case '6':korni(); cleaner(); break;
	case '7': cleaner(); BblxoD();
	}
}
void BblxoD() {
	exit(0);
}
void supergrafic() {
	cleaner();
	HANDLE hzchoeto = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coordinatylllo;
	uravnenie();
	HDC hDC = GetDC(GetConsoleWindow());
	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
	SelectObject(hDC, Pen);
	MoveToEx(hDC, 200, 185, NULL);
	LineTo(hDC, 400, 185);
	MoveToEx(hDC, 300, 30, NULL);
	coordinatylllo.X = 40;
	coordinatylllo.Y = 6;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	SetConsoleTextAttribute(hzchoeto, FOREGROUND_RED);
	cout << "График 1:e^-x + cos2x(красный)" << endl;
	coordinatylllo.X = 40;
	coordinatylllo.Y = 12;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	SetConsoleTextAttribute(hzchoeto, FOREGROUND_GREEN);
	cout << "График 2:e^-2x (зеленый)" << endl;
	SetConsoleTextAttribute(hzchoeto, RGB(255, 255, 255));
	coordinatylllo.X = 31;
	coordinatylllo.Y = 2;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	SetConsoleTextAttribute(hzchoeto, RGB(255, 255, 255));
	cout << "y" << endl;
	coordinatylllo.X = 45;
	coordinatylllo.Y = 8;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "x" << endl;
	uravnenie();
	SelectObject(hDC, Pen);
	MoveToEx(hDC, 200, 185, NULL);
	LineTo(hDC, 400, 185);
	MoveToEx(hDC, 300, 30, NULL);
	LineTo(hDC, 300, 270);
	graphic();
	SelectObject(hDC, Pen);
	MoveToEx(hDC, 200, 185, NULL);
		LineTo(hDC, 400, 185);
	MoveToEx(hDC, 300, 30, NULL);
	_getch();
	cleaner();
}
void uravnenie() {
	float x, b = 3.14, a = 0, k;
	HDC kren = GetDC(GetConsoleWindow());
	HPEN Karandalll = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
	HPEN Karandall = CreatePen(PS_SOLID, 3, RGB(255, 0, 0));
	SelectObject(kren, Karandall);
	for (x = a; x <= b; x += 0.001)
	{
		k = exp(-x) + cos(2 * x);
		MoveToEx(kren, 20 * x + 300, 185 - (20 * k), NULL);
		LineTo(kren, 20 * x + 300, 185 - (20 * k));
	}
}
void menu()
{
	HANDLE hzchoeto = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coordinatylllo;
	SetConsoleTextAttribute(hzchoeto, FOREGROUND_GREEN);
	coordinatylllo.X = 35;
	coordinatylllo.Y = 5;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "1.Заставка" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 7;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "2.Таблица" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 9;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
		cout << "3.График функции" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 11;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "4.Об авторе" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 13;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "5.Интеграл" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 15;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "6.Уравнение" << endl;
	coordinatylllo.X = 50;
	coordinatylllo.Y = 23;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "Выход" << endl;
}
void graphic()
{
	float x, b = 3, a = 0, k;
	HDC kren = GetDC(GetConsoleWindow());
	HPEN Karandalll = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
	HPEN Karandall = CreatePen(PS_SOLID, 3, RGB(0, 255, 0));
	SelectObject(kren, Karandall);
	for (x = a; x <= b; x += 0.001)
	{
		k = exp(-2 * x);
		MoveToEx(kren, 20 * x + 300, 185 - (20 * k), NULL);
		LineTo(kren, 20 * x + 300, 185 - (20 * k));
	}
}
void Tablica()
{
	cleaner();
	HANDLE hzchoeto = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coordinatylllo;
	int x, i, f1, f2;
	float A[10], e = 0, verniiotvet, otbet, B[60], KRat, k = 0, max1 = -999, min1 =
		999, max2 = -999, min2 = 999, e1, e2;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 5;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "| Таблица уравнения 1 |" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 6;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "|------------------------------------|" << endl;
	coordinatylllo.X = 35;
	coordinatylllo.Y = 7;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "|i| x | F1 |" << endl;
	for (i = 0; i < 10; i++) {
		SetConsoleTextAttribute(hzchoeto, FOREGROUND_GREEN);
		otbet = exp(-e) + cos(2 * e);
		if (otbet < min1) {
			min1 = otbet;
		}
		if (otbet > max1) {
			max1 = otbet;
			SetConsoleTextAttribute(hzchoeto, FOREGROUND_BLUE);
		}
		A[i] = otbet;
		coordinatylllo.X = 35;
		coordinatylllo.Y = 8 + i;
		SetConsoleCursorPosition(hzchoeto, coordinatylllo);
		printf("|%1d|%2.3f| %7.3f |", i, e, A[i]);
		e += 0.314;
	}
	coordinatylllo.X = 35;
	coordinatylllo.Y = 9 + i;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
		printf("Максимальное число :%3.3f\n", max1);
	coordinatylllo.X = 35;
	coordinatylllo.Y = 10 + i;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	printf("Минимальное число : %3.3f\n ", min1);
	coordinatylllo.X = 75;
	coordinatylllo.Y = 5;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "| Таблица уравнения 2 |" << endl;
	coordinatylllo.X = 75;
	coordinatylllo.Y = 7;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	printf("| i | x | F2 |");
	coordinatylllo.X = 75;
	coordinatylllo.Y = 6;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	cout << "|---------------------------------|" << endl;
	for (i = 0; i < 10; i++) {
		KRat = exp(-2 * k);
		B[i] = KRat;
		SetConsoleTextAttribute(hzchoeto, FOREGROUND_GREEN);
		if (KRat < min2) {
			min2 = KRat;
			f2 = i;
			e2 = k;
		}
		if (KRat > max2) {
			max2 = KRat;
			SetConsoleTextAttribute(hzchoeto, FOREGROUND_BLUE);
		}
		coordinatylllo.X = 75;
		coordinatylllo.Y = 8 + i;
		SetConsoleCursorPosition(hzchoeto, coordinatylllo);
		printf("|%3d|%2.1f| %8.3f |", i, k, B[i]);
		k += 0.314;
	}
	coordinatylllo.X = 75;
	coordinatylllo.Y = 9 + i;
		SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	printf("Максимальное число :%3.3f\n", max2);
	coordinatylllo.X = 75;
	coordinatylllo.Y = 10 + i;
	SetConsoleCursorPosition(hzchoeto, coordinatylllo);
	printf("Минимальное число : %3.3f\n ", min2);
	_getch();
}
void zastavka()
{
	cleaner();
	float chtoto = 0, chtoto2 = 1, i = 500;
	do {
		cleaner();
		HWND consolecod = GetConsoleWindow();
		HDC HDC = GetDC(consolecod);
		HPEN Ruchka1 = CreatePen(PS_SOLID, 2, RGB(0, 80, 0));
		HPEN Ruchka2 = CreatePen(PS_DASH, 2, RGB(200, 34, 147));
		HBRUSH brush = CreateSolidBrush(RGB(129, 67, 90));
		SelectObject(HDC, Ruchka1);
		MoveToEx(HDC, 100 + chtoto, 100 + chtoto, NULL);
		LineTo(HDC, 350 + chtoto, 100 + chtoto);
		MoveToEx(HDC, 350 + chtoto, 100 + chtoto, NULL);
		LineTo(HDC, 350 + chtoto, 350 + chtoto);
		MoveToEx(HDC, 350 + chtoto, 350 + chtoto, NULL);
		LineTo(HDC, 100 + chtoto, 350 + chtoto);
		MoveToEx(HDC, 100 + chtoto, 350 + chtoto, NULL);
		LineTo(HDC, 100 + chtoto, 100 + chtoto);
		LineTo(HDC, 200 + chtoto, 200 + chtoto);
		MoveToEx(HDC, 350 + chtoto, 100 + chtoto, NULL);
		LineTo(HDC, 450 + chtoto, 200 + chtoto);
		MoveToEx(HDC, 350 + chtoto, 350 + chtoto, NULL);
		LineTo(HDC, 450 + chtoto, 450 + chtoto);
		MoveToEx(HDC, 100 + chtoto, 350 + chtoto, NULL);
		LineTo(HDC, 200 + chtoto, 450 + chtoto);
		LineTo(HDC, 450 + chtoto, 450 + chtoto);
		LineTo(HDC, 450 + chtoto, 200 + chtoto);
		LineTo(HDC, 200 + chtoto, 200 + chtoto);
		LineTo(HDC, 200 + chtoto, 450 + chtoto);
		if (chtoto > 150) chtoto2 = -2;
			if (chtoto < -100) chtoto2 = 2;
		chtoto += chtoto2;
		Sleep(0);
	} while (!_kbhit());
	_getch();
}
int main()
{
	setlocale(LC_ALL, "RUS");
	do {
		rab_menu();
	} while (true);
	_getch();
	return 0;
}