#include<iostream>
using namespace std;

class Tower
{
public:

	int height;
	int heightgetArea();
	Tower(int r);
	Tower();
	
};

Tower::Tower()
{
	height=1;
   
}

Tower::Tower(int r)
{
	height = r;
}


int Tower::heightgetArea()
{
	
	return height;
}

int main()
{
	int a;
	cin >> a;
	Tower myTower;
	Tower seoultower(a);
	cout << "���̴�" << myTower.heightgetArea()<<"����" << endl;
	cout << "���̴�" << seoultower.heightgetArea()<<"����" << endl;
}