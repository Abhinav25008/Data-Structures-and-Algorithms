// Write a function to reverse the vector
#include <iostream>
#include <vector>
using namespace std;
int Reverse(vector <int>& vec ){
    int start = 0;
    int end = vec.size() - 1 ;
    while(start<end){
        swap(vec.at(start),vec.at(end)); 
        start ++;
        end --;
    }
}
int main(){
    vector <int> vec = {1,2,3,4,5};
    Reverse(vec);
    for(int i : vec){
        cout << i << endl;
    }
    return 0;
}