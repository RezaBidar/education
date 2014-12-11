#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  char s[60] ;
  int t ;
  scanf("%d" , &t);
  for(int c = 1 ; c <= t ; c++){
          scanf("%s" , s);
          for(int i = 0 ; s[i] != '\0' ; i++)  {
                  if(s[i] == 'Z') s[i] = 'A' ;
                  else s[i]++ ;
          }
          printf("String #%d\n%s\n\n" , c , s);      
  }	
  return 0;
}