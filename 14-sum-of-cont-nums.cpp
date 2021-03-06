#include <iostream>
using namespace std;
/*
* (a + b) * (std::abs(a - b) + 1) / 2;
*/
int get_sum(int a, int b)
{
    if (a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    int res = 0;
    for (int i = a; i <= b; i++){
        res += i;
    }
    return res;
}