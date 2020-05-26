#include <iostream>
#include<string>
#include"Class.h"
using namespace std;
int Number_of_lines;

int main()
{
	user data, ptr;
	string mopnum;
	int op;
	string s;
	int n;
	cout << "\t\t\t\t Welcome to the system \n" << endl;
	cout << "Enter user id = ";
	cin >> n; data.setid(n);
	cout << "Enter first name = ";;
	cin >> s; data.setfName(s);;
	cout << "Enter last name = ";;
	cin >> s; data.setlName(s);
	cout << "Enter email = ";;
	cin >> s; data.setEmail(s);
	cout << "Enter password = ";;
	cin >> s;  data.setpass(s);
	cout << "Enter city = ";;
	cin >> s; data.city;
	cout << "Enter Streat No = ";;
	cin >> data.streatNo;
	cout << "Enter Number of lines = ";;
	cin >> Number_of_lines;
	if (Number_of_lines <= 3)
	{
		for (int i = 0; i < Number_of_lines; i++)
		{
			cout << "\n \t\t\t\tEnter information for line number " << i + 1 << "\n\n";
			cout << "Enter mobile_number  " << i + 1 << " = ";
			cin >> data.line[i].mobile_number;
			cout << "Enter balance" << i + 1 << " = ";
			cin >> data.line[i].balance;
			data.line[i].package_type = "No package has been subscribed.";
		}
	}
	else
	{
		cout << "Only 3 lines allowed " << endl;
	}
	do
	{

		cout << "\n\t\t\t\tTo subscribe to a package Enter 1 \n\t\t\t\tTo send message Enter 2 \n\t\t\t\tTo recharge your balance 3 \n\t\t\t\tTo Balance transfer 4 \n\t\t\t\tTo Make call  Enter  5 \n\t\t\t\tTo show your information  6 \nEnter your choise : ";
		int test;
		cin >> test;
		system("cls");
		switch (test)
		{
		case 1:
			cout << "Enter your Mobile Number = ";
			cin >> mopnum;
			ptr.subscribe(data, mopnum, Number_of_lines);
			op = 1;
			break;
		case 2:
			cout << "Enter your Mobile Number = ";
			cin >> mopnum;
			ptr.message(data, mopnum, Number_of_lines);
			op = 1;
			break;
		case 3:
			cout << "Enter your Mobile Number = ";
			cin >> mopnum;
			ptr.recharge(data, mopnum, Number_of_lines);
			op = 1;
			break;
		case 4:
			cout << "Enter your Mobile Number = ";
			cin >> mopnum;
			ptr.transfer(data, mopnum, Number_of_lines);
			op = 1;
			break;
		case 5:
			cout << "Enter your Mobile Number = ";
			cin >> mopnum;
			ptr.call(data, mopnum, Number_of_lines);
			op = 1;
			break;
		case 6:
			ptr.show_informations(data, Number_of_lines);
			op = 1;
			break;
		default:
			cout << "Enter correct number" << endl;
			op = 1;
			break;
		}
	} while (op == 1);
}