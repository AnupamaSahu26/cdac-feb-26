#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int *arr = (int*) malloc(5*sizeof(int));

    cout<<"Enter 5 numbers:\n";

    for(int i=0;i<5;i++)
        cin>>arr[i];

    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";

    free(arr);

    return 0;
}

//Why constructors are not called with malloc?
// Because malloc is a C function and it only allocates memory without calling constructors.

// 2. Why new is preferred?
// new allocates memory and also calls constructors.

// 3. Difference in return types
// new returns the correct pointer type.
// malloc returns void*.

// 4. Why malloc cannot initialize complex types?
// Because it only allocates memory and does not call constructors
