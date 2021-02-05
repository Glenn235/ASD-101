#include <stdio.h>
#include <stdlib.h>


int main()
{

int n = 0;
int pinNum[6] = {0};
int pinRepeat[6] = {0};
int checkNum[6] = {0};



    while (n !=4) {




    printf("Welcome to your pin program! what do you want to do?\n");
    printf("  1 for entering a Pin twice\n");
    printf("  2 for checking if Pins are equal\n");
    printf("  3 for checking if Pin violates rule\n");
    printf("  4 for exit\n");

    scanf("%d", &n);

    switch(n){
        case 1:
            printf(" Please enter you six digit PIN number separated by spaces\n");
            scanf("%d%d%d%d%d%d", &pinNum[0], &pinNum[1], &pinNum[2], &pinNum[3], &pinNum[4], &pinNum[5]);
            printf("Please re-enter pin as a six digit number sepparated by spaces to verify it is the same number\n");
            break;
        case 2:
            printf("PINs do not match! Please re-enter!\n");
            scanf("%d%d%d%d%d%d", &checkNum[0], &checkNum[1], &checkNum[2], &checkNum[3], &checkNum[4], &checkNum[2]);
            printf("Please re-enter PIN as a six digit number separated by scapes to verify is is the same nember\n");

           break;
        case 3:
            printf("PINs does start with a zero! PIN is not valid\n");
            scanf("%d%d%d%d%d%d", &pinNum[0], &pinNum[1], &pinNum[2], &pinNum[3], &pinNum[4], &pinNum[5]);
            printf("Welcome to your PIN program! What do you want to do? Please enter\n");
          break;
        case 4:
            printf("\nExiting program\n");
            break;
        default:
            printf("n\Please enter a valid option\n");
            break;
    }
    continue;
    return 0;
}
}
