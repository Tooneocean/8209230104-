#include<iostream>
using namespace std;
int main() {
    char c;
    int alpha = 0, space = 0, digit = 0, other = 0;

    cout << "������һ���ַ���" << endl;

    while (cin.get(c) && c != '\n') {
        if (isalpha(c)) {
            alpha++;
        }
        else if (isdigit(c)) {
            digit++;
        }
        else if (isspace(c)) {
            space++;
        }
        else {
            other++;
        }
    }

    cout << "��д��ĸ������" << alpha << endl;
    cout << "Сд��ĸ������" << space << endl;
    cout << "���ָ�����" << digit << endl;
    cout << "�����ַ�������" << other << endl;

    return 0;
}