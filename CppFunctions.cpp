// CppFunctions.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;


void greaterFunc(int a,int b,int c,int d)

{

	int alpha[4] = { a, b, c, d };
	int integer=alpha[0];
	for (int i = 0; i < 4; i++)
	{

		if (integer < alpha[i])
		{
			integer = alpha[i];
		}

	}

	cout<<integer;

}
int main()
{
	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	greaterFunc(a, b, c, d);
	return 0;
}

