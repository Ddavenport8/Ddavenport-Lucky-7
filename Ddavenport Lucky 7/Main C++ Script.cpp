//Daniel Davenport
//This Code is my own
#include <iostream>
#include <string>
using namespace std;


/*
int main()
{
	int smallest, largest, num1, num2, num3, num4, num5;
	cout << "Enter 5 different integers to see which is the largest and smallest \n";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	cout << "Your numbers are " << num1 << " " << num2 << " " << num3 << " " << num4 << " and " << num5;
	int largest = num1;
	if (num2 > largest) largest = num2;
	if (num3 > largest) largest = num3;
	if (num4 > largest) largest = num4;
	if (num5 > largest) largest = num5;

	int smallest = num1;
	if (num2 < smallest) smallest = num2;
	if (num3 < smallest) smallest = num3;
	if (num4 < smallest) smallest = num4;
	if (num5 < smallest) smallest = num5;

	cout << "\nYour largest number is " << largest << " \nYour smallest number is " << smallest;
}


int main() 
{
	//part 2 Write a program that calculates and prints
	//the sum of the first 50 positive integers that are multiples of 7.
	int i = 1;
	int sum = 0;
	while (i <= 50)
	{
		sum = sum + i * 7;
		i++;
	}

	cout << "The Sum of the first 50 positive multiples of 7 is " << sum << endl;
}

int main()
{
	//Part 3
	//Calculates and prints the first 10 terms of the factorial sequence.
	
	cout << "The first 10 terms of the factorial sequence starting at 1 are: ";
	int i = 0;
	int multiple = 1;
	int x = 1;
	while (i < 10)
	{
		x = x*multiple;
		cout << x << " ";
		multiple++;
		i++;
	}
}
*/

int main()
{
	int x, i;
	bool tester = false;
	char input[20];
	cout << "Enter a word to see if it is a palindrome: \n";
	cin >> input;
	x = strlen(input);
	
	for (i = 0;i < x;i++)
	{
		if(input[i] != input[x-i-1])
		{
				tester = true;
				break;
		}
	}

	if (tester) {
		cout << input << " is not a palindrome \n";
	}
	else {
		cout << input << " is a palindrome\n";
	}
	return 0;
}