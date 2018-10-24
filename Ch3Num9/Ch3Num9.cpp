// Ch3Num9.cpp : Defines the entry point for the console application.
//

//Craps simulator

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int rollDice( int &roll);
int point = 0;
int roll = 0;
int wins = 0;
int loses = 0;
int rollTwo = 0;

int main()
{
	
	for (int i = 0; i < 10000; i++)
	{
		roll= rollDice(roll);
		if ((roll == 7) || (roll == 11))
		{
			//cout << roll << " is the roll for craps winner" << endl;

			wins++;
			
		}
		
		else do 
		{
				point = roll;
				//cout << "THE POINT IS SET AT: " << point << endl;
				rollTwo = rollDice(rollTwo);

				if ((rollTwo == 7) || (rollTwo == 11))
					{
						//cout << rollTwo << " is the roll for craps player bust" << endl;

						loses++;
						point = 0;
					}

					if (rollTwo == point)
					{
						//cout << rollTwo << " is the Player hit the point!!!!!!" << endl;

						wins++;
						point = 0;

					}
		} while (point != 0);
			
		

	}
	cout << "wins " << wins << endl;
	cout << "loses " << loses << endl;
	//cout << "draws " << draw << endl;

    return 0;
}

int rollDice(int &roll)
{
	int die1 = rand() % 6 + 1;
	int die2 = rand() % 6 + 1;
	roll = die1 + die2;
	//cout << roll << " is the roll" << endl;
	return roll;
}