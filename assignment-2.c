#include <stdio.h>
#include <stdlib.h>

//barnamei benvisid ke ba daryafte tool va arze mostatil , masahat va mohite an ra dar khorooji chap konad
int main(int argc, char *argv[])
{
    int tool , arz ;
    scanf("%d %d" , &tool , &arz);
    printf("masahat = %d \nmohit = %d \n" , arz*tool , (arz+tool)*2) ;
    
    system("PAUSE");	
    return 0;
}
