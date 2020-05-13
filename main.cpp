#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{

    a:

    system("COLOR 4F");

    int pos = 0;
    char again = '0';

    cout << "\t\t\t\t\t\t\t\t" << "***************************************************" << endl;
    cout << "\t\t\t\t\t\t\t\t" << "* WELCOME TO BULLYING ROCK, PAPER, SCISSORS GAME! *" << endl;
    cout << "\t\t\t\t\t\t\t\t" << "***************************************************" << endl << endl;

    cout << "\t\t\t\t\t\t\t\t" << "Made by Riyasat Hossain (Github: @Master1wistCode)" << endl;
    cout << "\t\t\t\t\t\t\t\t\t" << "Press F11 for good experience!" << endl << endl << endl << endl;

    cout << "Hi, I am Rock-Paper-Scissors bully Player! I like to bully and always bully other R-P-S players! Let's start the game, NUB!" << endl << endl;
    cout << "1. Rock!" << endl;
    cout << "2. Paper!" << endl;
    cout << "3. Scissors!" << endl;
    cout << "4. BULLY ME!" << endl;
    cout << "Enter the Position number: ";
    cin >> pos;

    if(pos == 1){
        cout << "Paper!" << endl;
        cout << "You lose!" << endl;
        cout << "You are a NOOB! :-P" << endl;
        cout << "Do you really want play again and LOSE! (Y/N): ";
        cin >> again;
    }
    else if(pos == 2){
        cout << "Scissors!" << endl;
        cout << "You lose!" << endl;
        cout << "Get Lost! XD" << endl;
        cout << "Do you really want play again and LOSE! (Y/N): ";
        cin >> again;
    }
    else if(pos == 3){
        cout << "Rock!" << endl;
        cout << "You lose!" << endl;
        cout << "I broke a World Record in Rock-Paper-Scissors, NUB! ^U^" << endl;
        cout << "Do you really want play again and LOSE! (Y/N): ";
        cin >> again;
    }
    else if(pos == 4){
        for( ; ; ){
            cout << "YOU LOSER!" << endl;
            cout << "YOU NUB!" << endl;
            cout << "YOU CHEATER!" << endl;
        }
    }
    else{
        cout << "Invalid Move!" << endl;
        cout << "And so you LOSE, HAHAHA!" << endl;
        cout << "You will NEVER win, or, I won't let you WIN! HAHAHAHA! ;-D" << endl;
        cout << "Do you really want play again and LOSE! (Y/N): ";
        cin >> again;
    }

    if(again == 'Y'){
        cout << "OK then LOSER!" << endl;
        goto a;
    }
    else if(again == 'N'){
        cout << "Tah Tah! Meet me again to lose!" << endl;
        return 0;
    }
    else{
        cout << "LOL! Invalid!" << endl;
        cout << "Maybe, you are Invalid!" << endl;
        cout << "Start Over By Your Self, NUB!" << endl;
    }

}
