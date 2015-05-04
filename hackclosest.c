ublic static int findNearestValue(int[] arr, int value) {
    int mid;
    int low = 0;
    int high = arr.length-1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (value < arr[mid])
            high = mid - 1;
        else if (value > arr[mid])
            low = mid + 1;
        else
            return arr[mid];
    }

    int diffLow = abs(value - arr[low]);
    int diffHigh = abs(value - arr[high]);

    if (diffLow < diffHigh)
        return arr[low];
    // Else
    return arr[high];
}