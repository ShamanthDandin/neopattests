//sorted int array
import java.util.*;

class Solution{
 public static void main(String[] args){
     Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
int[] arr = new int[n];
for(int i = 0;i < n;i++){
arr[i] = sc.nextInt();
}
int target = sc.nextInt();
int idx = Arrays.binarySearch(arr,target);
if(idx>=0){
System.out.println("Element"+target+"found at index"+idx);
} 
else{
System.out.println("Element"+target+"not found in the array");
}
}
}
//sorted int array


//price
import java.util.*;
class Solution{
public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
int n = sc.nextInt();
int[] arr = new int[n];
for(int i = 0;i<n;i++){
arr[i] = sc.nextInt();
}
for(int i = 0; i < n-1;i++){
int ptr = i+1;
while(ptr != n){
if(arr[ptr]<arr[i]) break;
ptr++;
}
if(ptr!=n)
{
arr[i]-=arr[ptr];
}
}
for(int i = 0; i<n;i++){
System.out.print(arr[i]+" ");
}
}
}

//Election
#include<stdio.h>
#define MAX 100
int main(){
    int n;
    scanf("%d",&n);
int arr[n];
int count[MAX] = {0};
for(int i = 0;i< n;i++){
scanf("%d",&arr[i]);
count[arr[i]]++;
}
int found = 0;
for(int i = 0;i < MAX; i++){
if(count[i] > n-2){
found = i;
break;
}
}
if(!found){
printf("No majority candidate found.")
    }else{
printf("%d",found);
}
}
