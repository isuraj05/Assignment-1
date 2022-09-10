#include<stdio.h>
#include<conio.h>
int main()
{
	int r;
	float area;
    printf("Enter the radius: ");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area of circle is %f having the radius %d",area,r);
    getch();
}
