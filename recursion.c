#include<stdio.h>
int fun(int x)
{
    if(x==1)
    return 1;
    else
    return 1+fun( x -1 );
}
 void main()
{
    int n = 10;
    printf("%d",fun(n));
}