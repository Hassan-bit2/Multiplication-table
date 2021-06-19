/* Write a program in C++ that takes a number as input and prints its multiplication
table upto 10*/
#include <iostream>
using namespace std;

int main()
{
	int z;
	cout << "Please enter a number for it's table" << endl;
	cin >> z;
	for(int i = 1; i <= 10; i++)
	{
		cout << z << "x" << i << "=" << z*i << endl;
	}
}
