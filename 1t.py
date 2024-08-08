def num_ways(m,n,X):
    dp = [[0]*(X+1) for _ in range(n+1)]

    dp[0][0] = 1

    for i in range(1, n+1):
        for j in range(1, X+1):
            dp[i][j] = 0
            for k in range(1, m+1):
                if j>=k:
                    dp[i][j] += dp[i-1][j-k]
    return dp[n][X]

faces, throws, target_sum = map(int,input().split())

print(num_ways(faces, throws,target_sum))
#dice


#given no of intergers
import java.util.*;
class Solution{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println(minSubset(arr,n));

    }
    static int minSubset(int[] arr, int n){
        int totalSum = Arrays.stream(arr).sum();
        boolean[] dp = new boolean[totalSum/2+1];
        dp[0] = true;
        for (int num : arr){
            for(int j = totalSum/2; j>=num; j--){
                dp[j] = dp[j] || dp[j-num];
            }
        }
        for (int j = totalSum/2; j>=0; j--){
            if(dp[j]){
                return totalSum-2*j;
            }
    
             
            
        }
        return totalSum;
    }
}



#given an array
def max_alternating_sum(arr):
    n = len(arr)
    if n == 0:
        return 0
    up = [0]*n
    down = [0]*n
    up[0] = arr[0]
    down[0] = float('-inf')
    for i in range(1,n):
        up[i] = arr[i]
        down[i] = arr[i]
        for j in range(i):
            if arr[i]>arr[j]:
                up[i] = max(up[i],down[j]+arr[i])
            elif arr[i]<arr[j]:
                down[i] = max(down[i],up[j]+arr[i])
    return max(max(up),max(down))
n = int(input())
arr = list(map(int , input().split()))
result = max_alternating_sum(arr)
print(result)
