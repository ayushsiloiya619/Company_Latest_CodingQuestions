#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    
    while(n>0){
        if(n&1){
            count++;
        }
        n= n>>1;
    }
    //2 set bit's are there -> 2^0 *1 + 2^1 *1 = 3
    //Simple binary to decimal
    int ans=0;
    int power=1;
    for(int i=0;i<count;i++){
        ans+=power*1;
        power=power*2;
    }
    cout<<ans;
    return 0;
}