#include<stdio.h>
int main(){
    int m; scanf("%d",&m);
    int first=0,second=1,fibo;
    printf("%d ",second);
    for(int i=1; i<m; i++){
        fibo=first+second;
        first=second;
        second=fibo;
        printf("%d ",fibo);
    }
}
