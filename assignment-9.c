#include <stdio.h>
#include <stdlib.h>

//barnamei benvisid ke aval bodan ya naboodan x ra tashkhis dahad
//tedade ejraye barname ebteda be barname dade mishavad

int is_aval(int a){
    int flag = 1 ;
    for(int i = 2 ; i < a/2 ; i++){
            if( a%i == 0 ){
                flag = 0 ;
                break ;    
            }
    }   
    return flag ;
}

int main(int argc, char *argv[])
{
    int n , x ;
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
            scanf("%d" , &x);
            if(is_aval(x) == 1) printf("AVAL \n");
            else printf("AKHAR \n");
    }
    system("PAUSE");	
    return 0;
}
