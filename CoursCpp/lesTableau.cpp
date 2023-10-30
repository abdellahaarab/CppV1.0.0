#include <stdio.h>

	
	int T3[6];
	void aficherTableau(int T[]){
			
		int j = 0;
		while(j<6){
		  printf("%d\t",T[j]);
		  j++;	
		}	
	}

	void remplirTableau(int T[]){
		
		int i = 0;
		while(T3[i]){
			T3[i]=T[i];
			i++;
//			printf("%d",T3[i]);
		}
	}
	
	
int main(){
	int T1[6] = {2,7,7,78,12,3};
	aficherTableau(T1);
	remplirTableau(T1);
	
	int i = 0;
	while(i<6){
		printf("%d",T3[i]);
		i++;
	}
	
//		int T0[3][2] = {
//		{5,1},
//		{8,6},
//		{3,6},
//		};

//		int i = 0;
		
//		while(i<3){
//		  //printf("%d\t",T0[0][i]);
//		  i++;	
//		}
	
	return 0;

}
