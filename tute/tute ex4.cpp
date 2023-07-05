#include<iostream>

long Factorial(int no);
long nCr(int n, int r);

using namespace std;

int main()
{
	int n, r;
	
	cout << "Enter a value for n";
	cin >> n;
	
	cout << "Enter a value for r";
	cin >> r;
	
	cout << "nCr =";
	cout << nCr(n,r);
	cout << endl;
	
	
	return 0;
}
long Factorial(int no)
{
	long fact =1;
	for (int i =2; i<=no; i++)
	{
		fact *= i;
	}
	return fact;
}

long nCr(int n, int r)
{
	long numerator = Factorial(n);
	long denominator = Factorial(r) * Factorial(n-r);
	long result = numerator / denominator;
	return result;	
}
