#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "������һ���ַ�" << endl;
	cin >> a;
    if (a>= 'a' && a <= 'z') {
        a = a - 32;
        cout << "�ַ��ĳɴ�дΪ: " << a << endl;
    }
    else {
        cout << "a����ַ���ASCII��ֵΪ: " << int(a) + 1 << endl;
    }

}