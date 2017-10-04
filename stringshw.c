#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//strcpy

char * notstrcpy( char * dest, char * source){
  int i;
  for ( i = 0; i < strlen(source); i++){
    dest[i] = source[i];
  }
  dest[strlen(source)] = 0;
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
