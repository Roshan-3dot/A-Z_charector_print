#include<stdio.h>
#include<conio.h>
void char_O();
void print();
int main(){
	printf("*** Print O Charector *** \n\n");
	// Call char_O() function
	char_O();
	return 0;
}
void char_O(){
		char matrix[5][4];
   	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			matrix[i][j]='#';
		    if(i==0||i==4){
		    	if(j==0||j==3){
		    		matrix[i][j]=' ';
				}
			}else if(i==1||i==2||i==3){
				if(j==1||j==2){
					matrix[i][j]=' ';
				}
			}
		}
	}
	// print matrix 5*4
	for(int i=0;i<5;i++){
		printf("\t");
		for(int j=0;j<4;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}
}

