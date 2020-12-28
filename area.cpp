#include <iostream>
using namespace std;
double area(float);

int main() {
	double a= area(10);
	cout<<a<<endl;
	return 0;
}
double area(float r)
{
	return 3.14*r*r;
	
}