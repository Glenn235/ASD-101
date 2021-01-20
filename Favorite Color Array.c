#include <stdio.h>
#include <string.h>

int main()
{
   char color[12] = {'\0'};
   char capsColor[12] = {'\0'};
   char *cStr = "Sam";
   int iStrLen;


   printf("Please enter your favorite color: ");
   scanf("%s", color);

   printf("\nYour favorite color is %s: \n",  color);

   iStrLen = strlen(color);
   printf("The length of the string is: %d\n", iStrLen);
   printf("The name of the person in the other string is %s\n", cStr);

   for(int i = 0; i < iStrLen; i++) {
    capsColor[i] = toupper(color[i]);
   }

    printf("The color you chose all in caps is: %s\n", capsColor);
     return 0;
}
