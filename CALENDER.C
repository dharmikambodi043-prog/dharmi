#include<stdio.h>
#include<conio.h>

void main() {
    int days, month, year,i;
clrscr();

    printf("Enter Month (1-12): ");
    scanf("%d", &month);

    printf("Enter Year: ");
    scanf("%d", &year);

    // Days calculation
    if(month == 2) {

	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	    days = 29;
	else
	    days = 28;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11) {
	days = 30;
    }
    else {
	days = 31;
    }

    printf("\nDays in Month: %d\n", days);

    printf("\nCalendar:\n");
    for( i=1; i<= days; i++)
     {
     printf("%d ", i);
    }

    getch();
}