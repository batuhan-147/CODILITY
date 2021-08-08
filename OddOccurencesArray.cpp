TOTAL SCORE 100%
TASK SCORE 100%
CORRECTNESS 100%
PERFORMANCE 100%

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

int solution(vector<int> &A)
{
	if (A.size() == 1) return A[0];

	sort(A.begin(), A.end());

	for (size_t i = 0; i != A.size() - 1; i += 2)
	{
		if (A[i] != A[i + 1])
		{
			return A[i];
		}
	}
	return A.back();
}
