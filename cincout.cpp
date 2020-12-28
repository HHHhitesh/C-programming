#include <iostream>
using namespace std;

int main() {
	string name="farm house";
	char size;
	int personItserves;
	float retailPrice;
	cout<<"enter the size of the pizza";
	cin>>size;
	cout<<"enter the number of person it serves";
	cin>>personItserves;
	cout<<"enter the retail prize:";
	cin>>retailPrice;
	cout<<"yay! you have ordered a "<< name<<"pizza of size"<<size << "that it serves"
	      <<personItserves<<".\nplease pay"<<retailPrice<<"to the delivery  person.";
	      
		return 0;
}