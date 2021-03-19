#include "Matrix.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int Menu;
	Matrix mas1(3, 3), mas2(3, 3);
	do {
		cout << endl << endl << endl;
		cout << "Виберіть дію:" << endl << endl;
		cout << " [1] - Введення даних з клавіатури" << endl;
		cout << " [2] - Вивід даних на екран" << endl;
		cout << " [3] - Помножити на скаляр" << endl;
		cout << " [4] - Порівняти" << endl;
		cout << " [5] - Знайти норму матриць" << endl;
		cout << endl << endl;
		cout << " [0] - вихід та завершення роботи програми" << endl << endl;
		cout << "Введіть значення: "; cin >> Menu;
		cout << endl << endl;
		switch (Menu)
		{
		case 1:
			cout << " матриця A: " << endl;
			cin >> mas1;
			cout << " матриця B: " << endl;
			cin >> mas2;
			break;
		case 2:
			cout << " матриця A: " << endl;
			cout << mas1;
			cout << "\n MAX = " << mas1.Max() << " " << " MIN = " << mas1.Min() << endl << endl;
			cout << " матриця B: " << endl;
			cout << mas2;
			cout << "\n MAX = " << mas2.Max() << " " << " MIN = " << mas2.Min() << endl;
			break;
		case 3:
			cout << "\n ======= Множення на скаляр A =======" << endl;
			int s1;
			cout << " Скаляр - ? "; cin >> s1;
			mas1* s1;
			cout << mas1;

			cout << "\n ======= Множення на скаляр B =======" << endl;
			int s2;
			cout << " Скаляр - ? "; cin >> s2;
			mas2* s2;
			cout << mas2;
			break;
		case 4:
			cout << "\n ======= Порівняння A & B =======" << endl;
			bool t;
			t = (mas1 == mas2);
			if (t == true)
				cout << " A = B " << endl;
			else
				cout << " Матриці не є рівними " << endl;
			break;
		case 5:
			cout << " ======= Норма матриць ======= " << endl;
			cout << " Норма A = |max - min| = " << mas1.Norma(mas1.Max(), mas1.Min()) << endl;
			cout << " Норма B = |max - min| = " << mas2.Norma(mas2.Max(), mas2.Min()) << endl;
			break;
		case 0:
			break;
		default:
			cout << " Ви ввели помилкове значення! "
				" Слід ввести число - номер вибраного пункту меню" << endl;
		}
	} while (Menu != 0);
	return 0;
}