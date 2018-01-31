#include <stdio.h>
#include <stdlib.h>



/* römische Zahlen:
1=I
4=IV
5=V
9=IX
10=X
40=XL
50=L
90=XC
100=C
400=CD
500=D
900=CM
1000=M
*/


int main(int argc, char ** argv){
	int i, remain;
	for (i=1;i<=(argc-1);i++){
		remain=atoi(argv[i]);
		while(remain){
			while((remain-1000)>=0){
			printf("M");
			remain-=1000;
			}
			
			while((remain-500)>=0){
				if (remain>=900){
					printf("CM");
					remain-=900;
					}
				else{
					printf("D");
					remain-=500;
				}
			
			}
			
			while((remain-100)>=0){
				if (remain>=400){
					printf("CD");
					remain-=400;
				}
				else{
				printf("C");
				remain-=100;
				}
			
			}
			
			while((remain-50)>=0){
				if(remain>=90){
					printf("XC");
					remain-=90;
				}
				else{
				printf("L");
				remain-=50;
				}
				
			}
			
			while((remain-10)>=0){
				if(remain>=40){
					printf("XL");
					remain-=40;
				}
				else{
					printf("X");
					remain-=10;
				}
			
			}
			
			while((remain-5)>=0){
				if(remain=9){
					printf("IX");
					remain-=9;
				}
				else{
					printf("V");
					remain-=5;
				}
			
			}
			
			while((remain-1)>=0){
				if(remain=4){
					printf("IV");
					remain-=4;
				}
			else{
				printf("I");
				remain-=1;
			}
			
			}
		}
		printf("\n");
	}
}
