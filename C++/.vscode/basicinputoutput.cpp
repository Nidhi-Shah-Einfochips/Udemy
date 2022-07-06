#include <iostream>
// this program is example of basic input and output which ask user to enter the name and age. There are both ways of input.
int main() {
	using namespace std;
	
	char buff[512];
	cout << "What is your name?";
	
	cin.getline(buff, 64, '\n');
	cout << "Your name is:" << buff << endl;
	
	int age ;
	cin >> age ;
	return 0;
}