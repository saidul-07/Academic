#include<iostream>
using namespace std;
template<class T>
double Average(T arr[],int n){
    double sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum/n;
}
int main()
{
    int n=4;
    int iarr[]={1,2,3,4};
    cout<<Average(iarr,n)<<endl;

    long larr[]={3,4,5,2};
    cout<<Average(larr,n)<<endl;

    double darr[]={2.5,3.8,8,9};
    cout<<Average(darr,n)<<endl;

    char carr[]={'b','d','f','h'};
    cout<<Average(carr,n)<<endl;
    return 0;
}
///.......OUTPUT.........///
//        2.5
//        3.5
//        5.825
//        101
