//
//  main.cpp
//  seeblusblus
//
//  Created by Spencer Klinge on 3/31/15.
//  Copyright (c) 2015 Spencer Klinge. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int sub (int a, int b)
{
    int res;
    res=a-b;
    return res;
    
}



void Coolprinter(void)
{
        cout << "."<<'\n';
        cout << " ."<<'\n';
        cout << "  ."<<'\n';
        cout << "   ."<<'\n';
        cout << "    ."<<'\n';
        cout << "     ."<<'\n';
        cout << "      ."<<'\n';
        cout << "       ."<<'\n';
        cout << "        ."<<'\n';
        cout << "       ."<<'\n';
        cout << "      ."<<'\n';
        cout << "     ."<<'\n';
        cout << "    ."<<'\n';
        cout << "   ."<<'\n';
        cout << "  ."<<'\n';
        cout << " ."<<'\n';
    
}

void luck(){
    int lucky;
    cout << "Enter your lucky number and press return: " ;
    cin >>  lucky ;
    for (int i=1; i<=10; i++) {
        cout << i << " hello world" << endl ;
        if ( i == lucky ) {
            cout << "that was lucky!" << endl ;
        } else {
            cout << endl ;
        }
    }
}


int main()  {
    cout << "Hello, World!\n";
    cout << "result 1:" << sub (13, 4) << '\n';
    cout << "result 2:" << sub(20,4) << '\n';
    Coolprinter();
    luck();
    int p=0;
    int n=1;
    while(true)
    { cout << "enter a number, 0 to quit ";
        cin >> n;
        if (n == 0) return 0;
        p = 0;
        while( n > pow(2,p))
        {   p++;
        }
        cout << "2 raised to " << p << " (" << pow(2,p) << ") "
        << " is the first power of two greater than or equal to " << n << "\n";
    }
}


    

    


