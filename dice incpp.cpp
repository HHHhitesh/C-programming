#include <iostream>
#include <cstdlib>
#include<ctime>
#include<unistd.h>
using namespace std;

int main() {
	int randomValue;
	srand(time(NULL));
	randomValue=(rand()%6)+1;
	cout<<"Rolling the dice...\n\n";
	usleep(2000000);
	cout<<"You got: "<<randomValue;
	
	return 0;
}