#include<stdio.h>
struct person{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2,info[4];
    person1.age=21;
    person1.salary=30000.5;
    printf("Age=%d \n", person1.age);
    printf("Salary=%.2f\n",person1.salary);

    printf("Enter age for person 2:");
    scanf("%d",&person2.age);
    person2.salary=35000.5;
    printf("Age=%d \n", person2.age);
    printf("Salary=%.2f\n",person2.salary);

    for(int i=0; i<4; i++){
        printf("Enter INformation for person %d\n",i+1);
        printf("Enter age:");
        scanf("%d",&info[i].age);
        printf("Enter salary=");
        scanf("%f",&info[i].salary);
    }
    for(int i=0; i<4; i++){
        printf(" INformation for person %d\n",i+1);
        printf("age:%d",info[i].age);
        printf("salary=%f\n",info[i].salary);
    }

    getch();
}