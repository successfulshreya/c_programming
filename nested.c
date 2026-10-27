#include <stdio.h>

int main(void)
{
    int marks = 45;
    int admitcard = 1;

    if (marks >= 40)
    {
        if (admitcard == 1)
        {
            printf("Pass");
        }
    }
    else
    {
        printf("Fail");
    }

    return 0;
}