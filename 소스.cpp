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
	cout << "높이는" << myTower.heightgetArea()<<"미터" << endl;
	cout << "높이는" << seoultower.heightgetArea()<<"미터" << endl;
}