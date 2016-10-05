#include <string.h>
#include <stdio.h>

int strlenG( char *s){
  int len=0;
  while(*s){
    len++;
    s++;
  }
  return len;
}

char * strncpyG( char *dest, char *source, int n){
  char *returnDest=dest;
  while(n){
    *dest=*source;
    dest++;
    source++;
    n--;
  }
  return returnDest;
}

char * strcatG( char *dest, char *source ){
  char *temp=dest;
  dest+=strlen(dest);
  while (*source){
    *dest=*source;
    dest++;
    source++;
  }
  return temp;
}

int strcmpG( char *s1, char *s2 ){
  while (*s1 || *s2){
    if(*s1>*s2){
      return 1;
    }
    if(*s2>*s1){
      return -1;
    }
    s1++;
    s2++;
  }
  return 0;
}


char * strchrG( char *s, char c ){
  while(*s!=c){
    if(*s==0){
      return NULL;
    }
    s++;
  }
  return s;
}

int main(){
  char g[5]="str";
  printf("strlenG: %d\n", strlenG(g));
  char i[5]="str";
  char o[10]="str";
  printf("strncpyG: %s\n", strncpyG(o,i,2));
  char v[5]="str";
  char a[10]="str";
  printf("strcatG: %s\n", strcatG(a,v));
  char n[5]="ztr";
  char t[5]="str";
  printf("strcmpG: %d\n", strcmpG(n,t));
  printf("strcmp: %d\n", strcmp("abc","bc"));
  char p[5]="str";
  printf("strchrG: %c\n", *strchrG(p,'t'));
  return 0;
}
