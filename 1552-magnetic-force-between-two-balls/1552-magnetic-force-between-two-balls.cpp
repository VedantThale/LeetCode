class Solution {
public:
    int maxDistance(vector<int>& arr, int m) {
        int start=0,end=0,mid,ans;
        int n=arr.size();

        sort(arr.begin(),arr.end());
        end=arr[n-1]-arr[0];

        while(start<=end)
        {
            mid=start+(end-start)/2;
            int pos=arr[0],count=1;
            for(int i=0;i<n;i++)
            {
                if(pos+mid<=arr[i])
                {
                    count++;
                    pos=arr[i];
                }
            }
            if(count<m)
            {
                end=mid-1;
            }
            else
            {
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};