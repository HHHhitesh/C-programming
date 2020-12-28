#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int x=4,y=9;
	cout<<"greater number is"<<fmax(x,y)<<endl;
	cout<<"less number is"<<fmin(x,y)<<endl;
	cout<<"difference is"<<fdim(x,y)<<endl;
	cout<<"2 to the power 4:"<<pow(x,y)<<endl;
	cout<<sqrt(64)<<endl;
	cout<<round(2.4)<<endl;
	cout<<round(2.5)<<endl;
	cout<<floor(2.9)<<endl;
	cout<<log(2)<<endl;
		return 0;
}