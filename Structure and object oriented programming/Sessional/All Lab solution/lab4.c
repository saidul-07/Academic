#include<stdio.h>
int main()
{
    /* Problem-1: Write separate programs to print the following
     patterns taking number of rows as user input.(a)
    *
    * *
    * * *
    * * * *

    int n;scanf("%d",&n);//2204007
    for(int col=1; col<=n; col++){//2204007
        for(int row=1; row<=col; row++){//2204007
            printf("* ");//2204007
        }printf("\n");//2204007
    }

    (b)
    a a
    ab bb
    abc ccc
    abcd dddd
    abcde eeeee

    int n;scanf("%d",&n);//2204007
    for(int col=1; col<=n; col++){//2204007
        for(int row=1; row<=col; row++){//2204007
            printf("%c",96+row);
        }printf(" ");//2204007
        for(int row=1; row<=col; row++){//2204007
            printf("%c",96+col);
        }printf("\n");
    }

    Problem-2: Write a program that will read an integer between 20 and 99 from
    user and print it out in words. You have to use switch statement and
    repeat the whole process ‘n’ [user input] times. Note that, you can use
    no more than 2 switch statements with 10 cases per switch at most.

    int n;scanf("%d",&n);//2204007
    switch(n/10){
        case 2: printf("Twenty ");
                break;
        case 3: printf("Thirty ");
                break;
        case 4: printf("Fourty ");
                break;
        case 5: printf("Fifty ");
                break;
        case 6: printf("Sixty ");
                break;
        case 7: printf("Seventy ");
                break;
        case 8: printf("Eighty ");
                break;
        case 9: printf("Ninety ");
                break;
    }
    switch(n%10){
        case 0: printf("zero ");
                break;
        case 1: printf("one ");
                break;
        case 2: printf("two ");
                break;
        case 3: printf("three ");
                break;
        case 4: printf("four ");
                break;
        case 5: printf("five ");
                break;
        case 6: printf("six ");
                break;
        case 7: printf("seven ");
                break;
        case 8: printf("eight ");
                break;
        case 9: printf("nine ");
                break;
        default: printf("Invalid number");
    }

    Problem-3: Write a program to delete duplicate elements from an array.

    int n,k=0,j;scanf("%d",&n);//2204007
    int arr[n];
    for(int i=0; i<n; i++)scanf("%d",&arr[i]);//2204007
    for(int i=0; i<n; i++){//2204007
        for(int j=i+1; j<n; j++){//2204007
            if(arr[i]==arr[j]){//2204007
                for(int k=j; k<n-1; k++){//2204007
                    arr[k]=arr[k+1];//2204007
                }n--,j--;
            }
        }
    }
    for(int i=0; i<n; i++)printf("%d ",arr[i]);//2204007

   Problem-4: Find k-th maximum and k-th minimum from an array.

   int n,k_07;scanf("%d %d",&n,&k_07);//2204007
   int arr[n];//2204007
   for(int i=0; i<n; i++)scanf("%d",&arr[i]);//2204007
   for(int i=0; i<n; i++){//2204007
    for(int j=i+1; j<n; j++){//2204007
        if(arr[i]>arr[j]){//2204007
            int temp=arr[j];//2204007
                arr[j]=arr[i];//2204007
                arr[i]=temp;//2204007
        }
    }
   }
   printf("Maximum=%d Minimum=%d",arr[n-k_07],arr[k_07-1]);

   Problem-5: Write a program to merge two sorted arrays. */
   int n,m,i,j;scanf("%d %d",&n,&m);//2204007
   int arr1[n],arr2[m],arr[n+m];//2204007
   for(i=0; i<n; i++){//2204007
        scanf("%d",&arr1[i]);//2204007
        arr[i]=arr1[i];//2204007
   }
   for(j=0; j<m;j++,i++){//2204007
        scanf("%d",&arr2[j]);//2204007
        arr[i]=arr2[j];//2204007
   }
   for(i=0; i<n+m; i++)//2204007
        printf("%d ",arr[i]);//2204007

    return 0;
}
