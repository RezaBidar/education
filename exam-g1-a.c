#include <stdio.h>
#include <stdlib.h>

//barnamei benvisid ke 3 adade ashari ra gerefte va mighdare miani ra chap konad
int main(int argc, char *argv[])
{
    float a[3] ;
    for(int i = 0 ; i < 3 ; i++) scanf("%f" , &a[i]);
    //bubble sort
    for(int i = 0 ; i < 3 ; i++)
            for(int j = 0 ; j < 2-i ; j++)
                    if(a[j] < a[j+1]){
                            int temp  = a[j] ;
                            a[j] = a[j+1] ;
                            a[j+1] = temp ;        
                    }
    printf("%f\n" , a[1]) ;
    system("PAUSE");	
    return 0;
}
