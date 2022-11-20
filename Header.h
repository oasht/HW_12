#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<iomanip>
#include <string.h>
#include <Windows.h>

using namespace std;



class House
{
protected:
	string Street = "Mira";
	int House_num = 10;
	void show_road()
	{
		cout << "To get to the house you need to drive along " << Street << "street " << "and find \na house number " << House_num << "." << endl << endl;
	}

};

class Apartment : public House
{
protected:
	int num_apt = 35;
};

class Apt_for_rent : public Apartment
{
protected:
	int rent = 50000;
	int deposit = 30000;
public:
	void show_add()
	{
		cout << "                            Apartment for rent!" << endl << endl << endl;
		show_road();
		cout << "The number of the apartment is " << num_apt << ", the monthly rent is " << rent << "\nrubles, the deposit is " << deposit << " rubles." << endl;
	}
};

class Apt_for_sale : public Apartment
{
protected:
	int price = 15000000;
public:
	long mortgage()
	{
		long m = 15000000 * 0.1;
		return m;
	}

	void show_add()
	{
		cout << "                            Apartment for sale!" << endl << endl << endl;
		show_road();
		cout << "The number of the apartment is " << num_apt << ", the price is " << price << "\nrubles, the mortgage you pay is " << mortgage() << " rubles." << endl;
	}
};
