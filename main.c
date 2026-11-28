#include <stdio.h> 
#include <stdbool.h> //Boolean
#include <time.h> // For Random Number generator
#include <stdlib.h> //Used for generating pseudo-random numbers,
#include <string.h> //Used for sorting Players Name

//Functions
bool difficulty(int *max, int *randomNum);
void doSingle();
void doMulti();
//start
//const char SEPERATOR[20]  = "====================";

int main(){

    //Variables
    int menuOpt;
    bool isRunning = true;
    

    //Title
    printf("====== RANDOM NUMBER GUESSING GAME ======\n");

    //Menu
    while(isRunning || menuOpt < 0 || menuOpt > 3){
    printf("Menu:\n");
    printf("1. Singleplayer\n");
    printf("2. Multiplayer\n");
    printf("3. Quit\n");
    //printf("%s\n", SEPERATOR);

    
        printf("Select (1-3): ");
        scanf("%d", &menuOpt);

        if(menuOpt == 1){
            doSingle();//Activate the doSingle function
            
        }
        else if(menuOpt == 2){
            doMulti(); //Activate the doMulti Function
        }
        else if(menuOpt == 3){
            for(int i = 3; i > 0; i--){
                printf("Shutting down in: %d\n",i);
            }
            printf("Bye Bye\n");
            isRunning = false;
        }
        else{
            printf("INVALID INPUT\n");
        }

    }    

    return 0;
}   

//The function returns a bool: true if a difficulty is selected and setup succeeds, or false if the player chooses the Back option.
bool difficulty(int *max, int *randomNum){
    int difficultyOpt;

    do{
            printf("DIFFICULTY\n");
            printf("1. EASY (1-10)\n");
            printf("2. MEDIUM (1-50)\n");
            printf("3. HARD (1-100)\n");
            printf("4. EXTREME (1-1000)\n");
            printf("5. Back\n");

            printf("Select Difficulty (1-5): ");
            scanf("%d", &difficultyOpt);

       if(difficultyOpt < 1 || difficultyOpt > 5){
            printf("Invalid Input\n");
        }
    }while(difficultyOpt < 1 || difficultyOpt > 5);

    //Selecting Range of Random Numbers
    switch(difficultyOpt){
        case 1:
            *max = 10;
            break;
        case 2:
            *max = 50;
            break;
        case 3:
            *max = 100;
            break;
        case 4:
            *max = 1000;
            break;
        case 5:
            return false;
            
        default:
            printf("Invalid Input\n");
    }
    
    srand(time(NULL));
    *randomNum = (rand() % *max) + 1;

    return true;
}

void doSingle(){
    
    int max;
    int randomNum;
    int guess = 0;
    int attempts = 0;
    
    if(!difficulty(&max, &randomNum)){
        return; // Back to menu
    }

    printf("Guess a Number between 1 - %d\n ", max);
    while(guess != randomNum){
        
        printf("Enter your Guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if(guess < randomNum){
            printf("TOO LOW! TRY AGAIN\n");
            
        }
        else if(guess > randomNum){
            printf("TOO HIGH! TRY AGAIN\n");
            
        }
        if(guess == randomNum){
            printf("YOU GOT IT!\n");
            printf("THE NUMBER WAS: %d\n", randomNum);
            printf("TOTAL ATTEMPTS: %d\n", attempts);
        }
        
    }
}

void doMulti(){
    int players;
    char playerName[10][50];
    int placement[6];
    int max;
    int randomNum;

     if(!difficulty(&max, &randomNum)){
        return; // Back to menu
    }
    while(players < 2 || players > 6){
        if(players < 2  || players > 6){
            printf("Enter the Number of Players (2-6): ");
            scanf("%d", &players);
        }
        else{
            printf("Only enter within range(2 - 6)\n");
        }
    }
    //Players Names
    for(int i = 0; i < players; i++){
        printf("Enter name of Player %d: ", i + 1);
        scanf("%s", &playerName[i]);
    }

    for(int i = 0; i < players; i++){
       
        int guess = 0;
        int attempts = 0;

        printf("Guess a Number between 1 - %d\n ", max);

        do{
        printf("%s's Turns\n", playerName[i]);

        printf("Enter your Guess: ");
        scanf("%d", &guess);
        
        if(guess < randomNum){
            printf("TOO LOW! TRY AGAIN\n");
            attempts++;
        }
        else if(guess > randomNum){
            printf("TOO HIGH! TRY AGAIN\n");
            attempts++;
        }
        if(guess == randomNum){
            attempts++;
            printf("YOU GOT IT!\n");
            printf("THE NUMBER WAS: %d\n", randomNum);
            printf("TOTAL ATTEMPTS: %d\n", attempts);

        }
        }while(guess != randomNum);
        randomNum = (rand() % max) + 1;
        placement[i] = attempts;
    }

    //Sorting
    for(int i = 0; i < players; i++){
        for(int j = 0; j < (players - 1); j++){
            if(placement[j] > placement[j + 1]){
                int temp = placement[j];
                placement[j] = placement[j + 1];
                placement[j + 1] = temp;

            char tempName[50];

            strcpy(tempName, playerName[j]);
            strcpy(playerName[j], playerName[j + 1]);
            strcpy(playerName[j + 1], tempName);
        }
            }
        }
    

    
    printf("\n");
    printf("===== RANKING =====\n");
    for(int i = 0; i < players; i++){
        printf("%d. %s - %d attempts\n", i + 1, playerName[i], placement[i]);
    }
}
