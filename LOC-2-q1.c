#include <stdio.h>
int main()
{
    int y,x,z;
    z=0;
    printf("Enter any number:\n");
    scanf("%d",&x);
    while(x!=0)
    {
        y=x%10;
        z=z+y;
        x=x/10;
    }
    printf("Total sum of digits are: %d",z);

}