#include <iostream>
using namespace std;
class Employee{
	public:
	int id;
	string firstname;
	string lastname;
	Employee();
	Employee(int id,string firstname,string lastname)
	{
		this->id=id;
		this->firstname=firstname;
		this->lastname=lastname;
	}
	string getfullname(){
		return firstname + " " + lastname;
	}
void displayDetails();	
};
Employee::Employee(){
	cout<<"employerrrrr\n";
	}
void Employee::displayDetails(){
		cout<<"ID:"<<id<<endl<<"Name "<<getfullname()<<endl;
}
int main() {
	Employee emp1(1,"Rahul","kumar");
	string fullname1=emp1.getfullname();
	emp1.displayDetails();
	Employee emp2;
	emp2.id = 2;
	emp2.firstname="Ramesh";
	emp2.lastname="kumar";
	Employee emp3=emp2;
	emp3.id=3;
	emp3.displayDetails();
	string fullname2=emp1.getfullname();
emp2.displayDetails();
	
	return 0;
}