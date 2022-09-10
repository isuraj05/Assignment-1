#include<stdio.h>
#include<conio.h>
int main()
{
	int h,m;
    printf("Enter a time HH:MM format: ");
    scanf("%d:%d",&h,&m);
    printf("\"%d Hour and %d Minute\"",h,m);
    getch();
}
