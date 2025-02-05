#include<iostream>
#include "Patterns.h"
using namespace std;

int main()
{
    Pattern pattern;
   string p = pattern.xmasTree(20);
   pattern.printOnFile("MyPatter.txt",p);
    
    return 0;
}
 