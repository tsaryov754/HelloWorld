#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int a = 1, b = 99, n, randNumb, cnt = 1;
	randNumb = a + (rand() % ((b - a) + 1)); // ��������� ����� � ���������� �� a(1) �� b(99)
	cout << "�������� ����� � ���������� �� " << a << " �� " << b << endl;
	// ����������� ��� �����������
	if (randNumb / 10 == 0) {
		cout << "����� �����������\n";
	}
	else {
		cout << "����� �����������\n";
	};
	// ������ ��� ��������
	if (randNumb % 2 == 0) {
		cout << "����� �����e\n";
	}
	else {
		cout << "����� ��������\n";
	};
	// ���������� �����
	cin >> n;
	while (n != randNumb) {
		cnt++;
		if (n < randNumb && n != randNumb) { cout << n << " ������ ��������� �����. ���������� ��� ���: "; cin >> n; }
		else { cout << n << " ������ ��������� �����. ���������� ��� ���: "; cin >> n; };
	}
	cout << "�� �������! �����������!\n���-�� �������: " << cnt << endl;
	// �������
	int age = randNumb;
	if (age / 10 == 1) {
		cout << "�������: " << age << " ���\n";
	}
	else {
		age = age % 10;
		switch (age) {
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9: {cout << "�������: " << randNumb << " ���\n"; break; }
		case 1: {cout << "�������: " << randNumb << " ���\n"; break; }
		case 2:
		case 3:
		case 4: {cout << "�������: " << randNumb << " ����\n"; }
		}

	};
	// ����� ���������
	int x = 0, y = 1, z = 1, k = 1, m = randNumb;
	cout << "����� ���������\n";
	do {
		if ((z >= k) && (z <= m)) cout << z << " ";
		z = x + y;
		x = y;
		y = z;
	} while (z <= m);



	system("pause");
	return 0;
}