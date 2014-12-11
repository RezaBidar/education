#include <stdio.h>
#include <stdlib.h>

//tabei benvisid ke majmooe arghame adade vared shode ra chap konad
//tedade ejraye barname ebteda be barname dade mishavad
int majmoo(int n){
    int sum = 0 ;
    while(n > 0){
            sum += n%10 ;
            n /= 10 ;        
    }   
    return sum ;
}

int main(int argc, char *argv[])
{
  int t , x ;
  scanf("%d" , &t) ;
  for(int i = 0 ; i < t ; i++) {
          scanf("%d" , &x) ;
          printf("%d \n" , majmoo(x)) ;
  }
  system("PAUSE");	
  return 0;
}
