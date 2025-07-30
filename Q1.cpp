#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[5]={5,7,3,1,4}; int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    double avg=sum/5;
    cout<<avg;
    return 0;
}
