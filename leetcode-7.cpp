#include <iostream>
using namespace std;

int reverse(int x) {
    int n = 0;
    while(x != 0){
        n *= 10;
        n += x%10;
        x /= 10;
    }
    return n;
}
int main() {
    int n;
    cin >> n;
    int j = reverse(n);
    cout << j;
    
}