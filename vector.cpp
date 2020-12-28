#include <iostream>
#include<vector>>
using namespace std;

int main() {
	vector<string> names;
	names.push_back("rahul");
	names.push_back("aman");
	names.push_back("jeetu");
	names[0]="man";
	for(int i=0;i<=2;i++){
	cout<<names[i]<<endl;}
	return 0;
}