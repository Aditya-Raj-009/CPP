#ifndef PATTERN_H
#define PATTERN_H

#include<iostream>
#include<fstream>
using namespace std;

class Pattern{
    private:
    ofstream print;

    public:
    string triangle(int size){
        string pattern = "";
    for(int i = 0; i<size; i++)
    {
        for(int s = 0; s<size-i; s++){

             pattern+=" ";
        }
        for(int j = 0; j<i+1; j++){
             pattern+="* ";
        }
         pattern+="\n";

    }
    return pattern;
    }

    string diamond(int size){
    string pattern = triangle(size);
    for(int i = 1; i<size; i++)
    {
        for(int s = 0; s<i+1; s++){

            pattern+=" ";
        }
        for(int j = 0; j<size-i; j++){
            pattern+="* ";
        }

        pattern+="\n";

    }
    return pattern;
    
    }
    string xmasTree(int size){
        string pattern = triangle(size);
        for(int i = 0; i<size/2-2; i++){
            for(int s = 0; s<size-2; s++){
                pattern+=" ";
            }
            pattern+="| |\n";
        }
       
        return pattern;

    }

    void printOnFile(string fileName, string pattern){
    print.open(fileName);
    print<<pattern<<endl;
    }
};

#endif