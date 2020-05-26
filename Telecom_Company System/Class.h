#include <iostream>
#include<string>
using namespace std;
class Adress
{
public:
	string city;
	int streatNo;
};

class Date
{
public:
	int day, month, year;
};
class Line
{
public:
	string mobile_number, package_type;
	float balance;
	Date date;
};
class user : public Adress, public Date
{
private:
	string fname, lname, email, password;
	int ID;

public:
	void setid(int id);
	void setfName(string fname);
	void setlName(string lname);
	void setEmail(string email);
	void setpass(string pass);

	string getfNmae();
	string getlName();
	string getemail();
	string getpass();
	int getid();

	Line line[3];

	void show_informations(user& data, int Number_of_lines);
	void subscribe(user& data, string mopnum, int Number_of_lines);
	void message(user& data, string mopnum, int Number_of_lines);
	void recharge(user& data, string mopnum, int Number_of_lines);
	void transfer(user& data, string mopnum, int Number_of_lines);
	void call(user& data, string mopnum, int Number_of_lines);
	void enterdata(user& data, int i);
};