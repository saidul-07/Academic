#include<stdio.h>
int main(){
    /*problem-*: Print second largest of a series of natural
     numbers (at least two) given as input. STOP when the user
     enters 0. Natural numbers are 1, 2, 3, 4……
     int max=0,smax=0;//2204007
     while(1){
        int n_07;scanf("%d",&n_07);//2204007
        if(n_07==0)break;//2204007
        if(n_07>max){//2204007
            smax=max;//2204007
            max=n_07;//2204007
        }else if(n_07>smax && n_07<max){//2204007
            smax=n_07;//2204007
        }
    }printf("%d\n",smax);//2204007


    problem-1: Write a program to calculate and display the sum and
    average of first n odd natural numbers.

    int n,sum=0;scanf("%d",&n);
    for(int i=1; i<=2*n-1; i+=2){
        sum+=i;
    }
    printf("Sum =%d and Average=%.3f\n",sum,sum/(float)n);

    problem-2: Write a program to input an integer through the keyboard
    until the user chooses to quit upon the appearance of options.
    Every time a number is entered. The program should display whether
    it is greater than, less than or equal to the previous integer.
    [Assume initial integer value is 15]

    int n,init=15;//2204007
    char y='y';//2204007
    while(y=='y'){//2204007
        printf("Enter an integer: ");//2204007
        scanf("%d",&n);//2204007
        if(n>init){
            printf("It is greater than %d\n",init);//2204007
        }
        else if(n==init){
             printf("It is equal to %d\n",init);//2204007
        }else{
             printf("It is less than %d\n",init);//2204007
        }init=n;
        printf("Do you want to continue(y/n)?: ");//2204007
        scanf(" %c",&y);//2204007
    }

    problem-3: Write a program to check whether a given integer is
    palindrome or not. [121 is palindrome but 123 is not]

        int n;scanf("%d",&n);//2204007
        int sum=0,temp=n;//2204007
        while(n){//2204007
            int r=n%10;//2204007
            sum=r+sum*10;//2204007
            n/=10;//2204007
            }
        if(temp==sum)
            printf("%d is palindrom number",temp);//2204007
        else
            printf("%d isn't palindrom number",temp);//2204007

    problem-4:Write a program to find the sum of the following
    series up to n terms.
    i. x2/2! + x3/3! – x4/4! + …
    ii. 1 + (1 + 2 ) + ( 1 + 2 + 3 ) + ... + ( 1 + 2 + 3 + ... + n )
    int n,x,fact=1;//2204007
    float sum=0;//2204007
    scanf("%d %d",&n,&x);//2204007
    int p=x;//2204007
    for(int i=2; i<=n+1; i++){//2204007
        for(int j=1; j<=i; j++){//2204007
            fact*=j;//2204007
        }
         p*=x;//2204007
        if(i&1) sum+=p/(float)fact;//2204007
        else sum-=p/(float)fact;//2204007
		fact=1;//2204007
        }
    printf("%f",sum);//2204007


}     ///ii. 1 + (1 + 2 ) + ( 1 + 2 + 3 ) + ... + ( 1 + 2 + 3 + ... + n )

        int n_07,sum=0;scanf("%d",&n_07);//2204007
        for(int i=1; i<=n_07; i++){//2204007
            for(int j=1; j<=i; j++){//2204007
                sum+=j;//2204007
            }
        }printf("%d",sum);//2204007
        return 0;
}*/

    /*problem-5: Write a program to determine all prime numbers within
    the range [a ...b] where a & b are input through keyboard.

    int a,b;scanf("%d %d",&a,&b);//2204007
    int check_07;//2204007
    if(a==1)a=2;//2204007
    for(int i=a; i<=b; i++){//2204007
        check_07=1;//2204007
        for(int j=2; j*j<=i; j++){//2204007
            if(i%j==0)check_07=0;//2204007
        }
        if(check_07)printf("%d ",i);//2204007
    }
}


    //problem number 6 test case 12 24 36(gcd 12,lcm 72)
    /*problem-6: Write a program to determine the GCD(greatest
    common divisor) and LCM (least common multiple) of 3 numbers.

    int a,b,c;scanf("%d %d %d",&a,&b,&c);//2204007
    int mini=(a<b && a<c)? a:(b<a && b<c)? b:c;//2204007
    int gcd=1;//2204007
    for(int i=2; i<=mini; i++){//2204007
        if(a%i==0 && b%i==0 && c%i==0)gcd=i;//2204007
    }
    int l;//2204007
    for(l=mini; l<=a*b*c; l++){//2204007
        if(l%a==0 && l%b==0 && l%c==0)break;//2204007
    }
    printf("GCD is=%d and LCM=%d",gcd,l);//2204007
  }


    /*problem-7: Write a program to find, first using a ‘while’
    loop and then a ‘for’ loop, the sum of first n terms ( 𝑛 ൒ 1)
    of the series 2×3, 3×4, 4×5, …, (n+1)×(n+2). You need to
    verify that you get the same result in both the cases.

    int n,value=0,sum=0;);//2204007
    scanf("%d",&n););//2204007
    for(int i=2; value<(n+1)*(n+2); i++){);//2204007
        value=i*(i+1););//2204007
        sum+=value;);//2204007
    }
    printf("%d",sum););//2204007
   }


    problem-8: Write a program to print the Fibonacci series
    up to n terms where n is user input. [Fibonacci Series:
    0, 1, 1, 2, 3, 5, … ]*/
    int n,fibo,first=0,second=1;//2204007
    scanf("%d",&n);//2204007
    printf("%d %d ",first,second);//2204007
    for(int i=3; i<=n; i++){//2204007
        fibo=first+second;//2204007
        printf("%d ",fibo);//2204007
        first=second;//2204007
        second=fibo;//2204007
    }
}


