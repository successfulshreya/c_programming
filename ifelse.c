#include <stdio.h>
int main()
{
    printf("helooooooooo");
    int marks = 80;
    if (marks >= 90)
    {
        printf("a+");
    }
    else if (marks >= 80)
    {
        printf("grade A");
    }
    else if (marks >= 60)
    {
        printf("grade B");
    }
    else if (marks >= 40)
    {
        printf("grade C");
    }
    else
    {
        printf("fail");
    }
    return 0;
}