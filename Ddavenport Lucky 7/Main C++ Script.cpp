//Daniel Davenport
//This Code is my own
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void main1()
{
	//part 1 Write a program that reads in 5 integers
	//and prints the largest and the smallest of the group.

	int smallest, largest, num1, num2, num3, num4, num5; //initialize variables
	cout << "Enter 5 different integers to see which is the largest and smallest \n";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	cout << "Your numbers are " << num1 << " " << num2 << " " << num3 << " " << num4 << " and " << num5;
	largest = num1; //Checks for largest number
	if (num2 > largest) largest = num2;
	if (num3 > largest) largest = num3;
	if (num4 > largest) largest = num4;
	if (num5 > largest) largest = num5;

	smallest = num1; //Checks for smallest number
	if (num2 < smallest) smallest = num2;
	if (num3 < smallest) smallest = num3;
	if (num4 < smallest) smallest = num4;
	if (num5 < smallest) smallest = num5;

	cout << "\nYour largest number is " << largest << " \nYour smallest number is " << smallest; //Final output
}


void main2() 
{
	//part 2 Write a program that calculates and prints
	//the sum of the first 50 positive integers that are multiples of 7.

	int i = 1; //initialize variables
	int sum = 0; //initialize variables
	while (i <= 50) //Performs equation within while loop
	{
		sum = sum + i * 7;
		i++;
	}

	cout << "The Sum of the first 50 positive multiples of 7 is " << sum << endl; //final output
}

void main3()
{
	//Part 3
	//Calculates and prints the first 10 terms of the factorial sequence.
	
	cout << "The first 10 terms of the factorial sequence starting at 1 are: ";
	int i = 0; //initialize variables
	int multiple = 1; //initialize variables
	int x = 1; //initialize variables
	while (i < 10) //Calculates and outputs next number in series
	{
		x = x*multiple;
		cout << x << " ";
		multiple++;
		i++;
	}
}


void main4()
{
	//Write a program that reads in a string 
	//and determines whether it is a palindrome.

	int x, i; //initialize variables
	bool tester = false; //initialize variables
	char input[20]; //initialize variables
	cout << "Enter a word to see if it is a palindrome: \n";
	cin >> input;
	x = strlen(input); 
	
	for (i = 0;i < x;i++) //Loops continues until length of string or break
	{
		if(input[i] != input[x-i-1]) //Checks 1st and last letter to see if same. If not continues in one letter on each side
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
	//Write a program that reads in a positive integer 
	//and determines whether it is a prime number

	bool isPrime = true; //initialize variables
	string final; //initialize variables
	int input; //initialize variables
	cout << "Input a positive integer to see if it is a prime number: \n";
	cin >> input;

	
	if (input < 0) //Buffer for incorrect inputs
	{
		cout << "That is not a valid input";
	}
	else
	{


		for (int i = 2; i < input; i++) //Continues loop checking if each number below it is a multiple of it
		{
			if (input % i == 0)
			{
				isPrime = false;
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
	//Write a program that creates an array of integers using an initialization
	//list and calculates and displays the average of the values.

	int list [5] = {}; //initialize variables
	int i, numofint = 0; //initialize variables
	float sum = 0; //initialize variables
	cout << "Enter 5 integers to find their average \n";
	
	for (i = 0; i <= 4; i++) //places each number into array and adds them up
	{
		cin >> list[i];
		numofint++;
		sum += list[i];
	}

	cout << "The average of those numbers is " << sum / numofint;
}

void main7()
{	
	//Write a program that gets a positive integer n from the user and creates
	//an array of n. The program should read strings from a file, fill the array 
	//with the first n strings, and print the string with the most characters

	int n; //initialize variables
	int longest = 0, ct = 0; //initialize variables
	ifstream fin("input.in"); 
	cout << "Enter an integer to select that many words from a text document, the longest word will then be dertermined: \n";
	cin >> n;
	string s; //initialize variables
	string *stringarray= new string[n];
	while (ct < n) //adds each word into the array
	{
		fin >> stringarray[ct];
		ct++;
	}
	for (int x = 0; x < n;x++) //checks each word in the array for size and sets the largest to the 'longest' variable
	{
			if (stringarray[x].size() > stringarray[longest].size())
			{
				longest = x;
			}
	}
	cout << "The longest word is: \n" << stringarray[longest];
	if (!fin) //If the file isn't found or loop ran out of words then output this
	{
		cerr << "File not found or not enough words in file" << endl;
		exit(2);
	}
	//while (fin >> s)
	//	cout << s << endl;

	
	}
int main()
{
	//Main function that runs and calls other functions
	int choice; //initialize variables
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

