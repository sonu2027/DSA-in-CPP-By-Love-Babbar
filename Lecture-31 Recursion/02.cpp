// C++ recursive function to
// solve tower of hanoi puzzle
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod,
                  char aux_rod)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod
         << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// Driver code
int main()
{
    cout << "For n=1:" << endl;
    int N = 1;
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');

    cout << "For n=2:" << endl;
    N = 2;
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');

    cout << "For n=3:" << endl;
    N = 3;
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');

    cout << "For n=4:" << endl;
    N = 4;
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');

    cout << "For n=5:" << endl;
    N = 5;
    // A, B and C are names of rods
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}

// This is code is contributed by rathbhupendra
