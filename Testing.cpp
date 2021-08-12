#include<iostream>
#include<vector>
#include<list> 
#include<string> 
using std::cout; 
using std::cin; 
using std::endl; 
using std::string; 


//demonstrates the SWITCH STATEMENT 


int main()
{
    cout << "Difficulty Choice \n"; 
    cout << "1 - Easy \n"; 
    cout << "2 - Normal \n";
    cout << "3 - Hard \n\n"; 
    
    int choice; 
    cout << "Choice: "; 
    cin >> choice; 

    switch (choice)
    {
        case 1: 
        cout << "You Chose Easy Mode.\n "; 
        break; 
        case 2: 
        cout << "You Chose Normal Mode. \n"; 
        break; 
        case 3: 
        cout << "You Chose Hard Mode. \n"; 
        break; 
    }
    
    cout << "Welcome to The Dungeon. Make a choice. \n"; 
    cout << "1 - Left.\n"; 
    cout << "2 - Right.\n"; 
    cout << "3- Forward\n\n"; 
   
    int Direction; 
    cout << "Direction: "; 
    cin >> Direction;  

    switch(Direction)
    {
        case 1: 
        cout << "You go Left. "; 
        break; 
        case 2: 
        cout << "You go Right. "; 
        break;
        case 3: "You go Foward. "; 
        break; 
    }

    cout << "You wander down a dark hallway. A sense of dread enters your body.\n "; 
    cout << "You hear a strange noise. The sound of slime and ooze fill your ears. \n"; 
    cout << "GASP! Tis a SLIME MONSTER. What will you do?\n"; 

    
    
    cout << "Do you want to attack to defend? \n"; 
    
    cout << "1 - Attack.\n "; 
    cout << "2 - Defend. \n"; 
    cout << "3 - Get hit by the SLIME MONSTER, roller over and die.\n "; 
    int choice2;   
    cout << "Choose Warrior. \n\n"; 
    cin >> choice2; 
    
    switch(choice2) 
    {
       
  
        case 1: 
        cout << "You ATTACK the SLIME MONSTER. \n";
        break; 
        case 2: 
        cout << "You DEFEND YOURSELF. The SLIME MONSTER misses you by an inch.  \n";
        cout << "SLIME MONSTER runs away.\n";  
        break; 
        case 3: 
        cout << "You Lose Game Over. ";

    }


   
    
    

 



    
 
    
        

       
       
    
  
    
    


  
return 0; 
}


