#include <stdio.h>
#include <stdlib.h>

//barnamei benvisid ke 4 character ra az voroodi begirad 
//agar ba ham barabar boodand equal ra chap konad vagarna chap konad not qual
int main(int argc, char *argv[])
{
  char c1 , c2 , c3 , c4 ;
  scanf("%c %c %c %c" , &c1 , &c2 , &c3 , &c4) ;
  
  if(c1 == c2 && c2 == c3 && c3 == c4) printf("equal\n") ;
  else printf("not equal\n") ;
  
  system("PAUSE");	
  return 0;
}
