#include "stdio.h"

void strSwap(char* a, char* b);
int strlen(char* a);
int strCmp(char* a, char* b);

int main()
{
    char str1[] = "Ritambhara";
    char str2[] = "Ritambhara";
    printf("%s : %s\n", str1, str2);
    strSwap(str1, str2);
    printf("%s : %s\n", str1, str2);
    if(strCmp(str1,str2)) {
      printf("they are equal values!\n");
    } else {
      printf("they are not equal values!\n");
    }
}

void strSwap(char* str1, char* str2)
{
    int len = strlen(str1);
    for(int i=0; i<len; i++)
    {
        char temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
}

int strlen(char * a) {
  int length = 0;
  while(*a != '\0') {
    length++;
    *a++;
  }
  return length;
}

int strCmp(char* a, char* b) {
  if(strlen(a) != strlen(b)) {
    return 0;
  }
  else {
    while(*a != '\0' && *b != '\0') {
      a++;
      b++;
      if(*a != *b) {
        return 0;
      }
    }
    if(*a == '\0' && *b == '\0') {
      return 1;
    }
  }
}

