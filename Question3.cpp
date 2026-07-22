// Write a function to print all the unique values in array
#include <iostream>
using namespace std;
void printUnique(int array[], int size){
    for(int i = 0; i < size; i++){
        bool isUnique = true;
        for(int j = 0; j < size; j++){
            if(i != j && array[i] == array[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout << array[i] << " ";
        }
    }
    cout << endl;
}
   
int main(){
    int array [] = {1,2,3,4,4,2,3};
    int size = 7;
    printUnique(array,size);
    return 0;
}