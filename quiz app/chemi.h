#ifndef CHEMI.H
#define CHEMI.H
#include <string>
#include <iostream>
int user_answer2;
class chemistry
{
private:
   std::string questions;
   std::string choice_1;
   std::string choice_2;
   std::string choice_3;
   std::string choice_4;
   int correct_answer;

public:
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
      std::cin >> user_answer2;
      if (user_answer2 == correct_answer)
      {

         score++;

         // std::cout<<"correct"<<std::endl;
      }
   }

   }ch1,ch2,ch3,ch4,ch5;
   #endif