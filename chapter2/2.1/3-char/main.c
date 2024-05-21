#include <stdio.h>
#include <stdlib.h>  //malloc使用的头文件
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
    return 0;

}

int *a,*b,*c;

//实参  赋值给  形参
//局部变量只在离自己最近的大括号内有效