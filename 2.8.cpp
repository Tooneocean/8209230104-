#include<iostream>
using namespace std;
int main() {
	double a,x,x1;
	cout << "������a��ֵ�� " << endl;
	cin >> a;
	x = a;
	while (true) 
	{
		x1 = (x + a / x) / 2;
		if ((x1 - x) * (x1 - x) < 1e-10)
		{
			cout << "a��ƽ����Ϊ�� " << x1 << endl;
			break;
		}
		x = x1;
	};
}