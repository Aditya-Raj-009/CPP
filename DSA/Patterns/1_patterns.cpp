#include<iostream>
using namespace std;

class pattern{

   public:
   void nForest(int n) {
	for(int i=0; i<n; i++){
		for(int j = 0; j<n; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
    
}

/*
Output: 
* * *
* * *
* * *
*/

void n_2Forest(int n) {
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

/*
Output: 
* 
* *
* * *
*/

void nTriangle(int n) {
	for(int i = 0; i<n; i++){
		for(int j =1; j<=i+1; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

/*
Output: 
1
1 2 
1 2 3

*/

void triangle(int n) {
	for(int i = 0; i<n; i++){
		for(int j = 0; j<=i; j++){
			cout<<i+1<<" ";
		}
		cout<<endl;
	}
}

/*
Output: 
1
2 2 
3 3 3
*/

void seeding(int n) {
	for(int i = 0; i<n; i++){
		for(int j = n; j>i; j--){
			cout<<"* ";
		}
		cout<<endl;
	}
}

/*
Output: 
* * *
* *
*

*/


void nNumberTriangle(int n) {
   for(int i = 0; i<n; i++){
       for(int j = 1; j<=n-i; j++){
           cout<<j<<" ";
       }
       cout<<endl;
   }
}

/*

Output: 

1 2 3
1 2
1

*/

void nStarTriangle(int n) {
    int star = 1;
    for(int i = 0; i<n; i++){
        for(int s = 0; s<n-i-1; s++){
            cout<<" ";
        }
        for(int j = 1; j<=star; j++){
            cout<<"*";
        }
        star+=2;
        cout<<endl;
    }
}

/*
Input: ‘N’ = 3

Output: 

  *
 ***
*****

*/

void n_2StarTriangle(int n) {
   
   for(int i = 0; i<n; i++){
       for(int s = 0 ; s<i; s++){
           cout<<" ";
       }
       for(int j = 0; j<2*n-(2*i+1); j++){
           cout<<"*";
           
       }
       for(int s = 0 ; s<i; s++){
           cout<<" ";
       }
       cout<<endl;
   }
}

/*
Input: ‘N’ = 3

Output: 

*****
 ***
  *
*/

void nStarDiamond(int n) {
   int star = 1;
    for(int i = 0; i<n; i++){
        for(int s = 0; s<n-i-1; s++){
            cout<<" ";
        }
        for(int j = 1; j<=star; j++){
            cout<<"*";
        }
        star+=2;
        cout<<endl;
    }
    for(int i = 0; i<n; i++){
       for(int s = 0 ; s<i; s++){
           cout<<" ";
       }
       for(int j = 0; j<2*n-(2*i+1); j++){
           cout<<"*";
           
       }
       for(int s = 0 ; s<i; s++){
           cout<<" ";
       }
       cout<<endl;
   }
}

/*

Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  *

*/

void n_3StarTriangle(int n) {
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
Input: ‘N’ = 3

Output: 

*
**
***
**
*

*/

void nBinaryTriangle(int n) {
    int b = 1;
    for(int i = 0; i<n; i++)
    {
        int c = b;
        for(int j = 0; j<=i; j++){
            cout<<c<<" ";
           c^=1;
        }
        b^=1;
        cout<<endl;
    }
}

/*
Input: ‘N’ = 3

Output: 

1
0 1
1 0 1

*/

void numberCrown(int n) {
   for(int i = 0; i<n; i++){
       for(int j = 1; j<=i+1; j++){
           cout<<j<<" ";
       }
       for(int s = i; s<n-1; s++){
           cout<<" ";
       }
       for(int j = i+1; j>=1; j--){
           cout<<j<<" ";
       }
       cout<<endl;
   }
}

/*
Input: ‘N’ = 3

Output: 

1         1
1 2     2 1
1 2 3 3 2 1

*/


void n_2NumberTriangle(int n) {
    int c = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<c++<<" ";
        }
        cout<<endl;
    }
}


/*
Input: ‘N’ = 3

Output: 

1
2 3
4 5 6

*/

void nLetterTriangle(int n) {
   for(int i = 0; i<n; i++){
       char c = 65;
       for(int j = 0; j<=i; j++){
         cout<<c++<<" ";  
       }
       cout<<endl;
   }
}

/*
Input: ‘N’ = 3

Output: 

A
A B
A B C 

*/

void n_2LetterTriangle(int n) {
    
    for(int i = 0; i<n; i++){

        char c = 65;
        for(int j = 0; j<n-i; j++){
            cout<<c++<<" ";
        }
        cout<<endl;
    }
}

/*
Input: ‘N’ = 3

Output: 

A B C
A B
A

*/

void alphaRamp(int n) {
    char c = 65;
    for(int i=0; i<n; i++){
        
        for(int j=0; j<=i; j++){
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
}

/*
Input: ‘N’ = 3

Output: 
A
B B
C C C

*/

void alphaTriangle(int n) {
   for(int i = 0; i<n; i++){
       for(char c = 65+n-1; c>=65+n-i-1; c--){
           cout<<c<<" ";
       }
       cout<<endl;
   }
}

/*

Input: ‘N’ = 3

Output: 
C
C B 
C B A

*/

};