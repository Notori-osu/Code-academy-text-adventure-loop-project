#include <iostream>
int main(){
  std::cout << "--Text Adventure: Abandoned Hospital.--" << "\n";
  std::cout << "You are an investigative journalist, it's been a slow news week. \n";
  std::cout << "The Editor in Chief grows impatient and is hounding on you and your collegues for something by the end of the week. \n";
  std::cout << "You go back to your desk to find a note with an address on it. \n";
  std::cout << "You look up the address to find it used to be a hospital, one with very controversial history but never looked into \n";
  std::cout << "Desperate for a story, you decide to check it out and head out without hesitation. \n";
  std::cout << "\n"<<"\n"; 
  std::cout << "A taxi drops you off in front of an abandoned hospital. \n";
  std::cout << "You approach the front entrance and see a few possible ways to enter. \n";
  std::cout << "Choose by 'A' 'B' or 'C': \n";

  char user1;
  for (int i = 0; i < 3 && user1 != 'A' && user1 != 'B' && user1 != 'C'; i++)  {
  std::cout << "A) Use Front Door \n" << "B) Check Boarded Window \n" << "C) Go around building \n";
  std::cin >> user1;
  


    while (user1 != 'B') {
    
    if (user1 =='A'){
      std::cout << "The door is locked shut, it won't budge an inch. \n";
      std::cin >> user1;} 

    else if (user1 == 'C'){
      std::cout << "You go around the building to find a tall locked gate, too tall for you to climb over. \n";
      std::cout << "You turn around and go back. \n"; 
      std::cin >> user1;}
   
    else if(user1 != 'A' || user1 != 'B' || user1 != 'C'){
      std::cout << "Invalid choice \n";
      std::cin >> user1; 
    }
    
    else {
      break;
    }  
    }
  }    


  std::cout << "The boards on the window are rotted, they look very old. \n";
  std::cout << "You were able to easily pull the boards off with your hands and climb through \n";
  std::cout <<"\n \n" << "--Inside Abandoned Hospital-- \n \n";   
  std::cout << "After climbing inside and stepping over a bunch of broken glass you enter a lobby. \n";
  std::cout << "You look around with the limited natural lighting you have and see rows of empty seats and a reception desk.\n";
  std::cout << "\n \n" << "You see a sign that points to 3 different wards \n" << "Choose by letter: \n";

 
 char user2;

  for (int i = 0; i < 4 && user2 != 'A' && user2 != 'B' && user2 != 'C'&& user2 != 'D'; i++)  {
  std::cout << "A) Emergency  \n" << "B) Cafeteria \n" << "C) Intensive Care Unit \n" << "D) Take a seat. \n\n";
  std::cin >> user2;
  int key;

 while (user2 != 'C'|| key != 1){
 
 

if (user2 == 'A'){
  std::cout << " You push the doors and as they swivel you are only met with a barricade of lockers that block the way. \n";
  std::cout << "You turn around and go back the other way \n";
  std::cin >> user2;
  
}

else if (user2 == 'B' && key == 1){
  std::cout << "There is nothing else to be found \n";
  std::cin >> user2;
}

else if (user2 == 'B'){
  std::cout << "You walk into a large hall with tables and chairs, along with some very expired hospital food. \n";
  std::cout << "But this section leads to nowhere else, you turn around and find a key. \n";
  std::cin >> user2;
  key = 1;
}


else if (user2 == 'C'){
  std::cout << "This door is locked shut, there is a keyhole.\n";
  std::cin >> user2;
}

else if (user2 == 'D'){
  std::cout << "There is no time for resting. \n";
  std::cin >> user2;
}

else if (user2 !='A' || user2 != 'B' || user2 != 'C' || user2 != 'D') {
 std::cout << "Invalid Choice \n"; 
 std::cin >> user2;
}

else{
  break;

}

 }
}

std::cout << "You use the key you found and unlock the door. \n";

std::cout << "--INTENSIVE CARE UNIT-- \n \n";


std::cout << "As you step in you see a long narrow hallway of rooms.\n";
std::cout << "You casually glance in each room as you walk deeper into the hall, \n";
std::cout << "but nothing of particular interest but just vacant beds and out of date medical equipment. \n \n";
std::cout << "Upon walking further, you hear a faint beep. One that sounds like a heart monitor... \n \n";


char choice1;
for (int i = 0; i < 2 && choice1 != 'Y' && choice1 != 'N'; i++){
std::cout << "Do you proceed to follow the sound? \n";
std::cout << "Y or N \n";
std::cin >> choice1;



while (choice1 != 'Y'){

if (choice1 == 'N'){
  std::cout << "You re-think the possible risks and wonder if a potential threat to \n";
  std::cout << "your life or worse is worth this story, you decide to turn back. \n";
  std::cout << "You head home and decide to find a different lead for a story, no job is worth risking your life for.";
  std::cout << "\n \n";
  std::cout << "--THE END--";
  return 0;
}
 
else if (choice1 !='Y' || choice1 != 'N'){
  std::cout << "Invalid input, try again. \n";
  std::cin >> choice1;
}

else{
  break;
}
}
}

std::cout << "Curiosity takes over and you proceed to follow the sound. \n";
std::cout << "The beeps get louder as you take each step \n";
std::cout << "\n \n";
std::cout << "Once you got closer, it stopped." <<"\n" << "Of all places it came to near the end of the hall \n";
std::cout << "Only four doors are left in the hall...\n \n";

char user3;
for (int i = 0; i <4 && user3 != 'A' && user3 != 'B' && user3 != 'C' && user3!= 'D'; i++){
  std::cout << "Which door do you choose? \n";
  std::cout << "--CHOOSE BY LETTER-- \n";
  std::cout << "A) Door 1 \n" << "B) Door 2 \n" << "C) Door 3 \n" << "D) Door 4 \n \n" ;
  std::cin >> user3;

  while (user3 != 'D'){

    if (user3 == 'A'){
      std::cout << "You enter the first one only to come out of a different one, you see the same 4 doors to choose again. \n";
      std::cin >> user3;
    }

    else if(user3 == 'B'){
       std::cout << "You enter the second door but fall into a long,deep pit within the first step. \n";
       std::cout << "The fall was so great that you sustain fatal injuries. \n";
       std::cout << "Unable to stand, unable to breathe properly to even let out a cry for help. \n";
       std::cout << "This becomes your final resting place. \n \n";
       std::cout << "--GAME OVER-- \n";
       return 0;   
    }

    else if (user3 == 'C'){
        std::cout << "After choosing the 3rd door, its your boss' office. You just see him hunched over his desk brooding...";
        std::cout << "'What are you doing here?'\n" << "'I said to bring me something newsworthy by the end of this week and you bring nothing?' \n";
        std::cout << "'This was your last chance to prove your worth at this agency, get out of my office you're fired!' \n";
        std::cout << "He draws a firearm from his desk and literally shoots you, he wasn't kidding. \n";
        std::cout << "--GAME OVER-- \n";
        return 0;

    }

    else if (user3 != 'A' || user3 !='B' || user3 != 'C' ||user3 != 'D'){
      std::cout << "Invalid input, try again. \n";
      std::cin >> user3;
    }


    else{
      break;
    }

  }
}
std::cout << "You enter the fourth door, somehow you just see figures of people around an old dilapidated bed. \n";
std::cout << "You hear sobbing, quiet chatter....you also hear you name being called...? \n";
std::cout << "They keep calling out for you, but from where? Don't they notice you're right there? How do they know that's your name?\n";
std::cout << "The beeps of the heart monitor become louder, the loudest it's ever been. \n";
std::cout << "Starting to feel light headed, vision distorting...\n";
std::cout << "You pass out. \n";
std::cout << "....\n" << ".... \n" << ".... \n";
std::cout << "'...it's been months now...'" <<"\n" << "'...I'm sorry but there have been no signs of responsiveness' \n";
std::cout << " '...No, we aren't ready to give up...not now \n" << "'...it's irrecoverable at this point, there's nothing else we can do.' \n";
std::cout << "...Hey, look! The hands, they're moving! \n \n";
std::cout << "The room is very bright as you find yourself opening your heavy eyes. Groggy, delirious,confused. \n";
std::cout << "Lying on a bed in a room, surrounded by familiar and loved people. Medical machines and telemetry with nodes stuck to you.\n";
std::cout << "Everyone starts clamouring and scrambling.";
std::cout << "You feel hands clasped on your face followed by a warm greeting:" << "'Welcome back, you're home now...' \n \n";
std::cout << "--THE END--";
return 0;

}