#include <stdio.h>
int main()
{
    char name[50],address[50],bill_month[50];
    int customer_id,pincode,bill_amount;
    printf("Enter Name: ");
    scanf("%s",&name);
    printf("Enter Address: ");
    scanf("%s",&address);
    printf("Enter Bill Month: ");
    scanf("%s",&bill_month);
    printf("Enter Customer Id: ");
    scanf("%d",&customer_id);
    printf("Enter Pincode: ");
    scanf("%d",&pincode);
    printf("Enter Bill Amount: ");
    scanf("%d",&bill_amount);
    printf("\n \n Electricity Bill Details");
    printf("\n Name:%s",name);
    printf("\n Address:%s",address);
    printf("\n Pincode:%d",pincode);
    printf("\n Customer Id:%d",customer_id);
    printf("\n Bill Month:%s",bill_month);
    printf("\n Bill Amount:%d",bill_amount);
    return 0;
}
