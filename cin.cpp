#include<bits/stdc++.h>
using namespace std;
int data[2000001];
int main()
{
    int re=0;
    int ch;
    int n, a;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>ch;
        data[ch]++;
    }
    cin>>a;
    for (int i=0;i<=a/2;i++)
        re+=data[i]*data[a-i];
    cout<<re;
}