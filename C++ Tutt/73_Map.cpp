#include<iostream>
#include<map>
using namespace std;


void display(const map<string,int>& mm){
    for(map<string,int>::const_iterator i = mm.begin(); i!=mm.end(); i++)
    {
        cout<<"Name: "<<i->first<<", Marks: "<<i->second<<endl;
    }
}
int main(int argc, char const *argv[])
{
    map<string,int> map_marks;
    map_marks["Aditya"] = 98;
    map_marks["Savik"] = 76;
    map_marks["Rahul"] = 32;
    map_marks["Bob"] = 45;

    map<string, int>::iterator iter;

    for(iter = map_marks.begin(); iter!=map_marks.end(); iter++){
        cout<<"Name: "<<iter->first<<", marks: "<<iter->second<<endl;
    }

/*
The 's' suffix in C++ is a string literal operator provided by the Standard Library, specifically from the std::string_literals namespace.
It allows you to create a std::string object directly from a string literal.

Without the 's' suffix, "Abhinav" would be interpreted as a C-style string (const char*).
When you want the compiler to interpret a string literal as a std::string object (instead of a C-style string), you use the 's' suffix.
*/
    map_marks.insert({"Abhinav"s,34});
    map_marks.insert({"Abhinav",94});

    display(map_marks);

    cout<<"Size: "<<map_marks.size()<<endl;
    cout<<"Max size: "<<map_marks.max_size()<<endl;
    cout<<"Is empty: "<<map_marks.empty()<<endl;


    return 0;
}
