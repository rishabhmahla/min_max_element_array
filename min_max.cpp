#include <iostream>

using namespace std;

int max(int arr[],int size){
    
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;
    
}

int min(int arr[],int size){
    
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min= arr[i];
        }
    }
    return min;
    
}

int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}


int main()
{
    int arr[7]= {5,6,7,9,8,1,3};
    int size = sizeof(arr)/sizeof(int);
    printarray(arr,size);
    cout<<"The min element is: "<<min(arr,size)<<endl;
    cout<<"The max element is: "<<max(arr,size);

    return 0;
}
