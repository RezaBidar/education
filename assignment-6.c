#include <stdio.h>
#include <stdlib.h>

//barnamei ke moadele nomrehaye 20ta dars ro mohasebe va chap mikonad
int main(int argc, char *argv[])
{
  float sum = 0 , ave , temp;
  for(int i = 0 ; i < 2 ; i++) {
          scanf("%f" , &temp);
          sum += temp ;        
  }
  ave = sum / 2 ;
  printf("moadel = %.2f \n" , ave ) ;
  
  system("PAUSE");	
  return 0;
}
