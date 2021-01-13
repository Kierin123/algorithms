#include <stdio.h>
#include <time.h>

int main()
{
    time_t actual_time;


    time(&actual_time);
    struct tm* timeinfo;
    timeinfo = localtime(&actual_time);
    char time_buff[9];
    

    enum daysIn
    {
        CurrentFebruary = 28,
        January = 31,
        February = CurrentFebruary,
        March = 31,
        April = 30,
        May = 31,
        June = 30,
        July = 31,
        August = 31,
        September = 30,
        October = 31,
        November = 30,
        December = 31,
    };

    int daysInFirstHalf = January + February + March + April + May + July;
    int daysInSecondHalf = June + August + September + October + November + December;
    printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
    printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
    printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);
    strftime(time_buff,9,"%H:%M:%S",timeinfo) ;
    printf("%s\n",&actual_time);
    return 0;
}