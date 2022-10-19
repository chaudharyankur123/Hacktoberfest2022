#include<bits/stdc++.h>
using namespace std;
int findKthlargestreturn(int arr[], int k,int n) {
   priority_queue<int,vector<int>,greater<int>>minheap; 
        for(int i=0;i<n;i++){
            minheap.push(arr[i]);
            if(minheap.size()>k)
                {
                    minheap.pop();
                }
        }
        
        while(minheap.size()>0){
            cout<<minheap.top()<<" ";
            minheap.pop();
        }
        return minheap.top();
        }

int main(){
    
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<findKthlargestreturn(arr,k,n)<<endl;
    return 0;
}
