#include<stdio.h>
/* 1 number
void patterna(int *n){      ///2204007
    for(int i=*n; i>=1; i--){///2204007
        for(int j=1; j<2*i; j++)///2204007
            printf("%d",i);///2204007
        printf("\n");///2204007
    }printf("\n");
}
void patternb(int *n){///2204007
    for(int i=*n; i>=1; i--){///2204007
        for(int j=i*2-1; j>=1; j--)///2204007
            printf("%d",j);///2204007
        printf("\n");///2204007
    }printf("\n");
}
void patternc(int *n){///2204007
    for(int i=1; i<=*n+1; i+=2){///2204007
        for(int j=i; j<=*n+1; j++)///2204007
            printf("* ");///2204007
        printf("\n");///2204007
    }
   for(int i=1; i<=*n/2; i++){///2204007
        for(int j=1; j<=2*i+1; j++)///2204007
            printf("* ");///2204007
        printf("\n");///2204007
    }
}
int main()
{   int n_07;scanf("%d",&n_07);
    patterna(&n_07);
    patternb(&n_07);
    patternc(&n_07);
    return 0;
}

// 2 number
int fact(int n///2204007
    if(n<=1) return n;///2204007
    else return n*fact(n-1);///2204007
}
int main(){///2204007
    int n_07;scanf("%d",&n_07);///2204007
    printf("%d",fact(n_07));///2204007
}

//3 number
void primefact(int n){///2204007
    for(int i=2; i*i<=n; i++){///2204007
        if(n%i==0){///2204007
            while(n%i==0){///2204007
                n/=i;///2204007
                printf("%d ",i);///2204007
            }
        }
    }if(n>1)printf("%d",n);///2204007
}
int main()
{
    int n_07;scanf("%d",&n_07);///2204007
    primefact(n_07);///2204007
}

//4 number
int fibo(int n){///2204007
    if(n<=1)return n;///2204007
    else return fibo(n-1)+fibo(n-2);///2204007
}
int main(){///2204007
    int n_07;scanf("%d",&n_07);///2204007
    for(int i=0; i<n_07; i++){///2204007
        printf("%d ",fibo(i));///2204007
    }
}


//5 number
void binary(int n){///2204007
    if(n==0)return;///2204007
    else{
        int r=n%2;///2204007
         binary(n/2);///2204007
    printf("%d",r);///2204007
    }
}
int main()
{   int n_07;scanf("%d",&n_07);///2204007
    binary(n_07);///2204007
    return 0;
}

*/


