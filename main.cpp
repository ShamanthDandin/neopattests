Q given a set of integer

def min_subset_sum_difference(arr):
    n = len(arr)
    total_sum = sum(arr)
    # Initialize the DP array
    dp = [[False] * (total_sum // 2 + 1) for _ in range(n + 1)]
    
    # There is always a subset with sum 0, which is the empty subset
    for i in range(n + 1):
        dp[i][0] = True
    
    # Fill the DP array
    for i in range(1, n + 1):
        for j in range(1, total_sum // 2 + 1):
            if arr[i - 1] <= j:
                dp[i][j] = dp[i - 1][j] or dp[i - 1][j - arr[i - 1]]
            else:
                dp[i][j] = dp[i - 1][j]
    
    # Find the largest j such that dp[n][j] is True
    for j in range(total_sum // 2, -1, -1):
        if dp[n][j]:
            subset1_sum = j
            break
    
    subset2_sum = total_sum - subset1_sum
    return abs(subset1_sum - subset2_sum)

# Read input
n = int(input().strip())
arr = list(map(int, input().strip().split()))

# Compute and print the result
print(min_subset_sum_difference(arr))






Q The puzzle

def egg_drop(n, k):
    # Initialize a DP table with (n+1) rows and (k+1) columns
    dp = [[0] * (k + 1) for _ in range(n + 1)]

    # If we have only one egg, we need to try all floors
    for j in range(1, k + 1):
        dp[1][j] = j

    # Fill the table for more than one egg
    for i in range(2, n + 1):
        for j in range(1, k + 1):
            dp[i][j] = float('inf')
            for x in range(1, j + 1):
                # Max of two cases: egg breaks or it doesn't break
                result = 1 + max(dp[i - 1][x - 1], dp[i][j - x])
                if result < dp[i][j]:
                    dp[i][j] = result

    return dp[n][k]

# Read input values
n, k = map(int, input().strip().split())

# Compute and print the result
print(egg_drop(n, k))






Q given a list of non negative

def min_merge_operations_to_palindrome(arr):
    n = len(arr)
    left = 0
    right = n - 1
    merge_operations = 0
    
    while left < right:
        if arr[left] == arr[right]:
            left += 1
            right -= 1
        elif arr[left] < arr[right]:
            arr[left + 1] += arr[left]
            left += 1
            merge_operations += 1
        else:
            arr[right - 1] += arr[right]
            right -= 1
            merge_operations += 1
            
    return merge_operations

# Read input
n = int(input().strip())
arr = [int(input().strip()) for _ in range(n)]

# Compute and print the result
print(min_merge_operations_to_palindrome(arr))
