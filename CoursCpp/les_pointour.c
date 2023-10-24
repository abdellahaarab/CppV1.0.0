#include <stdio.h>
// Les pointour


int main(){

    // char a = 6;
    // printf("La adresse de a est : %d \n", &a);
    
    // int b;
    
    // int *p;
    // p=&a;
    
    // printf("La valoure de *p est : %d \n", *p);
    
    // printf("La valoure de *p est : %d \n", p);
    
    // *p =17;

    // printf("La adresse de a est : %d \n", a);
    
    int T[6] = {6,12,4,2,1,80};
    
    int *p;
    
    p=&T[0];
    
    
    printf("Valoure de *p est: %d \n", *p);
    
    
    
    int i = 0;
    
    for(i=0; i<=5; i++){
       printf(" : %d \n", &T[i+1] - &T[i] ); 
    }


    printf("Valoure de *p est : %d \n", *p ); 

    printf("Valoure de *( p + 1 ) est : %d \n", *(p+1) );
    
    p = T;
    for(p ; p < T+6; p++){
       printf(" : %d \n",*p ); 
    }

    return 0;

}


// Note :
// &T[n] = &T[0] + n
// &T[n] = p + n
// &T[n] = T + n

// T[n]  = *( p+1 )  
