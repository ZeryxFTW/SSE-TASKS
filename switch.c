#include <stdio.h>
int main(){
char num;
printf("1: Espresso ($3)\n2: Cappuccino ($4)\n3: Latte ($5)\n");
printf("Please input the integer former to your order: ");
scanf("%c", &num);
switch(num){
    case '1':
    printf("You ordered a Espresso. That will be $3.");
    break;
    case '2':
    printf("You ordered a Cappucino. That will be $4.");
    break;
    case '3':
    printf("You ordered a Latte. That will be $5.");
    break;
    default: printf("Please input a valid number");

}
    return 0;
}
