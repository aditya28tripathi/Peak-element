class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
     
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Compare the middle element with its neighbors
        if (arr[mid] > arr[mid + 1]) {
            // If mid is greater than its right neighbor, a peak must exist on the left side
            right = mid;
        } else {
            // Otherwise, a peak must exist on the right side
            left = mid + 1;
        }
    }

    // At the end, 'left' will be the index of a peak element
    return left;
}

    
};
