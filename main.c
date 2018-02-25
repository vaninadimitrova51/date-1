#include <stdio.h>
#include <stdlib.h>


int main()
{

    int day;
    int month;
    int year;
    int newDay;
    int numberOfDaysInMonth;

    printf("Enter day\n");
    scanf("%d", &day);

    printf("Enter month\n");
    scanf("%d", &month);

    printf("Enter year\n");
    scanf("%d", &year);

    printf("The date is %d/%d/%d\n\n", day, month, year);


    if(year % 4 == 0){
        printf("\nVisokosna\n(ne znam kak e na angliiski ne me sydi :D)\n\n");
        if(month == 2){
            if(day < 30){

                void Months();

                numberOfDaysInMonth = month;
                newDay = day + 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);

            }else if(day > 29){
                printf("\nThis date does not exist\n");
            }
    }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(day < 32){
                numberOfDaysInMonth = month;
                newDay = day + 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);
            }else if(day > 31){
                printf("\nThis date does not exist\n");
            }
        }else if(month == 2 || month == 4 || month == 6 || month == 9 || month == 11){
            if(day < 31){
                numberOfDaysInMonth = month;
                newDay = day - 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);
            }else if(day > 30){
                printf("\nThis date does not exist\n");
            }
        }



    }else if(year % 100 != 0){
        printf("\nNe e visokosna\n(ne znam kak e na angliiski ne me sydi :D)\n");
        if(month == 2){
            if(day < 29){

                numberOfDaysInMonth = month;
                newDay = day - 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);

            }else if(day > 28){
            printf("\nThis date does not exist\n");
            }
        }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(day < 32){
                numberOfDaysInMonth = month;
                newDay = day + 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);
            }else if(day > 31){
                printf("\nThis date does not exist\n");
            }
        }else if(month == 2 || month == 4 || month == 6 || month == 9 || month == 11){
            if(day < 31){
                numberOfDaysInMonth = month;
                newDay = day + 1;
                    if(month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
                        day = 31;
                    }
                    else{
                        day = 30;
                    }
                        month += 1;

                printf("\nThe new date is: %d/%d/%d\n", newDay, numberOfDaysInMonth, year);
            }else if(day > 30){
                printf("\nThis date does not exist\n");
            }
        }


    }


    return 0;
}

