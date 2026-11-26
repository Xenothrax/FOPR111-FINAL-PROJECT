#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

void difficulty();
void doGame();
//start

int main(){

    //Variables
    int menuOpt;
    int diffcultyOpt;
    bool isRunning = true;
    

    //Title
    printf("======RANDOM NUMBER GUESSING GAME======\n");
    //Menu
    printf("Menu:\n");
    printf("1. Singleplayer\n");
    printf("2. Multiplayer\n");
    printf("3. Quit\n");

    do{
        printf("Select (1-3): ");
        scanf("%d", &menuOpt);

        if(menuOpt == 1){
            //difficulty();
            doGame();
            
        }
        else if(menuOpt == 2){

        }
        else if(menuOpt == 3){
            for(int i = 3; i > 0; i--){
                printf("Shutting down in: %d\n",i);
            }
            printf("Bye Bye\n");
            isRunning = false;
        }

    }while(isRunning);    

    return 0;
}   

void difficulty(int *max, int *randomNum){
    int diffcultyOpt;
    //int max;
    int min = 1;
    //int randomNum;

    printf("DIFFICULTY\n");
    printf("1. EASY (1-10)\n");
    printf("2. MEDIUM (1-50)\n");
    printf("3. HARD (1-100)\n");
    printf("4. EXTREME (1-1000)\n");

    printf("Select Difficulty (1-4): ");
    scanf("%d", &diffcultyOpt);


    switch(diffcultyOpt){
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
        default:
            printf("Invalid Input\n");
    }
    srand(time(NULL));
    *randomNum = (rand() % *max) + 1;

    //printf("Guess a Number betweem %d - %d\n", min ,max);

}
void doGame(){
    
    int max;
    int randomNum;
    int guess;
    int attempts = 0;
    
    difficulty(&max, &randomNum);
    printf("Guess a Number between 1 - %d\n ", max);
    while(guess != randomNum){
        
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
            printf("YOU GOT IT!\n");
            printf("THE NUMBER WAS: %d\n", randomNum);
            printf("TOTAL ATTEMPTS: %d\n", attempts);
        }
        
    }
}
