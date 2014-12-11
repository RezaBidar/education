#include <stdio.h>
#include <stdlib.h>
//barnamei benvisid ke be ezaye daryafte character haye zir maghadire marboote ra chap namayad
//tedad ejraye barname ebteda be barname dade mishavad
int main(int argc, char *argv[])
{
  int n ;
  char c ;
  scanf("%d" , &n) ;
  for(int i = 0 ; i < n ; i++){
          scanf(" %c" , &c) ;
          switch(c){
                case 'f' : 
                     printf("farvardin \n");
                     break ;
                case 'o' : 
                     printf("oridbehesht \n");
                     break ;
                case 'k' : 
                     printf("khordad \n");
                     break ;
                case 't' : 
                     printf("tir \n");
                     break ;
                case 'm' : 
                     printf("mordad \n");
                     break ;
                case 's' : 
                     printf("shahrivar \n");
                     break ;   
                default :
                     printf("invalid \n");           
          }        
  }
  system("PAUSE");	
  return 0;
}
