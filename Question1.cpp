// Write a function to calculate the sum and product of all the numbers in an array
#include <iostream>
using namespace std;
int SumProduct(int array[],int size){
    int sum = 0;
    int product =1;
    for(int i =0;i<size;i++){
        sum += array[i];
        product *= array[i];
    }
    cout << sum << endl;
    cout << product << endl;
}
int main(){
    int array[] = {1,2,3,4,5};
    int size = 5;
    SumProduct(array,size);
    return 0;
}