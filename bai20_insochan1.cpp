#include<iostream>
using namespace std;
int main()
{
	cout << "hello word!\n";
	int so, tongchan = 0, tongle = 0, tong = 0;
	cout << "nhap so:"; cin >> so;
	for (int i = 1; i < so; i++)
	{
		tong += 1;
		if (i % 2 ==0)
		{
			cout << i << " ";
			tongchan += i;
		}
		else
		{
			tongle += i;
		}
	}
	cout << "\n tong cac so :" << tong;
	cout << "\n tong cac so chan:" << tongchan;
	cout << "\n tong cac so le:" << tongle;
	cout << endl;
	return 0;
}

