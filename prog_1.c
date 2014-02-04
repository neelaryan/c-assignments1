#include <stdio.h>
#include <math.h>

int isprime(int prime)
{
    int i,flag=1;
    for(i=2; i<=sqrt(prime); i++)
    {
        if(prime%i==0)
        {
            flag=0;
            return flag;
        }
    }
    return flag;
}

void twinprime(int max)
{
    int i;
    for(i=2; i<=(max-2); i++)
    {
        if(isprime(i)==1)
        {
            if(isprime(i+2)==1)
            {
                printf("{%d,%d} ",i,i+2);
            }
        }
    }
}

int main()
{
    int range;
    printf("Enter Range : ");
    scanf("%d",&range);
    twinprime(range);
    return 0;
}
