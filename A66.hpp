//

#include <iomanip>
#include <iostream>
using namespace std;

void getInput(int& a, int& b, int& c)
{
    cout << "Enter three integers: " << endl;
    cin >> a >> b >> c;

}

// complete the function maxmin( )
void maxmin(int A, int B, int C, int& min, int& max)
{

    for (int i = 0; i < 3; i++) {
        if (i == 0)
            min = max = A;
        min = (min > A)? A : min;
        max = (max < A)? A : max;
        if (i == 1)
            min = (min > B)? B : min;
            max = (max < B)? B : max;
        if (i == 2)
            min = (min > C)? C : min;
            max = (max < C)? C : max;
    }

}

