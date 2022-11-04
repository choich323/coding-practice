/*#include <vector>

using namespace std;

int solution(vector<int> arr) {

    int size = arr.size();
    int lcm = arr[0];
    for(int i = 1; i < size; i++){
        int x = arr[i], y = lcm;
        int gcd = 1;
        for(int j = 2; j <= (x < y ? x : y); j++){
            if(x % j == 0 && y % j == 0){
                gcd = j;
            }
        }
        lcm = (x * y) / gcd;
    }

    return lcm;
}*/