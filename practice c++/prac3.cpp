#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

struct comparator{
    bool operator()(const int& a1, const int& a2){
        return a1>a2;
    }
};
int main(int argc, char const *argv[])
{
    list<int> ls;
    ls.push_back(45);
    ls.push_back(23);
    ls.push_back(74);
    ls.push_back(13);
    ls.push_back(57);

    reverse(ls.begin(),ls.end());
    ls.sort(comparator());
    for(int a: ls){
        cout<<a<<" ";
    }
    cout<<endl;

    return 0;
}
