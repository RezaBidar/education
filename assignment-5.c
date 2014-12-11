#include <stdio.h>
#include <stdlib.h>

//barnamei ke beyne n adade mosbat bozorgtarin ra chap konad
int main(int argc, char *argv[])
{
    
    int n , temp , max = 0;
    for(int i = 0 ; i < n ; i++){
          scanf("%d" , temp);
          if(temp > max) max = temp ;
    }
    printf("%d \n" , max);

    system("PAUSE");	
    return 0;
}
