#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "x = "; cin >> x;
	z1 = 1 - 1 / 4.0 * sin(2 * x) * sin(2 * x) + cos(2 * x);
	//z2 = cos(x) * cos(x) + cos(x) * cos(x) * cos(x) * cos(x);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}

