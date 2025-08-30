#include<bits/stdc++.h>
using namespace std;
void explainpair()
{
    pair<int ,int > p1={1,3};
    cout<<p1.first <<" "<< p1.second;
    cout<<endl;

    pair<int,pair<int,int>>p2={11,{20,30}};
    cout<< p2.first<< " "<<p2.second.second<<" "<<p2.second.first;
    cout<<endl;
    
    pair<int ,int>arr[]={{12,32} ,{43,44},{65,76}};
    cout<<arr[1].second;

}
int main()
{
    explainpair();
    return 0;
}