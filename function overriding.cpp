#include <iostream>
using namespace std;
class Animal{
	public:
	void sleep(){
	cout<<"animals has been sleeped"<<endl;
	}
	void sound(){
		cout<<"janwar dhahaad rhe hain"<<endl;
	}
};
class Dog:public Animal{
	public:
	void sleep(){
		cout<<"dogs are sleep"<<endl;
		
	}
	void sound(){
		cout<<"dogs are barking"<<endl;
	}
	
};

int main() {
	Animal animal;
	animal.sleep();
	animal.sound();
	Dog dog;
	dog.sleep();
	dog.sound();

	return 0;
}