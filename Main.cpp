#include <iostream>
#include <string>
#include "game.h"

using namespace std;

int main()
{
	//10 objects of questions, with 4 answere and one correct answer in int form 
	Question myquestion1("On a standard traffic light, is the green on the top or bottom ?", "middle", "4th demension", "Bottom", "top", 3);
	Question myquestion2("How many states are there ? (don't laugh, some people don't know)", "0", "-50", "50", "pi", 3);
	Question myquestion3("In which hand is the Statue of Liberty's torch?", "floor", "foot", "right", "Left", 3);
	Question myquestion4("What 6 colors are on the classic Campbell's soup label?", "all red", "Something else", "blue, red, white, yellow, black, and gold", "red, white and blue ", 3);
	Question myquestion5("What 2 letters don't appear on the telephone dial? ( no cheating!)", "C, D", "A, B", "Q, Z", "E, W", 3);
	Question myquestion6("What 2 #'s don't have letters by them ?", "1, 8", "5, 6", "1, 0", "5,7", 3);
	Question myquestion7("When you walk, does your left arm swing w / your right or left leg ?", "left and right", "they dont", "left", "right", 3);
	Question myquestion8("How many matches are in a standard pack ?", "10", "30", "20", "50", 3);
	Question myquestion9("On our flag, is the top stripe red or white ?", "blue", "white", "red", "black", 3);
	Question myquestion10("What is the lowest # on the FM dial ?", "22", "55", "88", "89", 3);
	Question myQuestions[10]; // Array of my question objects 
	//feeding my array with questions 
	myQuestions[0] = myquestion1;
	myQuestions[1] = myquestion2;
	myQuestions[2] = myquestion3;
	myQuestions[3] = myquestion4;
	myQuestions[4] = myquestion5;
	myQuestions[5] = myquestion6;
	myQuestions[6] = myquestion7;
	myQuestions[7] = myquestion8;
	myQuestions[8] = myquestion9;
	myQuestions[9] = myquestion10;
	
	//local variables 
	int answer;
	int total1 = 0;
	int total2 = 0;

	//Questions for player 1, if p1 gets it right,+10 pts
	cout << "1st Player Answer the following question" << endl;
	for (int i = 0; i < 5; i++)
	{
		myQuestions[i].display(i);
		cout << "1st player: What is your answer 1,2,3 or 4? ";
		cin >> answer;
		if (answer == myQuestions[i].getCorrectAnswer())
		{
			cout << "Correct Answer 10 points awarded" << endl << endl;
			total1 = total1 + 10;
		}
		else
		{
			cout << "Incorrect Answer" << endl;
		}
	}

	//Questions for player 1, if p1 gets it right,+10 pts
	cout << "2nd player Answer the following question" << endl;
	for (int i = 5; i < 10; i++)
	{
		myQuestions[i].display(i);
		cout << "Player 2: What is your answer 1,2,3 or 4? ";
		cin >> answer;
		//checking if answer is correct/ add points
		if (answer == myQuestions[i].getCorrectAnswer())
		{
			cout << "Correct Answer 10 points awarded" << endl;
			total2 = total2 + 10;
		}
		else
		{
			cout << "Incorrect Answer" << endl;
		}
	}

	//Deciding the winner
	if (total2 > total1)
	{
		cout << "The 2nd Player Wins" << endl;
	}
	else if (total1 > total2)
	{
		cout << "The 1st Player wins" << endl;
	}
	else
	{
		cout << "It was a tie" << endl;
	}
	
	system("pause");
	return 0;
}