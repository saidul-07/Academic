#include <stdio.h>
int main() {
    /*problem-1: Write a program to print the following series
     up to n terms where n is a user input.
    (1) + (1+2) +(1+2+3) + (1+2+3+4) + (1+2+3+4+5) + ………..

    int n;scanf("%d",&n);//2204007
    for(int i=1; i<=n; i++){//2204007
      printf("%c",'(');//2204007
    for(int j=1; j<=i; j++){//2204007
        printf("%d",j);//2204007
        if(i!=j)printf("%c",'+');//2204007
    }
    printf("%c",')');//2204007
      if(i!=n)printf("%c",'+');//2204007
   }

    problem-2: Write a program to print all the prime
    numbers between two given integers using ‘for’ and
    ‘while’ as outer and inner loop respectively.

    int a,b;scanf("%d %d",&a,&b);//2204007
    int check;//2204007
    if(a==1)a=2;//2204007
    for(int i=a; i<=b; i++){//2204007
        check=1;//2204007
        int j=2;//2204007
        while(j*j<=i){//2204007
            if(i%j==0)check=0;j++;//2204007
        }
        if(check)printf("%d ",i);//2204007
    }

    problem-3: Write a program to find the maximum,minimum
    and average from a list of floating-point numbers.

    int n;scanf("%d",&n);//2204007
    float arr[n],sum=0,maxi=0,mini=100000;//2204007
    for(int i=0; i<n; i++){//2204007
        scanf("%f",&arr[i]);//2204007
        sum+=arr[i];//2204007
        if(maxi<=arr[i])maxi=arr[i];//2204007
        if(mini>=arr[i])mini=arr[i];//2204007
    }
    printf("Maximum:%.2f Minimum:%.2f and Avg:%.2f",maxi,mini,sum/n);


    problem-4: Write a program to make a list of integers taking
    input from user.Then insert a value in that list at a desired
    location (not index) which will be user input as well.

    int n,loc,value;//2204007
    scanf("%d",&n);//2204007
    int arr[n+1];//2204007
    for(int i=0; i<n; i++)scanf("%d",&arr[i]);//2204007
    scanf("%d %d",&loc,&value);//2204007
    for(int i=n-1; i>=loc-1; i--){//2204007
        if(i==loc-1){//2204007
                arr[i+1]=arr[i];//2204007
                arr[i]=value;//2204007
                break;}//2204007
        arr[i+1]=arr[i];//2204007
    }
     for(int i=0; i<n+1; i++)printf("%d ",arr[i]);//2204007
     */





    return 0;
}
