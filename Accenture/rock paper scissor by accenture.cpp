#include<iostream>
using namespace std;
int main(){
   
   string playerA;
   cin>>playerA;
   
   if(playerA== "rock"){
       cout<<"paper";
   }
   else if(playerA== "paper"){
       cout<<"scissor";
   }
   else{
       cout<<"rock";
   }
    
   return 0;
}