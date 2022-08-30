// Hubbard_Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

# include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	cout << "Let's solve an equation for Ax + B =0 " << endl;


	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;

	cout << "Okay, so A = " << A << endl;
	cout << "And B = " << B << endl;
	
	cout << "Lets solve this equation for " << A << "x + " << B << " = 0" << endl;

	X = (0 - B) / A;
	cout << "Solved it!" << endl;
	cout << "X = " << X << endl;
}