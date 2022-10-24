#include<stdio.h>
#include<conio.h>


int main()

{


clrscr();
    int arr[]= {3,5,7,2,9};

    int *ptr[5], i;
    for(i=0; i<5; i++)

    {

        ptr[i] = &arr[i];

    }

    printf("Elements in array are = \n");
    for(i=0; i<5; i++)
    {

        printf("%d is at address %u \n",arr[i],ptr[i]);

    }
getch();
    return 0;

}