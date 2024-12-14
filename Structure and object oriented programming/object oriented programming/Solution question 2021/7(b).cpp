#include<iostream>
using namespace std;
void swaparr(int *arr1, int *arr2,int n){
   for(int i= 0; i<n; i++){
        int temp = *(arr1+i);
        *(arr1+i)=*(arr2+i);
        *(arr2+i)=temp;
   }
}
int main(){
    int n;
    int arr1[]={2,4,5,6,7}, arr2[]={1,2,3,4,5};
    n = sizeof(arr1)/sizeof(arr1[0]);

    swaparr(arr1,arr2,n);
    for(int i = 0; i<n; i++)cout<<arr1[i]<<' ';
    cout<<endl;
    for(int i = 0; i<n; i++)cout<<arr2[i]<<' ';
    cout<<endl;

    return 0;
}