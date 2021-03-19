#include "Matrix.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int Menu;
	Matrix mas1(3, 3), mas2(3, 3);
	do {
		cout << endl << endl << endl;
		cout << "������� ��:" << endl << endl;
		cout << " [1] - �������� ����� � ���������" << endl;
		cout << " [2] - ���� ����� �� �����" << endl;
		cout << " [3] - ��������� �� ������" << endl;
		cout << " [4] - ��������" << endl;
		cout << " [5] - ������ ����� �������" << endl;
		cout << endl << endl;
		cout << " [0] - ����� �� ���������� ������ ��������" << endl << endl;
		cout << "������ ��������: "; cin >> Menu;
		cout << endl << endl;
		switch (Menu)
		{
		case 1:
			cout << " ������� A: " << endl;
			cin >> mas1;
			cout << " ������� B: " << endl;
			cin >> mas2;
			break;
		case 2:
			cout << " ������� A: " << endl;
			cout << mas1;
			cout << "\n MAX = " << mas1.Max() << " " << " MIN = " << mas1.Min() << endl << endl;
			cout << " ������� B: " << endl;
			cout << mas2;
			cout << "\n MAX = " << mas2.Max() << " " << " MIN = " << mas2.Min() << endl;
			break;
		case 3:
			cout << "\n ======= �������� �� ������ A =======" << endl;
			int s1;
			cout << " ������ - ? "; cin >> s1;
			mas1* s1;
			cout << mas1;

			cout << "\n ======= �������� �� ������ B =======" << endl;
			int s2;
			cout << " ������ - ? "; cin >> s2;
			mas2* s2;
			cout << mas2;
			break;
		case 4:
			cout << "\n ======= ��������� A & B =======" << endl;
			bool t;
			t = (mas1 == mas2);
			if (t == true)
				cout << " A = B " << endl;
			else
				cout << " ������� �� � ������ " << endl;
			break;
		case 5:
			cout << " ======= ����� ������� ======= " << endl;
			cout << " ����� A = |max - min| = " << mas1.Norma(mas1.Max(), mas1.Min()) << endl;
			cout << " ����� B = |max - min| = " << mas2.Norma(mas2.Max(), mas2.Min()) << endl;
			break;
		case 0:
			break;
		default:
			cout << " �� ����� ��������� ��������! "
				" ��� ������ ����� - ����� ��������� ������ ����" << endl;
		}
	} while (Menu != 0);
	return 0;
}