#include <stdio.h>
#include <stdlib.h>
//barnamei benvisid ke 5 adad az voroodi gerefte va anha ra be soorate nozooli moratab konad
int main(int argc, char *argv[])
{
    int a[5] ;
    //get array
    for(int i = 0 ; i < 5 ; i++) scanf("%d" , &a[i]) ;
    //bubble sort
    for(int i = 0 ; i < 5 ; i++){
            for(int j = 0 ; j < 4 - i ; j++){
                    if(a[j] < a[j+1]){
                            int temp = a[j] ;
                            a[j] = a[j+1] ;
                            a[j+1] = temp ;        
                    }        
            }
    }
    //print array 
    for(int i = 0 ; i < 5 ; i++) printf("%d\n" , a[i]);
    
    system("PAUSE");	
    return 0;
}
