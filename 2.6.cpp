#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout << "��������������" << endl;
	cin >> a;
	cin >> b;
	int min = 1;   int max;
	for (int i = 2; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			min = i;
			break;
		}
	}
	max = a * b / min;
	cout << "��С������" << min << endl;
	cout << "���Լ��" << max << endl;
}
