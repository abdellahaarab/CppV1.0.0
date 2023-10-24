#include <stdio.h>

// int main(){
//     char phrase[100];
//     printf("Donner une phrase");
//     scanf("%s",phrase);
//     puts(phrase); // == scanf("%s",phrase);

//     printf("%c",&phrase); 
//     gets(phrase);

//     printf("\n %c",phrase[0]-32);


//     int i;
//     for(i = 0; phrase[i]; i++){
//         printf("%c", phrase[i] - 32 );
//     }
    
//     return 0;

// }


int main(){
    char a = 6;
    printf("La adresse de a est : %d \n", &a);
    
    int b;
    
    int *p;
    p=&a;
    
    printf("La valoure de *p est : %d \n", *p);
    
    printf("La valoure de *p est : %d \n", p);
    
    *p =17;

    printf("La adresse de a est : %d \n", a);

    return 0;

}