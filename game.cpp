#include <iostream>
#include <string>
#include "game.h"
using namespace std;

//default constructor
Question::Question()
{
	question = "";
	_answer1 = "";
	_answer2 = "";
	_answer3 = "";
	_answer4 = "";
	correctAnswer = 0;
}

//constructor to initilize questions and answeres 
Question::Question(string Question, string answer1, string answer2, string answer3, string answer4, int CorrectAnswer)
{
	question = Question;
	_answer1 = answer1;
	_answer2 = answer2;
	_answer3 = answer3;
	_answer4 = answer4;
	correctAnswer = CorrectAnswer;
}

//Function Declarations
int Question::getCorrectAnswer()
{
	return correctAnswer;
}

//initilize corect answer 
void Question::setCorrectAnswer(int Correct)
{
	correctAnswer = Correct;
}

//access question
string Question::getQuestion()
{
	return question;
}

//Access answers
string Question::getAnswer1()
{
	return _answer1;
}
string Question::getAnswer2()
{
	return _answer2;
}
string Question::getAnswer3()
{
	return _answer3;
}
string Question::getAnswer4()
{
	return _answer4;
}
//set up the question
void Question::setQuestion(string Question)
{
	question = Question;
}
//set up the answers
void Question::setAnswer1(string answer)
{
	_answer1 = answer;
}
void Question::setAnswer2(string answer)
{
	_answer2 = answer;
}
void Question::setAnswer3(string answer)
{
	_answer3 = answer;
}
void Question::setAnswer4(string answer)
{
	_answer4 = answer;
}
//displaying the questions with the possible answers 
void Question::display(int questionNumber)
{
	cout << "Question#" << questionNumber << " " << question << endl;
	cout << "1) " << _answer1 << endl;
	cout << "2) " << _answer2 << endl;
	cout << "3) " << _answer3 << endl;
	cout << "4) " << _answer4 << endl;
}