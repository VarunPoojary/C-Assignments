#include <string.h>
#include <stdio.h>
int main()
{
    char color1[20],color2[20];
    printf("Primar Colors are Red,Blue and Yellow");
    printf("\nEnter Two Primary Colors\n");
    scanf("%s %s",color1,color2);
    if( ( (strcmp(color1,"red")==0) && (strcmp(color2,"blue")==0) ) ||  ( (strcmp(color1,"blue")==0) && (strcmp(color2,"red")==0) )  )
    {
        printf("\nCombination is Purple");
    }
    else if( ( (strcmp(color1,"red")==0) && (strcmp(color2,"yellow")==0) ) ||  ( (strcmp(color1,"yellow")==0) && (strcmp(color2,"red")==0) )  )
    {
        printf("\nCombination is Orange");
    }
    else if( ( (strcmp(color1,"blue")==0) && (strcmp(color2,"yellow")==0) ) ||  ( (strcmp(color1,"yellow")==0) && (strcmp(color2,"blue")==0) )  )
    {
        printf("\nCombination is Green");
    }
    else
    {
        printf("\nWrong Color Choice");
    }
    return 0;
}
