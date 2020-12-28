#include <iostream>
using namespace std;

int main() {
	cout<<"<<--- Programm starts"<<endl;
	int a,b;
	cout<<"Enter value of a: "<<endl;
	cin>>a;
	cout<<"Enter value of b: "<<endl;
	cin>>b;
	try{
		if(b==0){
			throw"the value of b must be 0,please try again";
		}
		
			int result=a/b;
	cout<<"result = "<<result<<endl;
	
	}
	catch (const char *msg){
		
		cout <<msg<<endl<<endl;
	}
	cout<<"Programs end -->>"<<endl;
	return 0;
}