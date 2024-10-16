#include <stdio.h>
#include<stdio.h>

int main()
{
    float f1;
    f1 = 2.5;
    printf("f1 without casting = %f\n",f1);
    f1 = (float)2.5;
    printf("f1 with casting = %f\n",f1);
    return 0 ;


}