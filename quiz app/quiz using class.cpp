#include <string>
#include <bits\stdc++.h>
#include <windows.h>
#include "biology.h"
#include "maths.h"
int const total_question=5;

   int main()
   {
      int Score;
      char start;
      int subject_choice;
      // set color of the terminal
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED |
                                                                   FOREGROUND_GREEN |
                                                                   FOREGROUND_INTENSITY |
                                                                   BACKGROUND_BLUE);

      // clear terminal
      system("cls");
      // current date/time based on current system
      time_t now = time(0);

      // convert now to string form
      char *dt = ctime(&now);

      std::cout << "\nLocal Date and Time: " << dt << std::endl
                << std::endl;
      std::cout << "----------------------  WELCOME TO QUIZ GAME --------------------------------------------\n";
      std::cout << "------------------------MADE BY RAK WITH LOVE---------------------------------------------\n";
      std::cout << std::endl;
      std::cout << "  ARE YOU READY TO BEGIN CLICK `Y` TO PROCCED  \n";
      std::cin >> start;
      if (start == 'y' || start == 'Y')
      {  
         system("cls");
         begin:
         std::cout<<"CHOOSE SUBJECT USING NUMBER"<<std::endl;
         std::cout<<" 1.BIOLOGY"<<std::endl;
         std::cout<<" 2.MATHS"<<std::endl;
         std::cin>>subject_choice;
         switch (subject_choice)
         {
         case 1:{
                     std::cout << " ****************INSTRUCTIONS!!***********\n";
         std::cout << "USE ONLY NUMBER  1-4 TO ANSWER THE QUESTIONS\n";
         std::cin.get();
         q1.setvalue("In which Italian city can you find the Colosseum?", "1.Venice", "2.Rome", "3.Naples", "4.Milan", 2);
         q2.setvalue("In the TV show New Girl, which actress plays Jessica Day", "1.Zooey Deschanel", "2.Kaley Cuoco", "3.Jennifer Aniston", "4.Alyson Hannigan ", 1);
         q3.setvalue("What is the largest canyon in the world", "1.Verdon Gorge, France", "2.King`s Canyon, Australia", "3.Grand Canyon, USA", "4.Fjaorargljufur Canyon, Iceland", 3);
         q4.setvalue("How long is the border between the United States and Canada", "1. 3,525 miles", "2. 4,525 miles", "3. 5,525 miles", "4. 6,525 miles", 2);
         q5.setvalue("What is the largest active volcano in the world", "1.Mount Etna", "2.Mount Vesuvius", "3.Mouna Loa", "4.Mount Batur", 4);
         q1.askquestion(Score);
         q2.askquestion(Score);
         q3.askquestion(Score);
         q4.askquestion(Score);
         q5.askquestion(Score);
         std::cout << "you got " << Score << " out of " << total_question << std::endl;}
            break;
         case 2:{
            std::cout << " ****************INSTRUCTIONS!!***********\n";
         std::cout << "USE ONLY NUMBER  1-4 TO ANSWER THE QUESTIONS\n";
         std::cin.get();
         m1.setvalue("what is 2*3", "1.3", "2.6", "3.76", "4.9", 2);
         m2.setvalue("waht ", "1.Zooey Deschanel", "2.Kaley Cuoco", "3.Jennifer Aniston", "4.Alyson Hannigan ", 1);
         m3.setvalue("What is the largest canyon in the world", "1.Verdon Gorge, France", "2.King`s Canyon, Australia", "3.Grand Canyon, USA", "4.Fjaorargljufur Canyon, Iceland", 3);
         m4.setvalue("How long is the border between the United States and Canada", "1. 3,525 miles", "2. 4,525 miles", "3. 5,525 miles", "4. 6,525 miles", 2);
         m5.setvalue("What is the largest active volcano in the world", "1.Mount Etna", "2.Mount Vesuvius", "3.Mouna Loa", "4.Mount Batur", 4);
         m1.askquestion(Score);
         m2.askquestion(Score);
         m3.askquestion(Score);
         m4.askquestion(Score);
         m5.askquestion(Score);
         std::cout << "you got " << Score << " out of " << total_question << std::endl;}
         break;
         default:
            system("cls");
            
            std::cout<<"WRONG INPUT PLEASE AGAIN\n";
            goto begin;
         }

      }
      else
      {
         std::cout << "GOOD BYE CLOSING !!\n";
         return 0;
      }
   }