#include <stdio.h>
struct student{
	int roll;
	char name[100];
	char dept[100];
	int marks;
	char grade[10];
};
void input_data(int index,struct student *studs){
	printf("Enter the student roll.");
	scanf("%d",&studs->roll);
	printf("Enter the student name.");
        scanf("%s",studs->name);
	printf("Enter the student dept.");
        scanf("%s",studs->dept);
	printf("Enter the student marks.");
        scanf("%d",&studs->marks);
	printf("Enter the student grade.");
        scanf("%s",studs->grade);
}

void print_data(int length,struct student studs[],int roll){
	int done = 0;
	for(int i=0;i<length;i++){
		if(studs[i].roll==roll){
			printf("The student data is : %d %s %s %d %s",studs[i].roll,studs[i].name,studs[i].dept,studs[i].marks,studs[i].grade);
			done = 1;
			break;
		}

	}
	if(done==0){
		printf("THere is no such student.");
	}
}

void get_roll(int *roll){
	printf("Enter the roll number");
	scanf("%d",roll);
}
void main(){
	int roll,index=0;
	struct student studs[100];
	input_data(index,&studs[index]);
	index++;
	get_roll(&roll);
	print_data(index,studs,roll);
}









