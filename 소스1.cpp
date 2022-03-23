#include<iostream>
#include<string.h>

using namespace std;

class Accout {
public:
	
	string name;
	int id;
	int balance;
    
	string getowner();
	int deposit();
	int withdraw();
	int inquiry();
};

string Accout::getowner()
{
	return name;
}

int Accout::deposit()
{
	return balance+=
}

int Accout::withdraw()
{

}

int Accout::inquiry()
{

}

int main()
{
	Accout a("kitae",1,5000);
	a.deposit(50000);
	cout << a.getowner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry()<<endl;
	int money = a.withdraw(20000);
	cout << a.getowner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
	return 0;
}