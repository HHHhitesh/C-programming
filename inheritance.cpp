#include <iostream>
using namespace std;
class Animal{
		public:
		int age;
		string color;
	
	void run(){
			cout<<"running"<<endl;
		}
};
class Dog:public Animal{
	public:
		string petname;
		void bark()
		{
			cout<<"barking"<<endl;
		}
	};
	class Lion:public Animal{
		public:
			void roar()
			{
				cout<<"roaring..."<<endl;
			}
		};

int main() {
	Dog dog;
	dog.age=5;
	dog.color="black";
	dog.petname="jackie";
	dog.bark();
	dog.run();
	
	Lion lion;
	lion.age=10;
	lion.color="yellow";
	lion.roar();
	lion.run();
	
	
	return 0;
}