#include <stdio.h>
void input(char str[]){
	printf("Enter the string");
	scanf("%s",str);
}
void copy_str(char str[],char new_str[]){
	for(int i=0;i<100;i++){
		if(str[i]!='\0'){
		 	new_str[i] = str[i];
		}
		else{
			break;
		}
	}
	printf("Copied the string int a new string array.");
}
void main(){
	char str[100];
	input(str);
	char new_str[100];
	copy_str(str,new_str);
	
}
