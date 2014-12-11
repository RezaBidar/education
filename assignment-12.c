#include <stdio.h>
#include <stdlib.h>

//tabei benvisid ke tashkhis dahad character harfe bozorg ast ya kheyr
//tedad ejraye barname ebteda be barname dade mishavad
int is_up(char c){
    if(c >= 'A' && c <= 'Z')
         return 1 ;
    if(c >= 'a' && c <= 'z')
         return 0 ;
    return -1 ;    
}
int main(int argc, char *argv[])
{
  int n , flag ;
  char c ;
  scanf("%d" , &n);
  for(int i = 0 ; i < n ; i++){
          scanf(" %c" , &c);
          flag = is_up(c) ;
          if(flag == 1) printf("upperCase\n");
          else if(flag == 0) printf("lowerCase\n");
          else printf("invalid\n");
  }
  system("PAUSE");	
  return 0;
}
