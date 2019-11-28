//Chapter 9 - Question 15
//Created/Revised by Chase Franse on 3/17/19

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int guessingGame(int randomNumber, int numberGuess, int numTries);

int main()
{
	int randomNumber = 0;
	int numberGuess = 0;
	int check = 0;
	
	//Generate a random number from 1 through 10
	srand(static_cast<int>(time(0)));
	randomNumber = 1 + rand() % (10 - 1 + 1);
	
	//Get first quess from user
	cout << "Guess a number from 1 through 10: ";
	cin >> numberGuess;
	
	//Other Guesses
	check = guessingGame(randomNumber, numberGuess, 5);
	
	//cout << endl << check << endl;
	
	if (check == 0)
	{
		cout << endl << "Game Over! The number was " << randomNumber << ". Better luck next time!" << endl;
	} else if (check == 1){
		cout << endl << "Yes, the number is " << randomNumber << "." << endl;
	}
	
	return 0;
}

int guessingGame(int randomNumber, int numberGuess, int numTries)
{
	int check = 0;
	for (int c = 1; c < numTries; c++)
	{
		if (numberGuess != randomNumber)
		{
			cout << "Sorry, guess again: ";
			cin >> numberGuess;
			check = 0;
		} 
		else if (numberGuess = randomNumber)
		{
			check = 1;
		}
	}
	return check;
}
