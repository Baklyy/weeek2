#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("please enter 4 numbers : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (b==a+1 && c==b+1 && d== c+1)
    {
        printf("YES\n");
    }
    else if (a==b+1 && b==c+1 && c==d+1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
