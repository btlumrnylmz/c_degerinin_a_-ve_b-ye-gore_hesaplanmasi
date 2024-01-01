#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin>>b;
	int c;
	if (a > b)
	{
		
		c = (a ^ 2) * b;
	}
	else
	{
		c = (b ^ 2)* a;
	}cout << "karþilastirmaya gore sonuc:" << c << endl;
}