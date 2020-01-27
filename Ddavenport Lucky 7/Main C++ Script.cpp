//Daniel Davenport
//This Code is my own
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void main1()
{
	int smallest, largest, num1, num2, num3, num4, num5;
	cout << "Enter 5 different integers to see which is the largest and smallest \n";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	cout << "Your numbers are " << num1 << " " << num2 << " " << num3 << " " << num4 << " and " << num5;
	largest = num1;
	if (num2 > largest) largest = num2;
	if (num3 > largest) largest = num3;
	if (num4 > largest) largest = num4;
	if (num5 > largest) largest = num5;

	smallest = num1;
	if (num2 < smallest) smallest = num2;
	if (num3 < smallest) smallest = num3;
	if (num4 < smallest) smallest = num4;
	if (num5 < smallest) smallest = num5;

	cout << "\nYour largest number is " << largest << " \nYour smallest number is " << smallest;
}


void main2() 
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

void main3()
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


void main4()
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
	
	
}


void main5()
{

	bool isPrime = false;
	string final;
	int input;
	cout << "Input a positive integer to see if it is a prime number: \n";
	cin >> input;

	
	if (input < 0)
	{
		cout << "That is not a valid input";
	}
	else
	{


		for (int i = 2; i <= input; i++)
		{
			if (input % i == 0)
			{
				isPrime = false;
			}
			else
			{
				isPrime = true;
			}

		}
		if (isPrime == true)
		{
			final = " is ";
		}
		else
		{
			final = " is not ";
		}
		cout << input << final << "a prime number \n";

	}
}
	

void main6()
{
	int list [5] = {};
	int i, numofint = 0;
	float sum = 0;
	cout << "Enter 5 integers to find their average \n";
	
	for (i = 0; i <= 4; i++)
	{
		cin >> list[i];
		numofint++;
		sum += list[i];
	}

	cout << "The average of those numbers is " << sum / numofint;
}

void main7()
{	
	int n;
	int longest = 0, ct = 0;
	ifstream fin("input.in");
	cout << "Enter an integer to select that many words from a text document, the longest word will then be dertermined: \n";
	cin >> n;
	string s;
	string *stringarray= new string[n];
	while (ct < n)
	{
		fin >> stringarray[ct];
		ct++;
	}
	for (int x = 0; x < n;x++)
	{
			if (stringarray[x].size() > stringarray[longest].size())
			{
				longest = x;
			}
	}
	cout << "The longest word is: \n" << stringarray[longest];
	if (!fin) 
	{
		cerr << "File not found" << endl;
		exit(2);
	}
	//while (fin >> s)
	//	cout << s << endl;

	
	}
int main()
{
	int choice;
	cout << "Choose which 'Lucky Seven' sections to run between 1 and 7 \n";
	cin >> choice;
	if (choice == 1)
	{
		main1();
	}
	else if (choice == 2)
	{
		main2();
	}
	else if (choice == 3)
	{
		main3();
	}
	else if (choice == 4)
	{
		main4();
	}
	else if (choice == 5)
	{
		main5();
	}
	else if (choice == 6)
	{
		main6();
	}
	else if (choice == 7)
	{
		main7();
	}
	else
	{
		cout << "That is not a valid input";
	}
}

