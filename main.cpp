//Data entered in the list
#include<bits/stdc++.h>
using namespace std;

int main(){
 int n; cin >> n;
int arr[n];
cout << "Data entered in the list:\n";
for(int i = 0;i < n;i++) cin >> arr[i], printf("node %d : %d\n",i+1,arr[i]);
int pos; cin>>pos;
if(pos > n) print("Invalid position. Try again.");
else{
cout << "After deletion the new list:\n";
int c = 1;
for(int i = 0; i < n;i++){
if(i != pos-1){
printf("node %d: %d\n",c++,arr[i]);
}
}
}
}


//Before swap
#include <bits/stdc++.h>
using namespace std;

int main(){
 int n; cin >> n;
int arr[n];
cout << "Before Swap: ";
for(int i = 0;i< n;i++) cin >> arr[i], cout<<arr[i]<<" ";

cout<<"\nAfter Swap: ";
cout<<arr[n-1]<<" ";
for(int i = 1; i < n-1;i++) cout<<arr[i]<< " ";
cout << arr[0];
}


//original linked list
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    cout<<"original linked list: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int num;cin>>num;
    for(int i=n-1;i>=0;i--) cout<<arr[i]<<" -> ";
    cout<<"NULL\n";
    cout<<"After deleting node after "<<num<<": ";
    cout<<arr[n-1]<<" -> ";
    for(int i=n-2;i>=0;i--){
        if(arr[i+1]!= num){
            cout<<arr[i]<<" -> ";
        }
    }
    cout<<"NULL";
}
