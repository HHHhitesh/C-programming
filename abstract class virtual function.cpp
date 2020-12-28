#include <iostream>
#include<new>
using namespace std;
class Animals{
	public:
	virtual void sound()=0;
	virtual void sleep(){
		cout<<"animals are sleep"<<endl;
	}
};
	
class Dog:public Animals{
	public:
	void sound(){
		cout<<"dogs are barking"<<endl;
	}
	void sleep(){
		cout<<"dogs are sleep"<<endl;	
		
	}
	
};
int main() {

	Animals *animal=new Dog();
	animal->sound();
	animal->sleep();
	
	
	return 0;
}