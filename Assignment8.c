#include <stdio.h>
float calculatePrice(float,float,float);

void main()
{
    float originalPrice;
    float result;
    printf("\n **Program to calculate product price **");
    printf("\n\nEnter Wholesale price of a product =Rs. ");
    scanf("%f",&originalPrice);
    float commision,discount;
    printf("\nEnter Commision & discount Percentage=");
    scanf("%f%f",&commision,&discount);
    result=calculatePrice(originalPrice,commision,discount);
    printf("\nFinal price is=Rs. %.2f/-\n",result);
    printf("\n************************");
}

float calculatePrice(float OP,float commision,float discount)
{
    float comiResult,discResult,discPrice;
    float totalPrice;
    comiResult=(OP*commision)/100;
    discResult=(OP*discount)/100;
    printf("\n Commision amount is =Rs.%.2f/-\n",comiResult);
    printf("\n Discounted amount is =Rs.%.2f/-\n",discResult);
    totalPrice=((OP+comiResult)-discResult);
    return(totalPrice);
}
