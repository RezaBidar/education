#include <stdio.h>
#include <stdlib.h>

//barnamei benvisid agar esme karbar sharayete zir ra dasht dar khoroji haman esm ra chap konad vagarna chap konad invalid
//toole esme kamtar az 20 bashad
//tamame horoof ba harfe koochik bashand
int main(int argc, char *argv[])
{
  char name[50] ;
  int i ,flag = 0 ;//invalid flag
  
  scanf("%s" , name);
  for(i = 0 ; name[i] != '\0' ; i++){
        if(name[i] >= 'a' && name[i] <= 'z'){
                   flag = 1 ;
                   break ;
        }      
  }
  
  if(flag == 1 || i > 20) printf("invalid \n");
  else printf("%s \n" , name);
  
  system("PAUSE");	
  return 0;
}
