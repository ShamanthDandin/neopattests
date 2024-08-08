def num_ways(m,b,X):
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
    publis static void main(String[] args){
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