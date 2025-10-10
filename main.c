#include <stdio.h>
#include <stdlib.h>

int GCD(a,b)
{
    if(a==0)
        return b;
    return (b%a,a);
}

int main()
{
    int a, b;
    printf("enter two values : \n");
    scanf("%d%d",&a,&b);
    printf("GCD value for %d and %d is %d \n",a,b,GCD(a,b));
    return 0;

}
