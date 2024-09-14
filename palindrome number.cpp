#include<iostream>
using namespace std;
int main()
{

	int n, num, digit, rev = 0;
	cout << "enter a number to check whether it is a palindrome or not" << endl;
	cin >> num;
	n = num;
	rev!=num;
	
	
	while(num != 0)
	{
	
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num/10;
		

	}
	if(n == rev&& n>0)
	{
		cout << "palindrome" << endl;

	}
	else
	{
		cout << "not palindrome" << endl;


	}
	return 0;

}
