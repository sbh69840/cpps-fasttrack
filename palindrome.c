#include <stdio.h>
#include <math.h>
void input(int *num);
void reverse_num(int num,char *reverse[],char *actual[]);
void compare_strings(char *a[],char *b[],int *equal);
void check_palindrome(char *reverse[],char *actual[]);
void main(){
    int num;
    char *actual[100];
    char *reverse[100];
    input(&num);
    printf("%d",num);
    reverse_num(num,reverse,actual);
    check_palindrome(reverse,actual);

}
void input(int *num){
    printf("Enter the number");
    int n;
    scanf("%d",&n);
    *num = n;
}
void reverse_num(int num,char *reverse[],char *actual[]){
    int num_of_digits,i;
    num_of_digits = log10(num)+1;
    char act[100];
    char rev[100];
    for(i=0;i<num_of_digits;i++){
        act[i] =num%10;
        rev[(num_of_digits-1)-i] =num%10;
        num /= 10;

        

    }
    printf("%s",act);
    *actual = act;
    *reverse = rev;
}
void compare_strings(char *a[],char *b[],int *equal){
    int i=0;
    while(*a[i]==*b[i]){
        if(*a[i]=='\0'||*b[i]=='\0'){
            break;
        }
        i++;
    }
    if(*a[i]=='\0'&&*b[i]=='\0'){
        *equal=0;
    }else{
        *equal=-1;
    }

}
void check_palindrome(char *reverse[],char *actual[]){
    int equal;
    compare_strings(reverse,actual,&equal);
    if(equal==0){
        printf("Yes,The number is a palindrome. %s",*actual);
    }else{
        printf("No,The number is not a palindrome. %s",*reverse);
    }
}