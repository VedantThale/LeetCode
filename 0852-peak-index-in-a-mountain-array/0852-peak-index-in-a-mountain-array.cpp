class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0 ,end=arr.size()-1,mid;
        while(start<=end)
        {
            mid=end+(start-end)/2;

            //Peak Value
            if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return mid;

            // Move Right Side
            else if(arr[mid]>arr[mid-1])
            start=mid+1;
            
            // Move Left Side
            else
            end=mid-1;
        }
        return -1;
        
    }
};
