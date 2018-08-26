#include <stdio.h>
#include <string.h>
void input(int *num){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    *num=n;
}
void check_palindrome(int num,int rev){
   if (num==rev)
        printf("Yes, The number is a palindrome. %d\n",rev);
   else
        printf("No, The number is not a palindrome. %d\n",rev);
    

}
void reverse(int num,int *rev){
    int r=0;
    while(num!=0){
        r = r*10+num%10;
        num/=10;

    }
    *rev=r;
}
void main(){
    int num,rev;
    input(&num);
    reverse(num,&rev);
    check_palindrome(num,rev);

}
