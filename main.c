#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;
    printf("\n Enter a temp:");
    scanf("%d",&temp);

    if (temp <0 )
    {
        printf("\n Freezing Weather \n");
    }
    else if (temp >=0 && temp <=10)
    {
        printf("\n Very Cold Weather \n");
    }
     else if (temp >=10 && temp <=20)
    {
        printf("\n Cold Weather \n");
    }
     else if (temp >=20 && temp <=30)
    {
        printf("\n Normal in Temperature \n");
    }
     else if (temp >=30 && temp <=40)
    {
        printf("\n Its Hot \n");
    }
     else if (temp >40)
    {
        printf("\n Its Very Hot \n");
    }
    return 0;
}

