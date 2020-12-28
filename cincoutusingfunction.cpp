#include <iostream>
using namespace std;
string getfullname(string,string);

int main() {
	string firstname= "hitesh";
	string lastname= "choudhary";
	string fullname=getfullname(firstname,lastname);
	char letter=firstname[1];
	cout<<fullname;
	string nickname;
	cout<<"enter a nick name";
	cin>>nickname;
	int length= firstname.length();
	cout<<length;

	return 0;
}
	string getfullname(string firstname,string lastname)
	{
		return firstname + " " + lastname;
	}
	