// ASSIGNMENT NO: 6

// AIM:	Average Rainfall 
// Design a program that uses nested loops to collect data and calculate the average rainfall over a period of years. 
// The program should first ask for the number of years. The outer loop will iterate once for each year. 
// The inner loop will iterate twelve times, once for each month. Each iteration of the inner loop will ask the user for the inches of rainfall for that month.
// After all iterations, the program should display the number of months, the total inches of rainfall, and the average rainfall per month for the entire period.

	#include <stdio.h>
	int main()
	{
	    printf("Number Of Years: ");
	    float rainfall;
	    int y,num=0;
	    scanf("%d",&y);
	    for(int i=1;i<=y;i++)
	    {
	       printf("\nRainfall input %d \n",i); 
	       for(int j=1;j<=12;j++)
	       {
	           printf("Rainfall input for month %d: ",j);
	           float m;
	           scanf("%f",&m);
	           rainfall+=m;
	           if(m>0.0)
	           num++;
	           
	       }
	    }
	    printf("\n************************\n"); 
	    float avg_rainfall=(float)rainfall/(float)num;
	    printf("The Average Rainfall is %f \n",avg_rainfall);
	    printf("Total Rainfall is %f",rainfall);
	    printf("\n************************\n"); 
}
