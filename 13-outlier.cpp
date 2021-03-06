#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int FindOutlier(std::vector<int> arr)
{
    int odd = 0;
    int even = 0;
    int checkFor = 0; // 0 for even
    for (int i = 0; i < 3; i++){
        if (abs(arr[i]) % 2){
            odd++;
        }
        else{
            even++;
        }
    }
    if (odd < even){
        checkFor = 1; // 1 for even
    }
    for (auto item:arr){
        if (abs(item) % 2 == checkFor){
            return item;
        }
    }
    return 0;
}
