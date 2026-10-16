#include<stdio.h>
int main()
{
    long long n,orginal,octal=0;
    long long rem,i=1;
    printf("enter a decimal number:");
    scanf("%11d",&n);

    orginal=n;

    while(n!=0)
    {
        rem=n%8;
        n=n/8;
        octal=octal=(rem*i);
        i=i*10;

    }
    printf("%11d in decimal=%11d in octal",orginal,octal);
    return 0;
}
