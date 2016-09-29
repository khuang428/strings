#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char *s){
  int len = 0;
  while(*s){
    len++;
    s++;
  }
  return len;
}

char * mystrncpy(char *dest, char *source, int n){
  char *s = dest;
  while(n){
    *dest = *source;
    dest++;
    source++;
    n--;
  }
  return s;
}

char * mystrcat(char *dest, char *source){
  char *s = dest;
  dest+=strlen(dest);
  while(*source){
    *dest = *source;
    dest++;
    source++;
  }
  return s;
}

void main(){
  char str[] = "Ahoy";
  char str1[] = "pie";
  printf("str = %s\n", str);
  printf("str1 = %s\n", str1);
  printf("length of str = %d\n", mystrlen(str));
  printf("length of str1 = %d\n", mystrlen(str1));
  printf("%s\n", mystrncpy(str,str1,4));
  printf("%s\n", mystrcat(str,str1));
}
