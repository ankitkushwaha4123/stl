 #include<bits/stdc++.h>
 using namespace std;

 void explainVector()
 {
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;

    v.push_back({1,2});
    v.emplace_back(3,4);

    vector<int>v(5,100);

    vector<int>v(5);

    vector<int> v1(5,200);
    vector<int>v2(v1);

    vector<int>::iterator it =v.begin()
    it++;
    cout<<*(it) << " ";

    it=it+2;
    cout<<*(it)<< " ";

    vector<int>::iterator it=v.end();
    vector<int>::iterator it=v.rend();
    vector<int>::iterator it=v.rbegin();

    

    







 }
 int main()
 {
    explainVector();
    


 }