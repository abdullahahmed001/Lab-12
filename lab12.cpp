#include <iostream>
using namespace std;


int getNumber()
{
	int num;
	cout << "Enter a number: " << endl;
	cin >> num;

	return num;
}

string getMessage()
{
	string message;
	cout << "Enter a message: " << endl;
	cin.ignore();
	getline(cin, message);

	return message;
}

void repeat(int num , string message)
{
	for (num = 0; num <= 5; num++) {
		cout << message << endl;
	}
}

int main()
{
	getNumber();

	getMessage();

	repeat(4, "Functions make programming easier!");

	// terminate
	return 0;
}
