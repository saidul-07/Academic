#include<iostream>
using namespace std;
int main(){
int n=4,m=3;
int datat[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>datat[i][j];
    }
}cout<<endl;
int soldgirl,solditem,totalsold=0;
for(int i=0; i<n; i++){
        soldgirl=0;
    for(int j=0; j<m; j++){
        soldgirl+=datat[i][j];
    }
    cout<<"SalesGirl #"<<i+1<<' '<<soldgirl<<endl;
}
for(int i=0; i<m; i++){
        solditem=0;
    for(int j=0; j<n; j++){
        solditem+=datat[j][i]; //cout<<datat[j][i]<<' ';
    }
    cout<<"SalesItem #"<<i+1<<' '<<solditem<<endl;
    totalsold+=solditem;
}
cout<<"Total Sold Item= "<<totalsold<<endl;
return 0;
}
