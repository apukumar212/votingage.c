#include<stdio.h>
#include<stdlib.h>
int  main()
{
    int age;
system("");
    printf("Enter age :");
    scanf("%d",&age);
    if(age>=18 && age<=100)
    printf("you can eligible for vote");
    else
    printf("you are not eligible for vote");
    return 0;
}