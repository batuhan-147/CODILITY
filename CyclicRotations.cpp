//TOTAL SCORE 100%
//TASK SCORE 100%
//CORRECTNESS 100%

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

vector<int> rotateRight(vector<int> &A) 
{
    int carry = A[0];
    for (unsigned int i = 1; i < A.size(); i++) 
    {
        int temp = A[i];
        A[i] = carry;
        carry = temp;
    }
    
    A[0] = carry;
    return A;
}

vector<int> solution(vector<int> &A, int K) 
{
    if (A.size() <= 1) return A;
    for (int i = 0; i < K; i++) {
        A = rotateRight(A);
    }
    return A;
}
