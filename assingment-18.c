#include <stdio.h>
#include <stdlib.h>

//barnamei benvisid ke 20 adad gerefte va tedad adadi ke az miangine anha kamtar ast ra chap konad
int main(int argc, char *argv[])
{
    int a[20] , counter = 0;
    float ave , sum = 0;
    for(int i = 0 ; i < 20 ; i++) {
            scanf("%d" , &a[i]);
            sum += a[i] ;
    }
    //mohasebeye miangin
    ave = sum / (float)20 ;
    //agar adadi az araye az miangin kamtar bood counter ra yeki ezafe mikonad
    for(int i = 0 ; i < 20 ; i++) if(a[i] < ave) counter++ ;
    printf("%d\n" , counter) ;
    
    system("PAUSE");	
    return 0;
}
