#include<iostream>
using namespace std;
int main() {
	double a, b;
	string c;
	cout << "��������������" << endl;
	cin >> a >> b;
	cout << "������������������" << endl;
	cin >> c;
	double d;
	if (c == "/" && b == 0)
	{
		cout << "0������Ϊ����" << endl;
	}
	else if (c=="-")
	{
		d = a - b;
		cout << d << endl;
	}
	else if (c=="+")
	{
		d = a + b;
		cout << d << endl;
	}
	else if (c=="*")
	{
		d = a * b;
		cout << d << endl;
	}
	else if (c=="/"&&b!=0)
	{
		d = a / b; 
		cout << d << endl;
	}
}