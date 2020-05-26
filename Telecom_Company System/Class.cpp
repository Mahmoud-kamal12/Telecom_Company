#include "Class.h"

void user::setid(int id)
{
	ID = id;
}

void user::setfName(string fname)
{
	this->fname = fname;
}

void user::setlName(string lname)
{
	this->lname = lname;
}

void user::setEmail(string email)
{
	this->email = email;
}

void user::setpass(string pass)
{
	this->password = pass;
}

string user::getfNmae()
{
	return fname;
}

string user::getlName()
{
	return lname;
}

string user::getemail()
{
	return email;
}

string user::getpass()
{
	return password;
}

int user::getid()
{
	return ID;
}
void user::show_informations(user& data, int Number_of_lines)
{

	cout << "your ID is : " << data.getid() << endl;
	cout << "your first name is : " << data.getfNmae() << endl;
	cout << "your first name is : " << data.getlName() << endl;
	cout << "your email is : " << data.getemail() << endl;
	cout << "your password is : " << data.getpass() << endl;
	cout << "your City is : " << data.city << endl;
	cout << "your Streat No is : " << data.streatNo << endl;
	for (int i = 0; i < Number_of_lines; i++)
	{
		cout << "\n****************************** line number " << i + 1 << "   **********************************\n\n";

		cout << "your mobile_number  is : " << data.line[i].mobile_number << endl;
		cout << "your package type is : " << data.line[i].package_type << endl;
		cout << "your balance is : " << data.line[i].balance << endl;
		if (!(data.line[i].package_type._Equal("No package has been subscribed.")))
		{
			cout << "The date of renewal of the meeting is \n" << "day " << data.line[i].date.day << "month " << data.line[i].date.day << "Year " << data.line[i].date.year << endl;
		}

	}
}
void user::subscribe(user& data, string mopnum, int Number_of_lines) {
	int c, i = 0, z = 0;
	for (i = 0; i < Number_of_lines; i++)
	{
		if (data.line[i].mobile_number == mopnum)
			break;
		else
			z++;
	}
	if (z > 0)
	{
		cout << "Enter the correct mobile number." << endl;
		exit(0);
	}
	else
	{
		cout << "Your balance = " << data.line[i].balance << endl;
		cout << "\n\t\t\t\tPackages available \n" << endl;
		cout << "Packages Number 1 ==> 150 Mega for 5 Pounds \nPackages Number 2 ==> 500 Mega for 10 Pounds \nPackages Number 3 ==> 1100 Mega for 20 Pounds\n" << endl;
		cout << "Enter your chose (1 - 3) =  ";
		cin >> c;
		switch (c)
		{
		case 1:
			if (data.line[i].balance >= 5)
			{
				data.line[i].package_type = "Number 1 ==> 150 Mega for 5 Pounds ";
				data.line[i].balance -= 5;
				enterdata(data, i);
				cout << "The company has been successfully subscribed to the company." << endl;
			}
			else
			{
				cout << "Your balance is not enough to subscribe to the chosen bag." << endl;
			}
			break;
		case 2:
			if (data.line[i].balance >= 10)
			{
				data.line[i].package_type = "Number 2 ==> 500 Mega for 10 Pounds ";
				data.line[i].balance -= 10;
				enterdata(data, i);
				cout << "The company has been successfully subscribed to the company." << endl;
			}
			else
			{
				cout << "Your balance is not enough to subscribe to the chosen bag." << endl;
			}
			break;
		case 3:
			if (data.line[i].balance >= 20)
			{
				data.line[i].package_type = "Number 3 ==> 1100 Mega for 20 Pounds ";
				data.line[i].balance -= 20;
				enterdata(data, i);
				cout << "The company has been successfully subscribed to the company." << endl;
			}
			else
			{
				cout << "Your balance is not enough to subscribe to the chosen bag." << endl;
			}
			break;
		default:
			cout << "Enter avalied number " << endl;
			break;
		}
	}
}
void user::message(user& data, string mopnum, int Number_of_lines)
{
	int c, i = 0, z = 0;
	string message;
	for (i = 0; i < Number_of_lines; i++)
	{
		if (data.line[i].mobile_number == mopnum)
			break;
		else
			z++;
	}
	if (z > 0)
	{
		cout << "Enter the correct mobile number." << endl;
		exit(0);
	}
	else
	{
		cout << "Your balance = " << data.line[i].balance << endl;
		cout << "\t\t\t\tThe price of the message is 14 pts." << endl;
		if (data.line[i].balance >= 0.14)
		{
			cout << "Enter your message (Enter ' ~ ' to finish the message) = ";
			getline(cin, message, '~');
			data.line[i].balance -= 0.14;
			cout << "Enter the number you're going to send this message to.";
			cin >> message;
		}
	}
}
void user::recharge(user& data, string mopnum, int Number_of_lines)
{
	int c, i = 0, z = 0, b;
	for (i = 0; i < Number_of_lines; i++)
	{
		if (data.line[i].mobile_number == mopnum)
			break;
		else
		{
			z++;
		}
	}
	if (z > 0)
	{
		cout << "Enter the correct mobile number." << endl;
		exit(0);
	}
	else
	{
		string serial;
		cout << "Enter the serial number of the balance card . = ";
		cin >> serial;
		cout << "Enter the balance card = ";
		cin >> b;
		data.line[i].balance += b;
		cout << "\t\t\t\tBalance shipped successfully" << endl;
	}
}
void user::transfer(user& data, string mopnum, int Number_of_lines)
{
	int c, i = 0, z = 0, b;
	string message;
	for (i = 0; i < Number_of_lines; i++)
	{
		if (data.line[i].mobile_number == mopnum)
			break;
		else
			z++;
	}
	if (z > 0)
	{
		cout << "Enter the correct mobile number." << endl;
		exit(0);
	}
	else
	{
		cout << "Enter the mobile number you want to transfer the balance to = ";
		cin >> message;
		cout << "Enter the amount of the balance you want to transfer = ";
		cin >> b;
		if (data.line[i].balance >= b)
		{
			cout << "\t\t\t\tSuccessful balance transfer" << endl;
		}
		else
		{
			cout << "Failed balance transfer for lack of sufficient balance" << endl;
			exit(0);
		}
	}
}
void user::call(user& data, string mopnum, int Number_of_lines)
{
	int c, i = 0, z = 0, b;
	string message;
	for (i = 0; i < Number_of_lines; i++)
	{
		if (data.line[i].mobile_number == mopnum)
			break;
		else
			z++;
	}
	if (z > 0)
	{
		cout << "Enter the correct mobile number." << endl;
		exit(0);
	}
	else
	{
		cout << "Your balance = " << data.line[i].balance << endl;
		cout << "\t\t\t\tThe price of the call is 14 pts." << endl;
		if (data.line[i].balance >= 0.14)
		{
			cout << "Enter the number you're going to send this message to.";
			cin >> message;
			cout << "Enter the number of minutes of the call = ";
			cin >> b;
			data.line[i].balance -= (0.14 * b);
		}
	}
}
void user::enterdata(user& data, int i)
{
	cout << "Enter current day = ";
	cin >> data.line[i].date.day;
	cout << "Enter current month = ";
	cin >> data.line[i].date.month;
	cout << "Enter current year = ";
	cin >> data.line[i].date.year;
}