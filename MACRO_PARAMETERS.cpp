#include <iostream>
using namespace std;
#define sks 10
#define AREA(r) (3.14*r*r)
int main() {
	for (int i =1;i<=sks;i++){
		if(i%2==0)
		cout<<i<<endl;
		
	}
	cout<<"area:"<<AREA(5);
	return 0;
}