#include<iostream>
#include<fstream>
using namespace std;

int main(){

/*
    ofstream out;
    out.open("60_sampleFile.txt");

    out<<"This is me";
    out.close();

    */

    ifstream in; 
    in.open("60_sampleFile.txt");

    string st;

    // in>>st;
    // cout<<st;

    // to read all:

    while(in.eof()==0){ // till end of file is not encounter

    getline(in,st);
    cout<<st<<endl;

    }

    in.close();

    
    return 0;
}