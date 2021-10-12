#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus"); // подключение русского языка
	srand(time(0));
	int a = 1, b = 99, n, randNumb, cnt = 1;
	randNumb = a + (rand() % ((b - a) + 1)); // ðàíäîìíîå ÷èñëî â ïðîìåæóòêå îò a(1) äî b(99)
	cout << "Óãàäàéòå ÷èñëî â ïðîìåæóòêå îò " << a << " äî " << b << endl;

	// îäíîçíà÷íîå èëè äâóõçíà÷íîå
	if (randNumb / 10 == 0) {
		cout << "×èñëî îäíîçíà÷íîå\n";
	}
	else {
		cout << "×èñëî äâóõçíà÷íîå\n";
	};

	// ÷åòíîå èëè íå÷åòíîå
	if (randNumb % 2 == 0) {
		cout << "×èñëî ÷åòíîe\n";
	}
	else {
		cout << "×èñëî íå÷åòíîå\n";
	};

	// óãàäûâàíèå ÷èñëà
	cin >> n;
	while (n != randNumb) {
		cnt++;
		if (n < randNumb && n != randNumb) { cout << n << " ìåíüøå ââåä¸ííîãî ÷èñëà. Ïîïðîáóéòå åù¸ ðàç: "; cin >> n; }
		else { cout << n << " áîëüøå ââåä¸ííîãî ÷èñëà. Ïîïðîáóéòå åù¸ ðàç: "; cin >> n; };
	}
	cout << "Âû óãàäàëè! Ïîçäðàâëÿåì!\nÊîë-âî ïîïûòîê: " << cnt << endl;

	// âîçðàñò
	int age = randNumb;
	if (age / 10 == 1) {
		cout << "Âîçðàñò: " << age << " ëåò\n";
	}
	else {
		age = age % 10;
		switch (age) {
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9: {cout << "Âîçðàñò: " << randNumb << " ëåò\n"; break; }
		case 1: {cout << "Âîçðàñò: " << randNumb << " ãîä\n"; break; }
		case 2:
		case 3:
		case 4: {cout << "Âîçðàñò: " << randNumb << " ãîäà\n"; }
		}

	};

	// ÷èñëà Ôèáîííà÷è
	int x = 0, y = 1, z = 1, k = 1, m = randNumb;
	cout << "×èñëà Ôèáîííà÷è\n";
	do {
		if ((z >= k) && (z <= m)) cout << z << " ";
		z = x + y;
		x = y;
		y = z;
	} while (z <= m);

	system("pause");
	return 0;
}
