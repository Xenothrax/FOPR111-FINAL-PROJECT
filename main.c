#include <stdio.h>

void doDiffulty(int difficultyOpt){
    //while(1){
            //int difficultyOpt;

            printf("Difficulty \n");
            printf("1. EASY | 2. MEDIUM | 3. HARD | 4. EXTREME\n");
            printf("Select difficulty (1-4): ");
            scanf("%d", &difficultyOpt);
      //  }
}

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
        doDiffulty;
    }
    //Option 3
    else if(menuOpt == 3){

    }

    return 0;
>>>>>>> 0c25acf (change)
}
