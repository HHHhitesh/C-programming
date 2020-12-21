#include <iostream>
using namespace std;
void add(int,int);
void add(string , string);
void add(int , int , int);


int main() {
add(5,6);
add("hello","hitesh");
add(9,8,7);
	return 0;
}
void add(int a,int b)
{
	cout << a+b<<endl;
}
void add(string str1, string str2)
{
	cout <<str1+str2<<endl;
}
void add(int x, int y, int z)
{
	cout << x+y+z<<endl;
}