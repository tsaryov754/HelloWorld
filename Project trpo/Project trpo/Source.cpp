#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); // подключение русского языка
	srand(time(0));
	int a = 1, b = 99, n, randNumb, cnt = 1;
	randNumb = a + (rand() % ((b - a) + 1)); // рандомное число от a(1) до b(99)
	cout << "Попробуйте угадать рандомное число от " << a << " до " << b << endl;

	// Односоставное или двухсоставное
	if (randNumb / 10 == 0) {
		cout << "Число односоставное\n";
	}
	else {
		cout << "Число двухсоставное\n";
	};

	// Четность или нечетность
	if (randNumb % 2 == 0) {
		cout << "Число четное\n";
	}
	else {
		cout << "Число нечетное\n";
	};

	// Угадывание числа
	cin >> n;
	while (n != randNumb) {
		cnt++;
		if (n < randNumb && n != randNumb) { cout << n << " меньше загадонного числа. Попробуйте ещё раз: "; cin >> n; }
		else { cout << n << " больше загадонного числа. Попробуйте ещё раз: "; cin >> n; };
	}
	cout << "Вы угадали! Кол-во попыток: " << cnt << endl;

	// Возраст
	int age = randNumb;
	if (age / 10 == 1) {
		cout << "Возраст: " << age << " лет\n";
	}
	else {
		age = age % 10;
		switch (age) {
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9: {cout << "Возраст: " << randNumb << " лет\n"; break; }
		case 1: {cout << "Возраст: " << randNumb << " лет\n"; break; }
		case 2:
		case 3:
		case 4: {cout << "Возраст: " << randNumb << " лет\n"; }
		}

	};

	// числа Фибонначи
	int x = 0, y = 1, z = 1, k = 1, m = randNumb;
	cout << "числа Фибонначи\n";
	do {
		if ((z >= k) && (z <= m)) cout << z << " ";
		z = x + y;
		x = y;
		y = z;
	} while (z <= m);

	system("pause");
	return 0;
}
