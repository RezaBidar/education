#include <stdio.h>
#include <stdlib.h>

//barnamei benvisid ke ba gereftan sene karbar dar khorooji khordsal , javan , miansal va pir boodane anra tashkhis dahad
// 0-10 khordsal
// 10-18 javan
// 18-24 miansal
// 24-100 pir
int main(int argc, char *argv[])
{
    int x ;
    scanf("%d" , &x);
    if(x >= 0 && x <= 10) printf("khordsal\n");
    else if( x <= 18) printf("javan \n");
    else if( x <= 24) printf("miansal \n");
    else if( x <= 100) printf("pir \n");
    else printf("not alive \n");
    
    system("PAUSE");	
    return 0;
}
