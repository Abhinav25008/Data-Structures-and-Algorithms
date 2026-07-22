// Write a function to print the intersection of two arrays
#include <iostream>
using namespace std;
void intersection(int array1[],int array2[],int size1,int size2){
    for(int i =0 ; i<size1 ; i++){
       bool intersec = false;
        for(int j =0 ; j<size2 ; j++){
           if(i!=j && array1[i]==array2[j]){
               intersec = true;
               break;
           }
       }
       if(intersec){
         cout << array1[i] << endl;
       }
    }
    
}
int main(){                                                  
    int array1 [] = {1,2,3,4,5,6};
    int size1 = 6;
    int array2 [] = {5,6,7,8,9};
    int size2 = 5;
    intersection(array1,array2,size1,size2);
    return 0;
}