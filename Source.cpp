// Anna Edwards
//C++ Pointers

#include <iostream>

//so you dont have to type std::
using namespace std;

//calling num so we can use it later
int num;


void usingAddress(int *num)
{
	*num = (*num) * (*num); //modifying the num ptr to get address
}

int main()
{
	//initializing local variable 
	int num = 4;
	//outputs text and then adds the number 
	cout << "The number " << num << endl;
	//calling address function
	usingAddress(&num);
	//using the pointer to output address number 
	cout << "Is in the address of " << num;
	cout << endl;

	system("PAUSE");
	return 0;
}
