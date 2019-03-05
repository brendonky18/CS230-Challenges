#include <stdio.h>
#include <string.h>

// See the README.txt file for the challenge description.


struct Time {
  int hours;
  int minutes;
  int seconds;
};

int printTime(struct Time t){
  printf("%02i:%02i:%02i\n", t.hours, t.minutes, t.seconds);
}
struct Time elasped_time(struct Time time1, struct Time time2){
  

  int hours = time2.hours - time1.hours;
  int minutes = time2.minutes - time1.minutes;
  int seconds = time2.seconds - time1.seconds;
  
  //struct Time t = {hours, minutes, seconds};
  //printTime(t);

  if(seconds < 0) {
    seconds = seconds + 60;
    minutes--;
  }

  if(minutes < 0) {
    minutes = minutes + 60;
    hours--;
  }

  if(hours < 0) {
    hours = hours + 24;
  }

  struct Time timePassed = {hours, minutes, seconds};
  return timePassed;
}

void removeString(char string[], int start, int end) {
  int i = 0;
  for(i = start; i < strlen(string) - end; i++){
    string[i] = string[i + end];
  }

  string[i] = '\0';

  printf("%s", string);
}

int main(void) {
  printf("Get to work!\n");

  struct Time t1 = {3, 45, 15};
  struct Time t2 = {9, 44, 3};
  struct Time t3 = elasped_time(t1, t2);

  printTime(t1);
  printTime(t2);
  printTime(t3);
  char text[] = "the wrong sun tzu";
  removeString(text, 4, 6);
  return 0;
}