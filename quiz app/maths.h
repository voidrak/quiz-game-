#ifndef MATHS. H
#define MATHS. H
#include <string>
#include <iostream>
int user_answer1;
class math
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
   void askmaths(int &score)
   { // by  reference the score
      std::cout << questions << std::endl;
      std::cout << choice_1 << std::endl;
      std::cout << choice_2 << std::endl;
      std::cout << choice_3 << std::endl;
      std::cout << choice_4 << std::endl;
      std::cin >> user_answer1;
      if (user_answer == correct_answer)
      {

         score++;

         // std::cout<<"correct"<<std::endl;
      }
   }

   }m1,m2,m3,m4,m5;
   #endif