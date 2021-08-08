//TOTAL SCORE 100%
//TASK SCORE 100%
//CORRECTNESS 100%
//PERFORMANCE 100%

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

int solution(int X, int Y, int D)
{
    if(Y <= X)
        return 0;

	int distance = Y - X;
	int result = distance / D;

	if ((distance % D) != 0) 
        return result + 1;
	return result;
}
