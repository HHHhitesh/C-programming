#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream ofolder;
	ofolder.open("file.txt");
	ofolder<<"hiii ";
	ofolder<<"how r u now i m fine here!!!";
	ofolder.close();
	return 0;
}