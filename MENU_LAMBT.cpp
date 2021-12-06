#include<iostream>
using namespace std;

int main()
{
	while(true)
	{
		
		cout << "\n\n\t\t======MENU=======";
		cout << "\n1.Liet ke ca uoc so cua so nguyen n";
		cout << "\n2.Doi so";
		cout << "\n3.Kiem tra so nguyen duong n co phai la so doi xung khong";
		cout << "\n0.Ket thuc!!!";
		cout << "\n\n\t\t======END=======";
		int lc;
		cout << "\nNhap lua chon cua ban:";
		cin >> lc;
		system("cls");
		switch (lc)
			
		{
		case 1:
		{
			cout << "\nBan chon 1";
			break;
		}
		case 2:
		{
			cout << "\nBan chon 2";
			break;
		}
		case 3:
		{
			cout << "\nBan chon 3";
			break;
		}
		case 0:
		{
			cout << "Hen gap lai";
			return 0;
		}
		default:
		{
			cout << "vui long nhap lai lua chon!!";
		}
		}
		
	}
	system("pause");
	return 0;
}