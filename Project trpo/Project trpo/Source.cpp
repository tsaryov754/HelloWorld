#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int a = 1, b = 99, n, randNumb, cnt = 1;
	randNumb = a + (rand() % ((b - a) + 1)); // рандомное число в промежутке от a(1) до b(99)
	cout << "Угадайте число в промежутке от " << a << " до " << b << endl;
	// однозначное или двухзначное
	if (randNumb / 10 == 0) {
		cout << "Число однозначное\n";
	}
	else {
		cout << "Число двухзначное\n";
	};
	// четное или нечетное
	if (randNumb % 2 == 0) {
		cout << "Число четноe\n";
	}
	else {
		cout << "Число нечетное\n";
	};
	// угадывание числа
	cin >> n;
	while (n != randNumb) {
		cnt++;
		if (n < randNumb && n != randNumb) { cout << n << " меньше введённого числа. Попробуйте ещё раз: "; cin >> n; }
		else { cout << n << " больше введённого числа. Попробуйте ещё раз: "; cin >> n; };
	}
	cout << "Вы угадали! Поздравляем!\nКол-во попыток: " << cnt << endl;
	// возраст
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
		case 1: {cout << "Возраст: " << randNumb << " год\n"; break; }
		case 2:
		case 3:
		case 4: {cout << "Возраст: " << randNumb << " года\n"; }
		}

	};
	// числа Фибонначи
	int x = 0, y = 1, z = 1, k = 1, m = randNumb;
	cout << "Числа Фибонначи\n";
	do {
		if ((z >= k) && (z <= m)) cout << z << " ";
		z = x + y;
		x = y;
		y = z;
	} while (z <= m);



	system("pause");
	return 0;
}