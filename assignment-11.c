#include <stdio.h>
#include <stdlib.h>

//barnamei benvisid ke shabihsaze mashin hesab bashad
//baraye har amal tabe jodagane tarif konid 
float sum(float x ,float y){
    return x+y ;   
}
float minus(float x , float y){
    return x-y ;
}
float division(float x , float y){
    return x / y ;
}
float mul(float x , float y){
    return x * y ;
}

int main(int argc, char *argv[])
{
    float a , b ;
    char c ;
    scanf("%f %f %c" , &a , &b , &c);
    switch(c){
              case '+' : 
                   printf("%f \n" , sum(a,b));
                   break ;
              case '-' : 
                   printf("%f \n" , minus(a,b));
                   break ;
              case '/' : 
                   printf("%f \n" , division(a,b));
                   break ;
              case '*' : 
                   printf("%f \n" , mul(a,b));
                   break ;
    }
     
    system("PAUSE");	
    return 0;
}
