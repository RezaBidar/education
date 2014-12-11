#include <stdio.h>
#include <stdlib.h>

//barnamei ke 2 adad begirad va meghdare bozorgtar ra dar khorooji chap konad
int main(int argc, char *argv[])
{
  int a1 , a2 ;
  scanf("%d %d" , &a1 , &a2);
  if(a1 > a2) printf("%d \n", a1);
  else printf("%d \n" , a2);
  
  system("PAUSE");	
  return 0;
}
