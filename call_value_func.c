#include<stdio.h>
#include<conio.h>
#include<math.h>
float calarea(float, float, float);
void main() 
{
float a, b, c, area;
printf("Enter three side of a triangle");
scanf("%f%f%f",&a,&b,&c);
area= calarea(a, b, c);
printf("area of that triangle i.e. =%f\n",area);
getch();
}
float calarea(float x, float y, float z)
{
float tarea, s;
s = (x+y+z)/2;
tarea = sqrt(s*(s-x)*(s-y)*(s-z));
return(tarea);
}