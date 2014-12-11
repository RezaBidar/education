#include <stdio.h>
#include <stdlib.h>

// banramei benvisid ke natijeye jostojooye yek adad dar arraye 10taii ra chap konad
int main(int argc, char *argv[])
{
    int a[10] , x , flag = 0;
    
    for(int i = 0 ; i < 10 ; i++) scanf("%d" , &a[i]);
    scanf("%d" , &x) ;
    
    //linear search
    for(int i = 0 ; i < 10 ; i++){
            if(a[i] == x){
                    flag = 1 ;
                    break ;        
            }        
    }
    
    if(flag == 1) printf("ast\n");
    else printf("nist\n");
    
    system("PAUSE");	
    return 0;
}
