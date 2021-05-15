#include <stdio.h>
int main()
{
    int sec,min,hour,day;
    printf("Enter Number of Seconds: ");
    scanf("%d",&sec);
    if(sec<60)
    {
        printf("Time is %dsecs",sec);
    }
    else if(sec>=60 && sec<3600)
    {
        min=sec/60;
        sec=sec%60;
        printf("Time is %dmins %dsecs",min,sec);
    }
    else if(sec>=3600 && sec<86400)
    {
        hour=sec/3600;
        sec=sec%3600;
        min=sec/60;
        sec=sec%60;
        printf("Time is %dhrs %dmins %dsecs",hour,min,sec);
    }
    else
    {
        day=sec/86400;
        sec=sec%86400;
        hour=sec/3600;
        sec=sec%3600;
        min=sec/60;
        sec=sec%60;
        printf("Time is %ddays %dhrs %dmins %dsecs",day,hour,min,sec);
    }
    return 0;
}
