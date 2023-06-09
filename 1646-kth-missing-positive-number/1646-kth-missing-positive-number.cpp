class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int s = 0;
        int e = arr.size();

        while(s<e){
            int mid = (s+e)/2;

            if((arr[mid]-1-mid) >= k){
                e = mid;
            }
            else{
                s= mid+1;
            }
        }
        return e+k;
    }
};