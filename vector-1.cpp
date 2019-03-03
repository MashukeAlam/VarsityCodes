#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> g;
    vector<int> :: iterator i;

    g.assign(5, 6);
    g.push_back(10);
    g.push_back(20);
    g.push_back(30);
    g.push_back(40);



    cout << "Size : " << g.size();
    cout << "\nCapacity : " << g.capacity();
    cout << "\nMax_Size : " << g.max_size() << "\n";


    for(i = g.begin(); i < g.end(); i++)
        cout << *i << " |";
}
