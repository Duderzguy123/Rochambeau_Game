#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include "rochambeau.h"

using namespace std;

/*

signature:
rochambeau: void -> void


purpose:
expects nothing
returns nothing

side effects:
none

tests:
interactive tests only


*/

void rochambeau(){
    int times;
    cout << "How many times do you want to play rock paper scissors? " << endl;
    cout << "Please enter: ";
    cin >> times;
    for (int i = 0; i < times; i++){
        string playerChoice;
        string botChoice;
        int random;
        random = rand() % 3;
        if (random == 0){
            botChoice = "r";
        } else if(random == 1){
            botChoice = "p";
        } else if (random == 2){
            botChoice = "s";
        }
        cout << "Please enter r, p, or s: ";
        cin >> playerChoice;
        if (playerChoice == "r" || playerChoice == "R"){
            if (botChoice == "r"){
                cout << "The computer picked rock, you tied! :P " << endl;
            }
            else if(botChoice == "p"){
                cout << "The computer picked paper, you lost! :( " << endl;
            }
            else if(botChoice == "s"){
                cout << "The computer picked scissors, you win! :) " << endl;
            }

        }
        else if (playerChoice == "p" || playerChoice == "P"){
            if (botChoice == "r"){
                cout << "The computer picked rock, you win! :) " << endl;
            }
            else if(botChoice == "p"){
                cout << "The computer picked paper, you tied! :p " << endl;
            }
            else if(botChoice == "s"){
                cout << "The computer picked scissors, you lost! :( " << endl;
            }

        }
        else if(playerChoice == "s" || playerChoice == "S"){
            if (botChoice == "r"){
                cout << "The computer picked rock, you lost! :( " << endl;
            }
            else if(botChoice == "p"){
                cout << "The computer picked paper, you won! :) " << endl;
            }
            else if(botChoice == "s"){
                cout << "The computer picked scissors, you tied! :p " << endl;
            }

        }




    }

}
