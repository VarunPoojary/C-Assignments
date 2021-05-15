#include <stdio.h>
int main()
{
    printf("Enter 2 Numbers: ");
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("Press 1 for Addition \nPress 2 for Subtraction \nPress 3 for Division\nPress 4 for Multiplication \nPress 5 for Remainder \nPress 6 for Percentage \n");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Result: %d",num1+num2);
        break;
        case 2:
        printf("Result: %d",num1-num2);
        break;
        case 3:
        printf("Result: %d",num1/num2);
        break;
        case 4:
        printf("Result: %d",num1*num2);
        break;
        case 5:
        printf("Result: %d",num1%num2);
        break;
        case 6:
        {
            printf("Enter Total Marks: ");
            int tmarks;
            scanf("%d",&tmarks);
            printf("Enter Obtained Marks: ");
            int omarks;
            scanf("%d",&omarks);
            float per;
            per=(float)omarks/tmarks *100.0;
            printf("Result: %.2f%%",per);
            break;
        }
        default:
        printf("Invalid Choice");
    }
    return 0;
}
