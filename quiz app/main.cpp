#include <string>
#include <bits\stdc++.h>
#include <windows.h>
#include "biology.h"
#include "maths.h"
#include "chemi.h"
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
         std::cout<<" 3.CHEMISTRY"<<std::endl;
         std::cin>>subject_choice;
         switch (subject_choice)
         {
            // BIOLOGY
         case 1:{
         std::cout << " ****************INSTRUCTIONS!!***********\n";
         std::cout<<std::endl;
         std::cout << "USE ONLY NUMBER  1-4 TO ANSWER THE QUESTIONS\n";
         std::cin.get();
         q1.setvalue("Ordinary table salt is sodium chloride. What is baking soda?", "1.Potassium chloride","2.Potassium chloride", "3.Potassium hydroxide", "4.	Sodium bicarbonate", 4);
         q2.setvalue("Ozone hole refers to", "1.hole in ozone layer", "2.decrease in the ozone layer in troposphere", "3.decrease in thickness of ozone layer in stratosphere", "4.increase in the thickness of ozone layer in troposphere", 3);
         q3.setvalue("Movement of cell against concentration gradient is called", "1.osmosis", "2.active transport", "3.diffusion","4.passive transport", 2);
         q4.setvalue("Pollination is best defined as", "1.transfer of pollen from anther to stigma", "2.germination of pollen grains", "3.growth of pollen tube in ovule", "4.visiting flowers by insects", 1);
         q5.setvalue("Plants receive their nutrients mainly from", "1.	chlorophyll", "2.atmosphere", "3light", "4.soil", 4);
         q1.askquestion(Score);
         q2.askquestion(Score);
         q3.askquestion(Score);
         q4.askquestion(Score);
         q5.askquestion(Score);
         std::cout << "you got " << Score << " out of " << total_question << std::endl;}
            break;
            // MATHS
         case 2:{
            std::cout << " ****************INSTRUCTIONS!!***********\n";
         std::cout << "USE ONLY NUMBER  1-4 TO ANSWER THE QUESTIONS\n";
         std::cin.get();
       m1.setvalue("Set of positive integers is known as?","Subset" ,"2.Finite", "3.Infinite", "4. None",2);
         m2.setvalue("Which is the complement of set A? ", "1 A-B", "2.B-A", "3.A-U", "4.U-A", 4);
         m3.setvalue("If a set contains 3 elements then the number of subsets is?", "1. 5", "2. 9", "3. 8", "4. 12", 3);
         m4.setvalue(" How many bytes are required to encode 2000 bits of data", "1. 2", "2. 4", "3. 6", "4. 8", 2);
         m5.setvalue(" Floor (2.4) + Ceil (2.9) is equal to", "1. 9", "2. 3", "3. 5", "4.7", 3);
         m1.askquestion(Score);
         m2.askquestion(Score);
         m3.askquestion(Score);
         m4.askquestion(Score);
         m5.askquestion(Score);
         std::cout << "you got " << Score << " out of " << total_question << std::endl;}
         break;
         //CHEMISTRY
         case 3:{
             std::cout << " ****************INSTRUCTIONS!!***********\n";
         std::cout << "USE ONLY NUMBER  1-4 TO ANSWER THE QUESTIONS\n";
         std::cin.get();
         ch1.setvalue("The particle that has the smallest mass is the", "1. Electron", "2. Proton", "3. Neutron", "4. Nucleus", 1);
         ch2.setvalue("The person given credit for developing the first modern periodic table is ", "1.Dalton", "2.Democritus", "3.Mendeleev", "4. Thomson ", 4);
         ch3.setvalue("Two atoms are isotopes if they have", "1.Different atomic numbers", "2.The same mass number, but different atomic numbers", "3.The same number of protons and neutrons", "4.The same atomic number, but a different mass number", 4);
         ch4.setvalue("The element found in the periodic table in Group 4 and Period 6 is", "1.Halfnium, Hf", "2.Selenium, Se", "3.Gadolinium, Gd", "4.Chromium, Cr", 3);
         ch5.setvalue("A metaloid in Period 3 is", "1.Scandium", "2.Silicon", "3.Germanium", "4.Aluminum", 2);
         ch1.askquestion(Score);
         ch2.askquestion(Score);
         ch3.askquestion(Score);
         ch4.askquestion(Score);
         ch5.askquestion(Score);
         std::cout << "you got " << Score << " out of " << total_question << std::endl;
         }
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