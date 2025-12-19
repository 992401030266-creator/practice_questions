#include<bits/stdc++.h>
using namespace std;    
int main(){
  int k;
  cout<<"Enter the value of k: ";
    cin >> k;
    
    int arr[5];
    int max_len=0;
    for (auto &x : arr) cin >> x;
    for(int i=0;i<5;i++){
        
        int sum=0;
        for(int j=i;j<5;j++){
            sum=sum+arr[j];
            if(sum<=k)
            max_len=max(max_len,j-i+1);//j-i+1 is length of subarray
            else if(sum>=k) break;
            
         
            }
        }cout<<max_len;
        
    }


