#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//barnamei benvisid ke be tedade n az karbar esm begirad va dar nahayat be soorate soOdi anha ra chap konad
//max n = 30 

int main(int argc, char *argv[])
{

    char a[30][50] ;//arraye 30taii az stringe 50 characteri
    char temp[50] ;
    int n;
    
    scanf("%d" , &n) ;
    for(int i = 0 ; i < n ; i++) scanf("%s" , a[i]) ;
    
    //bubble sort
    for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < n - 1 - i ; j++)
                    if(a[j][0] > a[j+1][0]){
                            strcpy(temp , a[j]) ;
                            strcpy(a[j] , a[j+1]) ;
                            strcpy(a[j+1] , temp) ;
                    }
    
    for(int i = 0 ; i < n ; i++) printf("%s\n" , a[i]) ;
    system("PAUSE");	
    return 0;
}
