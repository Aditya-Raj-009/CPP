#include <iostream>
#include <fstream> // classes for working with files.
using namespace std;

/* The useful classes for working with files in c++ are:

1) fsteambase
2) ifsteam --> derived from fstreambase
3) ofstream --> derived from fstreambase

In order to work with file in cpp:
Primarly there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class.
*/

int main()
{

    // Opening files using constructor and writing it:

    // ofstream myFile("60_sampleFile.txt");

    // myFile<<"Writing this to my file."<<endl;   // writing operation


    //  Opening files using constructor and reading files:

    ifstream myFile("60_sampleFile.txt");   

    string filedata;

    // myFile>>filedata;

    // cout<<filedata<<endl; // only till space or line.

    // to read a line:

    getline(myFile,filedata);
    cout<<filedata<<endl;

        return 0;
}