#include<iostream>
#include<fstream>

using namespace std;

/*
Read operation:
ifstream in("file.txt")
strint st;
in>>st; (just like cin>>)

Write operation:

ofstream out("file.txt");

string st = "Aditya";

out<<st; (just like cout<<)
*/



int main()
{
    ofstream myFileInput("60_sampleFile.txt");

    cout<<"enter your text: "<<endl;

    string output;

    getline(cin,output);

    // writing in file:

    myFileInput<<output;

    myFileInput.close();

    
    // reading file:
    ifstream myFileOutput("60_sampleFile.txt");
    string content;

    getline(myFileOutput,content);
    cout<<"The content of this file is "<<endl<<content<<endl;

    myFileOutput.close();


    return 0;
}