#include <stdio.h>
#include "standard_types.h"

typedef struct TIME {
   u16 seconds;
   u16 minutes;
   u16 hours;
}t;

void differenceBetweenTimePeriod(t t1,t t2,t *diff);

int main() {
   struct TIME startTime, stopTime, result;

   printf("Enter the start time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &startTime.hours,&startTime.minutes,&startTime.seconds);

   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stopTime.hours,&stopTime.minutes,&stopTime.seconds);

   // Difference between start and stop time
   differenceBetweenTimePeriod(startTime, stopTime, &result);
   printf("\nTime Difference: %d:%d:%d - ", startTime.hours,startTime.minutes,startTime.seconds);
   printf("%d:%d:%d ", stopTime.hours,stopTime.minutes,stopTime.seconds);
   printf("= %d:%d:%d\n", result.hours,result.minutes,result.seconds);
   return 0;
}

// Computes difference between time periods
void differenceBetweenTimePeriod(t start, t stop,t *result) {
   while (stop.seconds > start.seconds) {
      --start.minutes;
      start.seconds += 60;
   }
   (*result).seconds = start.seconds - stop.seconds;
   while (stop.minutes > start.minutes) {
      --start.hours;
      start.minutes += 60;
   }
   (*result).minutes = start.minutes - stop.minutes;
   (*result).hours = start.hours - stop.hours;
}