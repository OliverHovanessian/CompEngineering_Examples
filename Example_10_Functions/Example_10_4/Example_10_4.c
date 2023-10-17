//Determine day of the week based on equation:
//Assume year month day given as 3 integers


//The function should recieve day/month/year then use function to compute it 
#include <stdio.h>
#include <stdlib.h>

int DayOfTheWeekFinder (int Day, int Month, int Year)
{
    if (Month < 3)
    {
        Month=Month+12 ;
        Year = Year - 1 ;
    }
    return ((13*Month+3)/5 + Day + Year + Year/4 - Year/100 + Year/400)%7 ;
}
int main ()
{
    int day, month, year,DayOfTheWeek;
printf("Please enter the day's date\n");
scanf("%d",&day);
printf("Please enter the month\n");
scanf("%d",&month);
printf("And finally enter the year\n");
scanf("%d",&year);
printf("The date you've entered is the %d . %d . %d\n",day,month,year);
DayOfTheWeek = DayOfTheWeekFinder(day,month,year);

switch (DayOfTheWeek)
{
case 0 : printf ("The day is Monday") ; break;
case 1 : printf ("The day is Tuesday") ; break ;
case 2 : printf ("The day is Wednesday") ; break ;
case 3 : printf ("The day is Thursday") ; break;
case 4 : printf ("The day is Friday") ; break ;
case 5 : printf ("The day is Saturday") ; break ;
case 6 : printf ("The day is Sunday") ; break ;

default:
printf("Invalid dates provided");
}
return 0;
}