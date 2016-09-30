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
  dest+=mystrlen(dest);
  while(*source){
    *dest = *source;
    dest++;
    source++;
  }
  return s;
}

int mystrcmp(char *s1, char *s2){
  while(*s1 && *s2){
    if(*s1 > *s2){
      return 1;
    }else if(*s2 > *s1){
      return -1;
    }
    s1++;
    s2++;
  }
  if(*s1){
    return 1;
  }else if(*s2){
    return -1;
  }
  return 0;
}

char * mystrchr(char *s, char c){
  while(*s){
    if(*s == c){
      return s;
    }
    s++;
  }
  return "(null)";
}

void main(){
  char str[] = "Ahoy";
  char str1[] = "pi";
  printf("str: %s\n", str);
  printf("str1: %s\n\n", str1);
  printf("length of str: %d\n", mystrlen(str));
  printf("length of str1: %d\n\n", mystrlen(str1));
  printf("copy first 3 char of str to str1: %s\n", mystrncpy(str1,str,3));
  printf("str: %s\n\n", str);
  printf("add str1 to str: %s\n", mystrcat(str,str1));
  printf("str : %s\n\n", str);
  printf("compare ab to ab: %d\n", mystrcmp("ab","ab"));
  printf("compare ab to abc: %d\n", mystrcmp("ab","abc"));
  printf("compare abc to ab: %d\n", mystrcmp("abc","ab"));
  printf("compare ab to bc: %d\n\n", mystrcmp("ab","bc"));
  printf("look for a in abcda: %s\n", mystrchr("abcda", 'a'));
  printf("look for f in abcda: %s\n", mystrchr("abcda", 'f'));
}
