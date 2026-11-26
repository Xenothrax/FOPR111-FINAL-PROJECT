#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void difficulty(){
    int diffcultyOpt;
    int max;
    int min = 1;
    int randomNum;

    printf("DIFFICULTY\n");
    printf("1. EASY (1-10)\n");
    printf("2. MEDIUM (1-50)\n");
    printf("3. HARD (1-100)\n");
    printf("4. EXTREME (1-1000)\n");

    printf("Select Difficulty (1-4): ");
    scanf("%d", &diffcultyOpt);


    switch(diffcultyOpt){
        case 1:
            max = 10;

        case 2:
        case 3:
        case 4:
        default:
    }
}

int main(){

    //Variables
    int menuOpt;
    bool isRunning = true;
    //Title
    printf("======RANDOM NUMBER GUESSING GAME======\n");
    //Menu
    printf("Menu:\n");
    printf("1. Singleplayer\n");
    printf("2. Multiplayer\n");
    printf("3. Quit\n");

    
        printf("Select (1-3): ");
        scanf("%d", &menuOpt);

        //Option 1
        if(menuOpt == 1 || menuOpt == 2){
            difficulty;
            }
        //Option 3
        else if(menuOpt == 3){
            printf("Shutting Down in: ");
            isRunning = false;
        }
    
    return 0;
}   

void difficulty(){
    int diffcultyOpt;
    int max;
    int min = 1;
    int randomNum;

    printf("DIFFICULTY\n");
    printf("1. EASY (1-10)\n");
    printf("2. MEDIUM (1-50)\n");
    printf("3. HARD (1-100)\n");
    printf("4. EXTREME (1-1000)\n");

    printf("Select Difficulty (1-4): ");
    scanf("%d", &diffcultyOpt);


    switch(diffcultyOpt){
        case 1:
            max = 10;

        case 2:
        case 3:
        case 4:
        default:
    }
}