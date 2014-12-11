#include <stdio.h>
#include <stdlib.h>

//tabei benvisid ke be tedade n dar khorooji setare chap konad 
//va in barname ta zamani ke karbar adade bozorgtar az sefr vared mikonad edame dashte bashad
void print_stars(int n){
     for(int i = 0 ; i < n ; i++) printf("*");
     printf("\n");     
}
int main(int argc, char *argv[])
{
    int x ;
    scanf("%d" , &x);
    while(x > 0){
            print_stars(x) ;
            scanf("%d" , &x);
    }
    system("PAUSE");	
    return 0;
}
