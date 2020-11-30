#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

int main()
{
	double x, y, z, x1, x2;

	cout << "幅（ｍ）を入力：";
	cin >> x;

	cout << "高さ（ｍ）を入力：";
	cin >> y;

	cout << "奥行き（ｍ）を入力：";
	cin >> z;

	getVolumeSurface(x, y, z, &x1, &x2);
	cout << "体積は" << x1 << endl;
	cout << "表面積は" << x2 << endl;

	int e;
	cin >> e;
	return 0;
}