#include<stdio.h>
#include<conio.h>
void char_X();
void print();
int main(){
	printf("*** Print X Charector *** \n\n");
	// Call char_X() function
	char_X();
	return 0;
}
void char_X(){
	char matrix[5][5];
   	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		   matrix[i][j]='#';
		   if(i==0||i==4){
		   	if(j==1||j==2||j==3){
		   		matrix[i][j]=' ';
			   }
		   }else if(i==1||i==3){
		   	  if(j==0||j==2||j==4){
		   	    matrix[i][j]=' '; 	
			  }
		   }else if(i==2){
		   	 if(j==2){
		   		continue;
			 }else{
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

