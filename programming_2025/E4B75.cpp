#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,key,c;
    char ch;
    for(i=0;i<20;i++){
        printf("!@#$%%^&*()@^@\n");
    }
    system("pause");
    system("CLS");
    printf("輸入密碼:");
    scanf("%d",&key);
    if(key==2025){
    printf("密碼正確\n");
    printf("歡迎~~~~~\n");
    system("pause");
    system("CLS");
    printf("*********************\n");
    printf("*'A'---'Z':Uppercase*\n");
    printf("*'a'---'z':Lowercase*\n");
    printf("*'0'---'9':Digit    *\n");
    printf("*Otherwise:your name*\n");
    printf("*********************\n");
    printf("請輸入一字元:");
    fflush(stdin);
    scanf("%c",&ch);
    if((ch>='A')&&(ch<='Z'))
    printf("Uppercase\n");
    else if((ch>='a')&&(ch<='z'))
    printf("Lowercase\n");
    else if((ch>='0')&&(ch<='9'))
    printf("Digit\n");
    else
        printf("E4B75 郭柏麟\n");
    }
    else{
        printf("密碼錯誤");
        
    }
    
    
    
    system("pause");
    return 0;
}
