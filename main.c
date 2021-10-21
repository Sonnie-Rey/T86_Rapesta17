#include<stdio.h>
int main(){
int choices, price, payment, change;
  printf("Please select your favorite order");
    printf("\n[1]Pepsi (P50) \n[2]Dr. Pepper (P100) \n[3]Coca-cola (P90) \nChoice:");
    scanf("%d", &choices);
    switch (choices){

    case 1:
    price = 50;
    printf("Please insert payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Successfully Purchased! Enjoy your Pepsi Sir/Ma'am.\n");
    change = 1111payment-price;
    printf("\nChange: %d\n", change);
}
else{
    printf("Insufficient Funds!");
}
    break;

    case 2:
    price = 100;
    printf("Please insert payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Successfully Purchased! Enjoy your Dr Pepper Sir/Ma'am.\n");
    change = payment-price;
    printf("\nChange: %d\n", change);
}
else{
    printf("Insufficient funds!");
}
     break;


     case 3:
    price = 90;
    printf("Please insert payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Successfully Purchased! Enjoy your Cocacola Sir/Ma'am.\n");
    change = payment-price;
    printf("\nChange: %d\n", change);
}
else {
  printf("Insufficient funds");
}
  break;
   default:
   printf("Selected item not found!");
}
return 0;}
