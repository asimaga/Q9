#include <iostream>


int main(){
    int arr[] = {38,27,43,3,9,82,10};

    int size = sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

   
   for(int i=0;i<=size;i++){
    std::cout<<"\n";
    std::cout<< arr[i];
   }

    return 0;
}
