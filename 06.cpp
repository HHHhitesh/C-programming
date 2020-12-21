#include <iostream>
using namespace std;
class Employee{
	public:
	int id;
	string firstname;
	string lastname;
	string getfullname(){
		return firstname + " " + lastname;
	}
void displayDetails();	
};
void Employee::displayDetails(){
		cout<<"ID:"<<id<<endl<<"Name "<<getfullname()<<endl;
}
int main() {
	Employee emp1;
	emp1.id = 1;
	emp1.firstname="Rahul";
	emp1.lastname="kumar";
	string fullname1=emp1.getfullname();
	emp1.displayDetails();
	Employee emp2;
	emp2.id = 2;
	emp2.firstname="Ramesh";
	emp2.lastname="kumar";
	string fullname2=emp1.getfullname();
emp2.displayDetails();
	
	return 0;
}