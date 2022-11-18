#ifndef BIOLOGY.H
#define BIOLOGY.H
#include <string>
#include <iostream>
int user_answer;
class biology
{

private:
   std::string questions;
   std::string choice_1;
   std::string choice_2;
   std::string choice_3;
   std::string choice_4;
   int correct_answer;

public:
   int score;
   void setvalue(std::string q, std::string c1, std::string c2, std::string c3, std::string c4, int ca)
   {
      questions = q;
      choice_1 = c1;
      choice_2 = c2;
      choice_3 = c3;
      choice_4 = c4;
      correct_answer = ca;
   }
   void askquestion(int &score)
   { // by  reference the score
      std::cout << questions << std::endl;
      std::cout << choice_1 << std::endl;
      std::cout << choice_2 << std::endl;
      std::cout << choice_3 << std::endl;
      std::cout << choice_4 << std::endl;
      std::cin >> user_answer;
      if (user_answer == correct_answer)
      {

         score++;

         // std::cout<<"correct"<<std::endl;
      }
   }

} q1, q2, q3, q4, q5;
#endif