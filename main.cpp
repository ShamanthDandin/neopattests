#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            even_sum += weights[i];
        } else {
            odd_sum += weights[i];
        }
    }

   
    int possible_ways = 0;
    int curr_even_sum = 0, curr_odd_sum = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            even_sum -= weights[i];
        } else {
            odd_sum -= weights[i];
        }

        if (curr_even_sum + odd_sum == curr_odd_sum + even_sum) {
            possible_ways++;
        }

        if (i % 2 == 0) {
            curr_even_sum += weights[i];
        } else {
            curr_odd_sum += weights[i];
        }
    }

    cout << possible_ways << endl;

    return 0;
}
....
    
def required_barbers(n, arrival, leaving):
    arrival.sort()
    leaving.sort()

    barbers = 0
    max_barbers = 0
    i, j = 0, 0

    # Sweep line algorithm
    while i < n:
        if arrival[i] < leaving[j]:
            barbers += 1
            max_barbers = max(max_barbers, barbers)
            i += 1
        else:
            barbers -= 1
            j += 1

    return max_barbers

n = int(input().strip())
arrival = list(map(int, input().strip().split()))
leaving = list(map(int, input().strip().split()))

print(required_barbers(n, arrival, leaving))
.....
    
import java.util.Scanner;

class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        int n = sc.nextInt();
        sc.nextLine(); 
        
        for (int i = 0; i < n; i++) {
            System.out.println(sc.nextLine()); 
        }

        sc.close();
    }
}
