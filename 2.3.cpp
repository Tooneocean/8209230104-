#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "�����������߳�" << endl;
	cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c; 

        cout << "�ܳ�Ϊ��" << perimeter << endl;

        if (a == b || a == c || b == c) {
            cout << "����һ�����������Ρ�" << endl;
        }
        else {
            cout << "�ⲻ��һ�����������Ρ�" << endl;
        }
    }
    else {
        cout << "����������߳����ܹ��������Ρ�" << endl;
    }

    return 0;
}
