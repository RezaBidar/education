#include <stdio.h>
#include <stdlib.h>

//barnamei benvisid ke yek adade sahih begirad va be tedade an adad az karbar adad begirad 
//va dar nahayad adade mosbat ra be soorate soOdi chap konad
//nokte maximum n = 30 
int main(int argc, char *argv[])
{
    
    int a[30] , n , index = 0 ;
    
    scanf("%d" , &n);
    
    //agar meghdare gerefte shode mosbat bood index yedoone ezafe mishe va khooneye badie arraye por mishe
    for(int i = 0 ; i < n ; i++){
            scanf("%d" , &a[index]);
            if(a[index] >= 0 ){
                    index++ ;
            }        
    }
    
    //bubble sort
    for(int i = 0 ; i < index ; i++){
            for(int j = 0 ; j < index - 1 - i ; j++)
                    if(a[j] > a[j+1]){
                            int temp = a[j] ;
                            a[j] = a[j+1] ;
                            a[j+1] = temp ;
                    }        
    }
    
    //print array
    for(int i = 0 ; i < index ; i++) printf("%d \n" , a[i]) ;
    
    system("PAUSE");	
    return 0;
}
