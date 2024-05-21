#include <stdio.h>

struct student{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};//结构体类型声明，注意最后一定要加分号




int main() {
    struct student s={1001,"lele",'M',20,85.4,"Shenzhen"}; //定义及初始化
    struct student sarr[3];
    int i;
    //结构体输出必须单独取访问内部的每一个成员
    printf("%d %s %c %d %f %s\n",s.num,s.name,s.sex,s.age,s.score,s.addr);
//    scanf("%d%s %c%d%f%s",&s.num,s.name,&s.sex,&s.age,&s.score,s.addr);

    for(i=0;i<3;i++)
    {
        scanf("%d%s %c%d%f%s",&sarr[i].num,sarr[i].name,&sarr[i].sex,&sarr[i].age, &sarr[i].score,sarr[i].addr);
    }
    for(i=0;i<3;i++)
    {
        printf("%d %s %c %d %f %s\n",sarr[i].num,sarr[i].name,sarr[i].sex, sarr[i].age,sarr[i].score,sarr[i].addr);
    }
    return 0;
}

