#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int age, password, valuemain ,value, sum;
	valuemain = 5000;
	cout << setw(70) << "-*-*- ATM servces Mini -*-*-" << endl;

	cout << "How Old Are You ? " << endl;

	cin >> age;
	if (age >= 18)
	{
		cout << "Enter Your Password" << endl;
	}
	else {
		cout << setw(70) << "Not The Required Age !\a" << endl;
		return 0;
	} 

	cin >> password;
	if (password == 2008) 
	{
		cout << "Please Enter The Withdrawal Amount. " << endl;
	}
	else {
		cout << setw(65) << "Wrong password !\a" << endl;
		return 0;
	}

	cin >> value;
	if (value <= 5000) {
		cout <<setw(64)<< "Please Wait....!" << endl;
		cout << "The Amount Has Been Successfully Withdrawn= \a" << value << endl;
		sum = (valuemain - value);
		cout << "Available balance= \a" << sum << endl;
		cout << setw(73) << "*-*-*-*-*-*-*- Thank You -*-*-*-*-*-*-*" << endl;
	}
	else {
		cout <<setw(68)<< "Insufficient Funds !\a" << endl;
		return 0;
	}
}