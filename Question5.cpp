// Write a program that prints the index number of the targetted element in the vector and return -1 if not found
#include <iostream>
#include <vector>
using namespace std;
int LinearSearch(vector <int> vec , int target){
    for (int i =0 ; i<vec.size();i++){
        if(target==vec.at(i)){
              return i ;
              break;
        }
    }   
    return -1;
}
int main(){
    vector <int> vec = {1,5,6,3,7};
    int target = 6;
    cout << LinearSearch(vec,target) << endl;
    return 0;
}