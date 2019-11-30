#include <string>
#ifndef GAME_H
#define GAME_H

//class 
class Question
{

private:

	//Private Variables
	std::string question;
	std::string _answer1;
	std::string _answer2;
	std::string _answer3;
	std::string _answer4;
	int correctAnswer;
public:

	Question();
	Question(std::string Question, std::string answer1, std::string answer2, std::string answer3, std::string answer4, int CorrectAnswer);
	//Function Declarations
	int getCorrectAnswer();
	void setCorrectAnswer(int Correct);
	std::string getQuestion();
	std::string getAnswer1();
	std::string getAnswer2();
	std::string getAnswer3();
	std::string getAnswer4();
	void setQuestion(std::string Question);
	void setAnswer1(std::string answer);
	void setAnswer2(std::string answer);
	void setAnswer3(std::string answer);
	void setAnswer4(std::string answer);
	void display(int questionNumber);

};
#endif
