TOTAL SCORE 100%
TASK SCORE 100%
CORRECTNESS 100%



// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <algorithm>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <iterator> // for iterators
#include <vector> // for vectors
#include <type_traits>
#include <string>
using namespace std;

int solution(int N) 
{ 

    int a = 0, b = 0;
    bool c = false;

    while(N)
    {
        if(N < 0)
        {
            a = 0;
        }
        else if((N & 1) == 1)
        {
            if(b > a)
            {
                a = b;
            }
            b = 0;
            c = true;
        }
        else
        {
            if(c)
            {
                b++;
            }
            
        }
        N >>= 1;
    }
    return a;
}
