// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 void printPointer(int *p){
     cout << *p << endl;
     
 }
 int  update(int *p){
     *p += 1;
     //cout << *p;
     return *p;
 }
 int getSum(int *ptr,int n){
     int sum=0;
     for(int i=0;i<n;i++){
         sum+=i[ptr];
     }
     return sum;
 }
int main() {
    
    int arr [5]={1,2,3,4,5};
    int *ptr =&arr[0];
cout << getSum(arr+3,2) <<endl;
    int value =5;
    int *p =&value;
    
    printPointer(p);
    cout <<update(p);
    return 0;
}