#include "Header.h"

void main()
{
	srand(time(NULL));

	bool key_1;
	do
	{
		system("cls");

		cout << " Would you like to to sell - (1), or to rent - (2) your apartment?" << endl << endl;


		short key;
		cout << endl;
		cin >> key;
		cout << endl;
		cout << "Generating the add "; Sleep(500); cout << ". "; Sleep(500); cout << ". "; Sleep(500); cout << ". "; Sleep(500);
		switch (key)
		{
		case 1:
		{
			system("cls");
			Apt_for_sale s;
			s.show_add();
		}
		break;
		case 2:
		{
			system("cls");
			Apt_for_rent r;
			r.show_add();
		}
		break;
		}

		cout << "  " << endl;
		cout << "Continue? 1 - yes, 0 - no" << endl;
		cout << endl;
		cin >> key_1;
	} while (key_1);


}