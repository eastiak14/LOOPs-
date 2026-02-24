#include<stdio.h>
int main()
{ 
    int n;
    scanf("%d", &n);
    for ( int i=1; i<=n; i++)
    {
        if (i==6 || i==10)
        {
            continue;

        }
        printf("%d\n",i);
    }
    return 0;
}