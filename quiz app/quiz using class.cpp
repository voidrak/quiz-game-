#include<string>
#include <bits\stdc++.h>
#include <windows.h>
const int total_question=5;
int user_answer;



class question{

private:
std::string questions;
std::string choice_1;
std::string choice_2;
std::string choice_3;
std::string choice_4;
int correct_answer;


public:

int score;
void setvalue (std::string q,std::string c1,std::string c2,std::string c3,std::string c4,int ca){
   questions=q;
   choice_1=c1;
    choice_2=c2;
    choice_3=c3;
    choice_4=c4;
   correct_answer=ca;
 
}
void askquestion( int &score){ // by  reference the score
    std::cout<<questions<<std::endl;
    std::cout<<choice_1<<std::endl;
    std::cout<<choice_2<<std::endl;
    std::cout<<choice_3<<std::endl;
    std::cout<<choice_4<<std::endl;
   std::cin>>user_answer;
   if(user_answer==correct_answer){
    
    score++;
    

    // std::cout<<"correct"<<std::endl;
 
   }
  
}


}q1,q2,q3,q4,q5;


int main (){
   int Score;
   char start;
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

    std::cout << "\nLocal Date and Time: " << dt <<std:: endl
         <<std:: endl;
std::cout<<"----------------------  WELCOME TO QUIZ GAME --------------------------------------------\n";
std::cout<<"------------------------MADE BY RAK WITH LOVE---------------------------------------------\n";
std::cout<<std::endl;
std::cout<<"  ARE YOU READY TO BEGIN click `y` to procced or anyother key to exit \n";
std::cin>>start;
if (start=='y'|| start=='Y')
   {  system("cls");
     std::cout<<" ****************INSTRUCTIONS!!***********\n";
     std::cout<<"USE ONLY NUMBER  1-4 TO ANSWER THE QUESTIONS\n";
      std::cin.get();
    q1.setvalue("In which Italian city can you find the Colosseum?","1.Venice","2.Rome","3.Naples","4.Milan",2);
    q2.setvalue("In the TV show New Girl, which actress plays Jessica Day","1.Zooey Deschanel","2.Kaley Cuoco","3.Jennifer Aniston","4.Alyson Hannigan ",1);
    q3.setvalue("What is the largest canyon in the world","1.Verdon Gorge, France","2.King`s Canyon, Australia","3.Grand Canyon, USA","4.Fjaorargljufur Canyon, Iceland",3);
    q4.setvalue("How long is the border between the United States and Canada","1. 3,525 miles","2. 4,525 miles", "3. 5,525 miles","4. 6,525 miles",2);
    q5.setvalue( "What is the largest active volcano in the world","1.Mount Etna","2.Mount Vesuvius","3.Mouna Loa","4.Mount Batur",4);
   q1.askquestion(Score);
   q2.askquestion(Score);
   q3.askquestion(Score);
   q4.askquestion(Score);
   q5.askquestion(Score);
   std::cout<<"you got "<<Score<<" out of "<<total_question<<std::endl;
}else
{
   std::cout<<"GOOD BYE CLOSING !!\n";
    return 0;
}
}