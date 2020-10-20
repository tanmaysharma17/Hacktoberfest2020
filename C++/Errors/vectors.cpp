#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v[1]=100;
    v.erase(0); //Erases the element at 0th position
}
