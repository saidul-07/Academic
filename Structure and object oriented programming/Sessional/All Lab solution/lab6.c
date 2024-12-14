#include<stdio.h>
#include<string.h>
/* 1.	Write a program in C which will take a string as input and count total
 number of alphabets, digits and special characters in a string.
int main()
{
    char str[100];scanf("%s",str);
    int alp=0,dig=0,special=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
            alp++;
        else if(str[i]>=48 && str[i]<=57)
            dig++;
        else special++;
    }
    printf("Alp:%d, dig:%d and special:%d\n",alp,dig,special);


}
 /*2.	Write down a program that will take a word as input and will determine
 whether the word is palindrome or not.
int main()
{
    char str[100];
    scanf("%s",str);
    int l=0,r,check=1;
    for(int i=0; str[i]!='\0'; i++){
        r=i;
    }
    //printf("%d",r);
    while(l<r){
        if(str[l]!=str[r]){
            check=0;
            break;
        }
        l++,r--;
    }
    if(check==1)printf("Palindrome");
    else printf("Not palindrome");


}

 /*3.	Write down a function that compares two strings and returns 1
 if they are same and returns 0 otherwise.

int check(){
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    for(int i=0; str1[i]!='\0'; i++){
        if(str1[i]!=str2[i])
            return 0;
    }
    return 1;
}
int main()
{
    char str1[100];
    int alp=0,dig=0,special=0;
    printf("%d",check());
}

/*4.	Write a C program to check whether a given substring is present in the
given string

void check(){
    char str[200],sub[200];
    gets(str);
    gets(sub);
    int l1,l2,i,j;
    l1=strlen(str);
    l2=strlen(sub);
    for(i=0; i<l1; i++){
        for(j=0; j<l2; j++){
            if(str[i+j]!=sub[j])
                break;
        }
        if(j==l2){
            printf("Found");
            return;
        }
    }printf("NOT Found");
    printf("%d %d",l1,l2);
}
int main()
{   check();
    return 0;
}
/*
 5(a).	Write a C program to take input and print elements of an array
int main()
{
    int n;scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    for(int i=0; i<n; i++)
        printf("%d ",*(arr+i));


    return 0;
}

/*5(b).	Write a C program to copy one array to another.
int main(){
    int n;scanf("%d",&n);
    int arr[n],res[n];
    for(int i=0; i<n; i++)scanf("%d",&arr[i]);
    for(int i=0; i<n; i++){
        res[i]=*(arr+i);
    }
    for(int i=0; i<n; i++)printf("%d ",res[i]);
}
/*5(c)	Write a program to search for an element in an array
int main()
{
    int n,x;scanf("%d %d",&n,&x);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    for(int i=0; i<n; i++)
       if(x==*(arr+i)){
        printf("%d",i);
        return 0;
       }
    return 0;
}
/*5(d).	Write a program to print the reverse of a string
int main()
{
    int n;scanf("%d",&n);
    char str[100],res[100];
    scanf("%s",str);
    for(int i=n-1,j=0; i>=0; i--,j++){
        res[j]=*(str+i);
    }
    //for(int i=0; i<n; i++)
    printf("%s ",res);
}

/*6.	Write a function that to swaps two numbers using pointers.
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("%d %d",*a,*b);
}
int main()
{
    int a,b;scanf("%d %d",&a,&b);
    swap(&a,&b);
    return 0;
}

/*7.	Write a C program to access two dimensional array using pointers.
int main()
{
int k=0;
int arr[3][4] ={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        printf("%d ",*(arr[0]+k++));
        }
    printf("\n");
    }
}

/*8.Create a structure called "Student" with   name, age, and total marks.
    Write a C program to input data for two students, display their information,
    and find the average of total marks.
struct student {
    char name[20];
    int age;
    double marks;
};
int main(){
    struct student list[2];
    int i;
for(i=0; i<2; i++){
        printf("----student %d information---\n",i+1);
        scanf("%s",&list[i].name);
        scanf("%d",&list[i].age);
        scanf("%lf",&list[i].marks);
}
printf("\n");
for(i=0; i<2; i++){
        printf("----student %d information----\n",i+1);
        printf("%s\n",list[i].name);
        printf("%d\n",list[i].age);
}
printf("Two student average mark=%lf"
       ,(list[0].marks+list[1].marks)/2);
return 0;
}


/*9. Create a structure named Complex to represent a complex number with real and
 imaginary parts. Write a C program to add and multiply two complex numbers.*/

struct complex{
    int real;
    int img;
};
int main()
{
    struct complex a,b,c;
    scanf("%d %d",&a.real,&a.img);
    scanf("%d %d",&b.real,&b.img);
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    if(c.img>0)printf("%d+%di",c.real,c.img);
    else printf("%d %di",c.real,c.img);
}
