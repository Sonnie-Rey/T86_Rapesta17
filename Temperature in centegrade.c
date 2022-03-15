#include <stdio.h>
#include <conio.h>
int main(){

    float temp;
    printf("Enter the temperature ::");
    scanf("%f", &temp);
    printf("\n\n\n**********The Display Output is**********\n\n");

    if (temp<0){
        printf("\n freezing weather \n");
    }
    else if ((temp >= 0)&&(temp <= 10)){
        printf("\n Very Cold Weather \n");
    }

    else if ((temp >= 10)&&(temp <= 20)){
        printf("\n Cold Weather  \n");
    }
     else if ((temp >= 20)&&( temp <= 30)){
        printf("\n Normal Temperature \n");
    }
    else if ((temp >= 30)&&(temp <= 40)){
        printf("\n It's Hot \n");
    }
    else if (temp >= 40)
    {
        printf("\n Very Hot \n");
    }
    return 0;
}
