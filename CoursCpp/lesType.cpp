#include <stdio.h>

//typedef int batata;
//
//batata main(){
//	 batata a=12;
//	 printf("%d", a);	
//	
//	return 0;
//}


struct Point{
	char c;
	int x,y;
};


int main(){

	Point p1,p2;
	
	p1.c = 'v';
	p1.x = 5;
	p1.y = 6;
	
	
	printf("%d", p1); 
	
	
	return 0;
}
