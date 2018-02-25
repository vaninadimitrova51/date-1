#include <stdio.h>
#include <stdlib.h>

int main()
{

    int day;
    int month;
    int year;

    printf("Enter the day\n");
    scanf("%d", &day);

    printf("Enter the month\n");
    scanf("%d", &month);

    printf("Enter the year\n");
    scanf("%d", &year);

    printf("The date you entered is: %d/%d/%d\n", day, month, year);

    if(year < 0 || year > 9999 || month < 1 || month > 12 || day <= 0 || day > 31){
        printf("Invalid date");
    }else if(year % 4 == 0){
        printf("Visokosna\n");
        if(month == 2 && day > 29){
            printf("Invalid date\n");
        }else if(month == 4 || month == 6 || month == 9 || month == 11){
            if(day > 30){
                printf("Invalid date");
            }
        }
    }else if(year % 100 != 0){
        printf("Ne e visokosna\n");
        if(month == 2 && day > 28){
            printf("Invalid date\n");
        }else if(month == 4 || month == 6 || month == 9 || month == 11){
            if(day > 30){
                printf("Invalid date");
            }
        }
    }

    if(month != 3 && month != 1 && day == 1){
        if(month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            day = 31;
        }else{
            day = 30;
        }
        month += 1;
    }else if(month == 2){
        if(year % 4){
            day = 1;
        }else if(year != 100){
            day = 1;
        }
        month += 1;
    }else if(month == 12 && day == 31){
        day = 1;
        month = 1;
        year += 1;
    }else{
        day += 1;
    }

    printf("The new day is %d/%d/%d", day, month, year);







    return 0;
}
