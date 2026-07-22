// Write a function to swap the max and min numbers in an array
#include <iostream>
using namespace std;
void swapminmax(int array [],int size){
    int indexl = 0;
    int indexs = 0;
    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    for(int i =0;i<size;i++){
        smallest = min(smallest,array[i]);  
        largest = max(largest,array[i]);
    }
    for(int i =0 ; i < size ; i++){
        if (array[i]==smallest){
           indexs = i;
        }
        if (array[i]==largest){
           indexl = i;
        }
        swap(array[indexl],array[indexs]);
    }
}
int main(){
    int array [] = {1,2,3,4,5};
    int size = 5;
    swapminmax(array,size);
    for(int i =0;i<size;i++){
        cout << array[i] << endl;
    }
    return 0;
}
