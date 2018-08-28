#include <stdio.h>
void input(char *vehicle,int *time){
	printf("Enter the first character of vehicle type and parking time");
	scanf("%c %d",vehicle,time);
}
void fares(char vehicle,int time,int *fare){
	int i=0;
	if(vehicle=='c'){
		if(time>2){
			*fare=(20*2)+(30*(time-2));
		}
		else if(time==2){
			*fare=(20*2);
		}
		else{
			*fare=(20);
		}
	}
	else if(vehicle=='b'){
		if(time>4){
                        *fare=(40*4)+(50*(time-4));
                }
                else if(time==4){
                        *fare=(40*4);
                }
                else{
                        *fare=(40)*(time);
                }
	}
	else{
		if(time>3){
                        *fare=(30*3)+(40*(time-3));
                }
                else if(time==3){
                        *fare=(30*3);
                }
                else{
                        *fare=(30)*(time);
                }
	}
}
void main(){
	int time,fare;
	char vehicle;
	input(&vehicle,&time);
	fares(vehicle,time,&fare);
	printf("The total fare for %c vehicle parked for %d hours is %d",vehicle,time,fare);
}







	

