#include <bits/stdc++.h>
using namespace std;
queue<int>_push(int arr[],int n);
void _pop(queue<int>s);

queue<int>_push(int arr[],int n)
{
   queue<int> q;w
   for(int i=0; i<n; i++){
       q.push(arr[i]);
   }
   return q;
}

void _pop(queue<int>q)
{
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
} 

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        queue<int>mys =_push(arr,n);
        _pop(mys);
        cout<<endl;  
    }
    return 0;
}
