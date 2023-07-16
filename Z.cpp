#include<stdio.h>
#include<conio.h>
void char_Z();
void print();
int main(){
	printf("*** Print Z Charector *** \n\n");
	// Call char_Z() function
	char_Z();
	return 0;
}
void char_Z(){
		char matrix[5][5];
   	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		   matrix[i][j]='#';
	       if(i==1){
	         	if(j==3){
	       	     continue;	
			    }
			    matrix[i][j]=' ';
		   }else if(i==2){
	         	if(j==2){
	       	     continue;	
			    }
			    matrix[i][j]=' ';
		   }else if(i==3){
	         	if(j==1 ){
	       	     continue;	
			    }
			    matrix[i][j]=' ';
		   }  
		}
	}
	// print matrix 5*4
	for(int i=0;i<5;i++){
		printf("\t");
		for(int j=0;j<5;j++){
			printf(" %c",matrix[i][j]);
		}
		printf("\n");
	}
}

