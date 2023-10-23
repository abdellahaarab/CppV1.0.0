#include <stdio.h>

int a,b,r;
	
void aficher(){
	printf("valoure de a est: %d , Valoure de b est %d \n ", a,b);
}

 void initialiser(int x, int y){
 	a=x;
 	b=y;
 }


void aficher1(int a, int b){
	printf("valoure de a est: %d , Valoure de b est %d \n ", a,b);
}


int somme(){
	return a+b;
}


void multiplication(int x, int y){
	printf("La multi de %d x %d est: %d \n", x,y, x*y);
}

void substraction(int x, int y){
	printf("La sub de %d - %d est: %d \n", x,y, x-y);
}


void AficherLaSomme(){
	printf("La somme de %d + %d est: %d \n", a,b, somme());
}





int main(){
	substraction(4,4);
	
	multiplication(4,4);
	
//	initialiser(5,5);
//	aficher();
//	somme();
//	AficherLaSomme();
//	aficher1(78,99);
	return 0;
}


//strucurelle
// #include <stdio.h>

// int a,b,c;

// int affictation(int x,int y){
//     // a=x;
//     // b=y;
//     // c=a+b;
//     return x+y;
// }

// int main()
// {
//     c = affictation(5,5);
//     printf("C = %d",c);

//     return 0;
// }






