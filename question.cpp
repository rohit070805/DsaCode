#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool isPossible(vector<int>& arr, int k, int mid) {
    int subarray_count = 1; 
    int current_sum = 0;
    int high = accumulate(arr.begin(), arr.end(), 0); 

    for (int num : arr) {
        if (current_sum + num > high -mid) {
            
            subarray_count++;
            current_sum = num;

            if (subarray_count > k)
                return false;
        } else {
            current_sum += num;
        }
    }

    return true;
}

// Function to find the maximum of the minimum sum possible
int maximizeMinSum(vector<int>& arr, int k) {
    int low = *max_element(arr.begin(), arr.end()); 
    int high = accumulate(arr.begin(), arr.end(), 0); 
    int answer = low;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isPossible(arr, k, mid)) {
            answer = mid; 
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return answer;
}

int main() {
    vector<int> arr = {4, 3,5, 6, 2};
    int k = 2;

    cout << "The maximum of the minimum sum of subarrays is: " 
         << maximizeMinSum(arr, k) << endl;

    return 0;
}

