#include <stdio.h>

int main()
{

    float fRevenue, fCost;

    fRevenue = 0;
    fCost = 0;

    printf("Enter total revenue: ");
    scanf("%f", &fRevenue);

    printf("Enter total cost:  ");
    scanf("%f", &fCost);

    printf("\nYour profit is %.2f\n", fRevenue - fCost);
    return 0;

}
