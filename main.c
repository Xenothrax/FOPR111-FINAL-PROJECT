<<<<<<< HEAD
#include <stdio.h>

int main(){
        //Variables
        //Start
        //Menu
        printf("Menu\n");
        //Process
        //Output
    return 0;
=======
#include <stdio.h>

int main(){

    //Variables
    int menuOpt;
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
        while(1){
            int difficultyOpt;

            printf("Difficulty \n");
            printf("1. EASY | 2. MEDIUM | 3. HARD | 4. EXTREME\n");
            printf("Select difficulty (1-4): ");
            scanf("%d", &difficultyOpt);
        }
    }
    //Option 3
    else if(menuOpt == 3){

    }

    return 0;
>>>>>>> 0c25acf (change)
}