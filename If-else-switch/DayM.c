/*******************************************************
 Statement - Display Day of the month.
 Programmer - Vineet Choudhary
 Written For - https://developerinsider.co
 *******************************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int fm(int date, int month, int year) {
    int fmonth, leap;
    
    //leap function 1 for leap & 0 for non-leap
    if ((year % 100 == 0) && (year % 400 != 0))
        leap = 0;
    else if (year % 4 == 0)
        leap = 1;
    else
        leap = 0;
    
    fmonth = 3 + (2 - leap) * ((month + 2) / (2 * month))
    + (5 * month + month / 9) / 2;
    
    //bring it in range of 0 to 6
    fmonth = fmonth % 7;
    
    return fmonth;
}

//----------------------------------------------
int day_of_week(int date, int month, int year) {
    
    int dayOfWeek;
    int YY = year % 100;
    int century = year / 100;
    
    printf("\nDate: %d/%d/%d \n", date, month, year);
    
    dayOfWeek = 1.25 * YY + fm(date, month, year) + date - 2 * (century % 4);
    
    //remainder on division by 7
    dayOfWeek = dayOfWeek % 7;
    
    switch (dayOfWeek) {
        case 0:
            printf("weekday = Saturday");
            break;
        case 1:
            printf("weekday = Sunday");
            break;
        case 2:
            printf("weekday = Monday");
            break;
        case 3:
            printf("weekday = Tuesday");
            break;
        case 4:
            printf("weekday = Wednesday");
            break;
        case 5:
            printf("weekday = Thursday");
            break;
        case 6:
            printf("weekday = Friday");
            break;
        default:
            printf("Incorrect data");
    }
    return 0;
}
//------------------------------------------
void main() {
    int date, month, year;
    clrscr();
    
    printf("\nEnter the year ");
    scanf("%d", &year);
    
    printf("\nEnter the month ");
    scanf("%d", &month);
    
    printf("\nEnter the date ");
    scanf("%d", &date);
    
    day_of_week(date, month, year);
    
    getch();
}

/**********
Output :

Enter the year 2015
Enter the month 12
Enter the date 16
Date: 16/12/2015
weekday = Wednesday

************/