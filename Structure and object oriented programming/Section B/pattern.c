#include<stdio.h>
#include<math.h>
int main()
{
   /*Right-angle Triangle
                    *
                    * *
                    * * *
                    * * * *
                    * * * * *

    int n;scanf("%d",&n);
    for(int col=1; col<=n; col++){
        for(int row=1; row<=col; row++){
            printf("* ");
        }
        printf("\n");
    }
// Upper Triangle
//            1 2 3 4
//              2 3 4
//                3 4
//                  4

    int n;scanf("%d",&n);
    for(int col=1; col<=n; col++){
        for(int row=1; row<=n; row++ ){
            if(row>=col)printf("%d ",row);
            else printf("  ");
        }printf("\n");
    }

                //primary and Secondary diagonal
                //1    5
                // 2  4
                //  3
                // 2  4
                //1    5
    int n;scanf("%d",&n);
    for(int col=1; col<=n; col++){
        for(int row=1; row<=n; row++){
            if(row==col || row+col==n+1)printf("%d ",row);
            else printf(" ");
        }printf("\n");
    }
                //Boundary value print
                //1 2 3 4 5
                //1       5
                //1       5
                //1       5
                //1 2 3 4 5
    int n;scanf("%d",&n);
    for(int col=1; col<=n; col++){
        for(int row=1; row<=n; row++){
            if(row==1 || col==1 || row==n || col==n)printf("%d ",row);
            else printf("  ");
        }printf("\n");
    }

            //Floid Triangle
            //1
            //2 3
            //4 5 6
            //7 8 9 10
    int n,p=1;scanf("%d",&n);
    for(int col=1; col<=n; col++){
        for(int row=1; row<=col; row++){
            printf("%d ",p);
            p++;
        }printf("\n");
    }

//    *
//    *
//* * * * *
//    *
//    *
    int n;scanf("%d",&n);
    for(int col=1; col<=n; col++){
        for(int row=1; row<=n; row++){
            if(row==(n+1)/2 || col==(n+1)/2)printf("* ");
            else printf("  ");
        }printf("\n");
    }

//         *
//       * *
//     * * *
//   * * * *
// * * * * *
    int n;scanf("%d",&n);
    for(int col=n; col>=1; col--){
        for(int row=1; row<=n; row++){
          if(row<col)printf("  ");
          else printf(" *");
        }printf("\n");
    }
//9
//8 6
//7 5 3
//4 2 0 -2
//1 -1 -3 -5 -7
    int n=5,i=9,j=8;
    for(int col=1; col<=n; col++){
        for(int row=1; row<=col; row++){
          if(col&1){
                printf("%d ",i);
                i-=2;}
          else {
                printf("%d ",j);
                j-=2;}
        }printf("\n");
    }
//   *
//  ***
// *****
//*******

    int n;scanf("%d",&n);
    for(int i=1; i<=n; i++){
            for(int j=i; j<n; j++)
                printf(" ");
            for(int k=1; k<2*i; k++)
                printf("*");
            printf("\n");
    }

    int n;scanf("%d",&n);
    for(int i=1; i<=n; i++){
            for(int j=i; j<n; j++)
                printf(" ");
                int m=n;
            for(int k=1; k<2*i; k++){
                printf("%d",m);
                m--;
                }
            printf("\n");
    }*/
    int n;scanf("%d",&n);
    int sum=0,range=pow(10,n-1)+n;
    printf("%d\n",range);
    for(int i=1; i<=range; i=i*10+1){
        printf("%d ",i);
        sum+=i;
    }

    printf("%d",sum);
    return 0;
}
