#include <stdio.h>
void input(float *marks);
void grades(float marks,char grade[]);
void output(char grade[]);
void main(){
    float marks;
    char grade[2];
    input(&marks);
    grades(marks,grade);
    output(grade);
}
void input(float *marks){
    printf("Type the marks.");
    float mar;
    scanf("%f",&mar);
    *marks = mar;
}
void grades(float marks,char grade[]){
    
    if (marks>95){
        grade[0] = 'A';
        grade[1]= '1';
    }
    else if(marks>85){
        grade[0]='A';
        grade[1] = '2';
    }
    else if(marks>75){
        grade[0]='B';
        grade[1]= '1';
    }
    else if (marks>60){
        grade[0] = 'B';
        grade[1] = '2';
    }
    else if(marks>45){
        grade[0]= 'C';
        grade[1]= '1';
    }
    else if(marks>40){
        grade[0] = 'C';
        grade[1] = '2';
    }
    else if(marks>35){
        grade[0] = 'D';
        grade[1] = '1';
    }
    else if(marks>30){
        grade[0] = 'D';
        grade[1] = '2';
    }
    else{
        grade[0] = 'E';
        grade[1] = '1';
    }
}
void output(char grade[]){
    printf("Your grade is %s",grade);
}
