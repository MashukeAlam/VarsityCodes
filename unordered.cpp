#include<iostream>
#include<unordered_set>

using namespace std;

int main() {
    unordered_set<int> duplicate;
    int a[10] = {1, 2, 3, 2, 2, 5, 5, 5, 5, 3};

    for(int i = 0; i < 10; i++) {
        if(duplicate.find(a[i]) != duplicate.end()) cout << "Duplicate" << a[i] << endl;
        else duplicate.insert(a[i]);
    }
}
