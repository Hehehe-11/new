

#include <stdio.h>

int main()
{
    printf("enter a number");
    int n;
    scanf("%d", &n);
    int rem, sum=0, rev;
    rev=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+ rem;
        n=n/10;
    }
    if(sum==rev)
        printf("palindrome");
    else
        printf("not pal");
    return 0;
}
