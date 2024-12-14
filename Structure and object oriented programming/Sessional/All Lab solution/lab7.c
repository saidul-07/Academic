#include<stdio.h>
#include<math.h>
#include<string.h>
/*//         1 Number problem           //////
int convert(int n,int base)
{   int res=0;
    int i=0;
    while(n){
        int r=n%10;
        int sum=r*pow(base,i);
        res+=sum;//printf("%d\n",res);
        n/=10;
        i++;
    }
    printf("Covert value=%d\n",res);

    int cnt=0,t=res,m=res,sum=0;
    while(res){
        res/=10;
        cnt++;
    }
    while(m){
        int r=m%10;
        sum+=pow(r,cnt);
        m/=10;
    }//printf("%d",sum);
    if(t==sum)printf("Armstrong\n");
    else printf("NOT Armstrong\n");
}
int countdigit(int n)
{   int cnt=0;
    while(n){
        n/=10;
        cnt++;
    }
    return cnt;

}
int main()
{     printf("Enter number and base:");
    int n,m,base;scanf("%d %d",&n,&base);
    convert(n,base);
    printf("Enter a number for digit count=");
    scanf("%d",&m);
    printf("%d",countdigit(m));
    return 0;
}


//        2 Number problem /////////////
int cal(int n )
{
    if (n==1) return 1;
    else return 2*cal(n-1)+1;
}
int main()
{
    int n;scanf("%d",&n);
    printf("%d",cal(n));
}

//       3 number problem
#include<stdio.h>
#include<math.h>
int secret(int n)
{   int arr[4],i=0;
    while(n){

        int r=n%10;
        int dig=(r+7)%10;
        arr[i]=dig;i++;
        n/=10;
    }
    printf("%d%d%d%d",arr[1],arr[0],arr[3],arr[2]);
}
int main()
{
    int n;scanf("%d",&n);
    secret(n);
    return 0;
}

/*///         4 number problem      //////////
void caesar_cipher_encrypt(int key,char str[])
{
    int len=strlen(str);
    for(int i=0; i<len; i++){
        if(str[i]>=97 && str[i]<=122) str[i]=(str[i]+key-97)%26+65;
        else if(str[i]>=65 && str[i]<=90)str[i]=(str[i]+key-65)%26+65;
    }
    printf("Ciphertext: ");puts(str);
}
int main()
{   char str[100];
    int key;
    printf("Enter your Secret Message:");
    gets(str);
    printf("Enter your key value=");
    scanf("%d",&key);
    caesar_cipher_encrypt(key,str);
    return 0;
}


