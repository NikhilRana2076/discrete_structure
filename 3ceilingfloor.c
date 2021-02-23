#include <stdio.h>
#include <math.h> 
int main()
{
    float num;
    int fval,cval;
     printf("Enter a float value: ");
    scanf("%f",&num);
     fval=floor(num);
    cval =ceil(num);
    printf("Floor value:%d \nCeiling value:%d\n",fval,cval);
    return 0;
}

