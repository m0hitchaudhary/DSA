#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &s,int x)
{
    s.push(x);
}

void remove(stack<int> &s)
{
    s.pop();
}

void headOf_Stack(stack<int> &s)
{
    int x=s.top();
    cout<<x<<" "<<endl; 
}

bool find(stack<int> s, int val)
{
    bool exists=false;
    while(!s.empty()){
        if(s.top() == val){
            exists = true;
            break;
        }
        s.pop();
    }
    
    if(exists==true){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        stack<int> s;
        int q;
        cin>>q;
        while(q--){
            char ch;
            cin>>ch;
            
            if(ch=='i')
            {
                int x;
                cin>>x;
                
                insert(s,x);
                
            }
            else if(ch=='r')
            {
                remove(s);
            }
            else if(ch=='h')
            {
                headOf_Stack(s);
            }
            else if(ch=='f')
            {
                int x;
                cin>>x;
                if(find(s,x))
                cout << "Yes";
                else cout << "No";
                cout << endl;
            }
            
        }
    }
    return 0;
}
