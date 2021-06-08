/*
ASSIGNMENT NO: 7
Aim: Study of Arrays
Watson Elementary School contains 10 classrooms numbered 1 to 10. Each classroom can
contain any number of students up to 12. Each student takes an achievement test at the end of the
school year and receives a score from 0 through 100. Write a program that accepts data for each
student in the school—student ID, classroom number, and score on the achievement test. Design
a program that lists the total points scored for each of the 10 classrooms.
*/


#include <stdio.h>

int main()
{
    for(int i=1;i<=10;i++)
    {
       printf("ClassRoom %d \n",i);
       RepeatC:printf("Enter Student Count : ");
       int n;
       scanf("%d",&n);
       if(n<1 || n>12)
       {
           printf("Enter Student Count between 1-12 \n");
           goto RepeatC;
       }
       int id[n];
       int mrks[n];
       for(int j=0;j<n;j++)
       {
           printf("Enter Student id for Student %d : ",j+1);
           scanf("%d",&id[j]);
           RepeatM:printf("Enter Marks for Student %d : ",j+1);
           scanf("%d",&mrks[j]);
           if(mrks[j]<0 || mrks[j]>100)
           {
               printf("Re-enter Marks \n");
               goto RepeatM;
           
           }
           
           
       }
       int sum=0;
       for(int k=0;k<n;k++)
       sum+=mrks[k];
       printf("The Total marks is %d \n",sum);
       
    }
   
}
