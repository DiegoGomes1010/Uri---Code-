#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c,m;
    cin>>n>>c>>m;
    int space[n];
    int rareLast=c;
    for(int i=0; i<n; i++) space[i]=i+1;
    int rare[c];
    for(int i=0; i<c; i++) cin>>rare[i];
    int buy[m+1];
    buy[m]=0;
    for(int i=0; i<m; i++) cin>>buy[i];
    sort(buy,buy+m);
    int dif=1;
    for(int i=1; i<m; i++){
        if(buy[i-1]!=buy[i]) dif++;
        else continue;
    }
    int d[dif+1];
    d[dif]=0;
    int x=0;
    for(int i=1; i<m; i++){
        if(buy[i-1]!=buy[i]){
            d[x]=buy[i-1];
            x++;
        }
    }
    for(int i=0; i<c; i++){
        for(int k=0; k<dif; k++){
            if(d[k]==rare[i]){
                rareLast--;
                break;
            }
        }
    }
    cout<<rareLast<<endl;
    return 0;
}
