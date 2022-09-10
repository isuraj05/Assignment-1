#include<stdio.h>
#include<conio.h>
int main()
{
	int d,m,y;
    printf("Enter a date in DD/MM/YY format: ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("\"Day- %d, Month- %d, Year- %d\"",d,m,y);
    getch();
}
