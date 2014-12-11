#include <stdio.h>
#include <stdlib.h>

//barnamei benvisid ke ba estefade az eshare gar maghadire 3 noe moteghayer ra taghir va chap konad
int main(int argc, char *argv[])
{
  int a , *aa ;
  float b , *bb ;
  char c , *cc ;
  scanf("%d %f %c" , &a , &b , &c);
  
  //entesabe adrese moteghayerhaye asli be esharegar
  aa = &a ;
  bb = &b ;
  cc = &c ;
  
  //teghire maghadire asli be vasileye eshare gar
  *aa += 3 ;
  *bb /= 2 ;
  *cc += 1 ;
  
  //chape maghadire asli be vasileye esharegar
  printf(" %d \n %f \n %c \n" , *aa , *bb , *cc) ;
  
  system("PAUSE");	
  return 0;
}
