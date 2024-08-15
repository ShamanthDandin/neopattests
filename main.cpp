//sophia
import java.util.*;
class Solution{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int[][] arr = new int[m][n];
        for(int i = 0;j<n;j++){
            for(int j = 0;j<n;j++){
                arr[i][j] = sc.nextInt();
            }
        }
        int sum = 0;
        int i = 0,j = 0;
        while(i<m && j<n){
            sum = sum + arr[i][j];
            i++;
            j++;
        }
        System.out.println(sum);
    }
}
//sophia end

//rohit
#include <bits/stdc++.h>
using namespace std;

int main()

{
int m,n;
cin >> m >>n;
vector<vector<int>> matrix(m,vector<int>(n));
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
    cin>>matrix[i][j];
}
}
for(int i=0;i<m;i++){
if(i%2==0){
for(int j=0;j<n;j++){
cout<<matrix[i][j]<<" ";
}
} else{
for(int j=n-1;j>=0;j--){
cout<<matrix[i][j]<<" ";
        }
    }
}
return 0;
}

//sandeep
#include<iostream> 
#include<vector> 
using namespace std; 
int main() {

int n,m;

cin>>n;

vector<int> part(n);

for(int i=0;i<n;i++) {

cin>>part[i]; 
}

cin >>m;

m=m%n;

vector<int> rot(n);

for(int i=0;i<n;i++) {  
rot[(i+m)%n]=part[i];
} 

for(int i=0;i<n;i++) {
    cout<<rot[i]<<<" ";
 } 

cout<<'\n';

return 0;
}
