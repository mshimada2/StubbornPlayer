#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
        SecretDoor game;

        int attempts;
        int wins;

        cout<<"How many times do you want to play the game? "<<endl;
        cin>>attempts;

        int index = attempts;

        for(index = 0; index < attempts; index++){

               game.newGame();

               game.guessDoorC();

               game.guessDoorC();


        if(game.isWinner() == true){

        wins++;

       


        }

        }

        cout<<wins<<endl;
        
return 0;
}
