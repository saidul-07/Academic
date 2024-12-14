    #include<stdio.h>
    int main(){
    /*problem-1:Write down a program that will take a number as input and
    will print its absolute value without using any library function. The
    absolute value of a number is the magnitude of itignoring its sign.
    You can only use Ternary operator to solve this problem
    int x_07;scanf("%d",&x_07);//2204007
    int a=(x_07<0)? -x_07:x_07;//2204007
    printf("%d",a);//2204007

    /*problem-2:Write down a program that will take an integer as input and print YES
    if the number is divisible by 5 but not divisible by 7 and print NO otherwise.
    int x;scanf("%d",&x);//2204007
    if(x%5==0 && x%7!=0)//2204007
        printf("YES");//2204007
    else printf("NO");//2204007

    problem-3: Given a 3-digit number as input by the user find and print its minimum
    digit. For example if the user input is 361 the output is 1.
    int x,a,b,c;scanf("%d",&x);//2204007
    a=x%10;x/=10;//2204007
    b=x%10;//2204007
    c=x/10;//2204007
    int mini_07=(a<b && a<c)? a:(b<c && b<a)? b:c;//2204007
    printf("%d",mini_07);//2204007

    problem-4: Write a program that takes an arithmetic operator ('+', '-', '*' or '/')
    and two operands as input and perform the corresponding arithmetic operation on the
    operands. You must use
    switch-case to solve the problem.
    char ch;int a,b,result;//2204007
    scanf("%c %d %d",&ch,&a,&b);//2204007
    switch(ch){
        case'+': printf("%d",a+b);//2204007
                    break;
        case'-': printf("%d",a-b);//2204007
                    break;
        case'*': printf("%d",a*b);//2204007
                    break;
        case'/': printf("%d",a/b);//2204007
                    break;
        default: printf("Invalid char");//2204007
    }/*
    problem-5: The marks to grade mapping in a certain university is as follows:
    A : 80-100% B : 70-79%
    C : 60-69% D : 50-59%
    F : 0-50%
    char ch_07;scanf("%c",&ch_07);
    switch(ch_07){
        case'A': printf("80-100%%");//2204007
                    break;
        case'B': printf("70-79%%");//2204007
                    break;
        case'C': printf("60-69%%");//2204007
                    break;
        case'D': printf("50-59%%");//2204007
                    break;
        case'F': printf("0-49%%");//2204007
                    break;
        default: printf("Invalid char");//2204007
    }
    problem-6: Electricity bill at a certain power distribution
    company is computed as follows:
    First 50 units: BDT 4 per unit
    Next 30 units: BDT 3 per unit
    Next 20 units: BDT 2 per unit
    Next any units: BDT 1 per unit
    float unit,res;scanf("%f",&unit);//2204007
    if(unit<=50)res=unit*4;//2204007
    else if(unit<=80)res=50*4+30*3+(unit-80)*2;//2204007
    else  res=50*4+30*3+20*2+(unit-100)*1;//2204007
    printf("BDT %.1f only",res);//2204007 */


    return 0;
    }
