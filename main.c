#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int searchedNum = 0;
   int userNum = 0;
   int quest = 0;
   int y = 1;
   int n = 0;

   for(;;){
       srand(time(NULL));
       searchedNum = rand() % 10;

       int i;
   for(i=0; i < 3; i++){
        printf("\nEnter positive value: ");
        scanf("%d", &userNum);

        if(userNum < 0){
            printf("\nenter pozitiv valye");

        }
        if(userNum < searchedNum){
            printf("\nenter Big number");

        }
        if(userNum > searchedNum){
            printf("\nenter small number");

        }
        if(userNum == searchedNum){
            printf("\nYou winner");
        break;
        }
        }
        printf("\ngame over\n");
        printf("\nPlay again y/n");
        for (;;){
            scanf(" %s", &quest);
            if (quest == 'y')
                break;
            if (quest == 'n')
                return 0;
            else
                printf("You must enter \"y\" if you want play, or \"n\" for exit\n");
            }
        }
}
