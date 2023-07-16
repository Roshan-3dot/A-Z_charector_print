#include<stdio.h>
#include<conio.h>
void char_T();
void print();
int main(){
	printf("*** Print T Charector *** \n\n");
	// Call char_T() function
	char_T();
	return 0;
}
void char_T(){
	char matrix[5][5];
   	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]='#';
		    if(i==1||i==2||i==3||i==4){
		    	if(j==0||j==1||j==3||j==4){
		    		matrix[i][j]=' ';
				}
			}
		}
	}
	// print matrix 5*5
	for(int i=0;i<5;i++){
		printf("\t");
		for(int j=0;j<5;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}
}

