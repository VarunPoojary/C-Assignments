#include<stdio.h>

void swap(int *,int *);
int main()
{

    int a,b;
	
		   
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);	

    printf("Before swapping: a = %d, b = %d ",a,b);
    swap(&a,&b);

    printf("\nAfter swapping: a = %d, b = %d \n\n",a,b);
    return 0;
}

void swap(int *p,int *q)
{
	

    int tmp;
    tmp = *p; 
    *p=*q;    
    *q=tmp;   
}
