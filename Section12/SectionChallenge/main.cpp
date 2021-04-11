#include <iostream>

using namespace std;

void print(const int *const arr, size_t t);
int* apply_all(const int *const arr1, size_t t1, const int *const arr2, size_t t2);
int main()
{
    const int arr1[]{1,2,3,4,5};
    const int arr2[]{20,30,40};
    cout<<"Array 1:"<<endl;
    print(arr1,5);
    cout<<"Array 2: " <<endl;
    print(arr2,3);
    int* result = apply_all(arr1,5,arr2,3);
    cout<< "Result: "<<endl;
    print(result,15);
    return 0;
    delete [] result;
}
void print(const int *const arr, size_t t){
    cout<<"{ ";
    for (size_t i{0}; i<t;++i)
        cout<<arr[i]<<" ";
    cout <<" }"<<endl;
}
int* apply_all(const int *const arr1, size_t t1, const int*const arr2, size_t t2){
    int*arr_ptr{nullptr};
    arr_ptr = new int[t1*t2];
    size_t t3{0};
    for(size_t i{0}; i<t2;++i){
        for (size_t j{0}; j<t1;++j){
            arr_ptr[t3] = arr2[i]*arr1[j];
            t3=t3+1;
        }
    }
    return arr_ptr;
}