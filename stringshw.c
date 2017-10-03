#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcpy

char * notstrcpy( char * dest, char * source){
  int i;
  for ( i = 0; i < strlen(source); i++){
    dest[i] = source[i];
  }
  // dest[strlen(source) - 1] = 0;
}

//strcmp
int notstrcmp(char * s1, char * s2){
  int i;
  int a = strlen(s1);
  int b = strlen(s2);
  if (a < b){
    i = -1;
    printf("%d\n", i);
  }
  if (a > b){
    i = 1;
    printf("%d\n", i);
  }
  if (a == b){
    i = 0;
    printf("%d\n", i);
  }
  
}


int main(){

  char src[] = "hello";
  char dest[40];
  notstrcpy(dest, src);
  
  printf("source: %s\n",src);
  printf("copied dest: %s\n",dest); //some weird stuff pops up at end?
  
  char bob[] = "hair";
  char steve[] = "HAiR";
  printf("strcmp bob & steve:\n");
  notstrcmp(bob, steve);

  char alex[] = "string cheese";
  char harry[] = "cheese";
  printf("strcmp alex & harry:\n");
  notstrcmp(alex, harry);

  char gilbert[] = "ostrich";
  char gunther[] = "an emu is an emo ostrich";
  printf("strcmp gilbert & gunther:\n");
  notstrcmp(gilbert, gunther);

  
  
}
