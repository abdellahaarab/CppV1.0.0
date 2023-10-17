//#include <stdio.h>
#include <iostream>
using namespace std;

//typedef int batata;
//
//batata main(){
//	 batata a=12;
//	 printf("%d", a);	
//	
//	return 0;
//}


//struct Point{
//	char c;
//	int x,y;
//};


//class Point{
	//	public :
	//		   char c;
	//		   int x,y;
	//};
	
//int main(){
//
//	Point p1,p2;
//	
//	p1.c = 'v';
//	p1.x = 5;
//	p1.y = 6;
//	
//	
//	printf("Le point P1 a c : %c (%d,%d) \n", p1.c, p1.x, p1.y); 
//	
//	
//	return 0;
//}

class Point{
	public:
		char c;
		int x,y;
	void intialiser(char a, int b, int c){
			c=a;
			x=b;
			y=c;
		}
		
	void afficher(){
//			cout << Point.c << "et" << Point.x << " et " << Point.y << endl; 
			printf("le point c est: %c (%d,%d) \n", c, x, y);
		}
};


int main(){

	Point p1,p2;
	p1.intialiser('v',8,5);
	p2.intialiser('w',58,7);
	
	p1.afficher();
	p2.afficher();
	
	return 0;
}
