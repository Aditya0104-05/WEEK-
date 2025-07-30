#include<iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string rev=s;
    int n=s.size();
    for(int i=0;i<n;i++){
        rev[i]=s[n-i-1];
    }
    cout<<rev;
    return 0;
}


