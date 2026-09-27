class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high = piles[0];

        // Find maximum pile
        for(int i = 1; i < piles.size(); i++) {
            high = max(high, piles[i]);
        }

        // Binary Search
        while(low <= high) {
            
            int mid = (low + high) / 2;
            
            long long totalHours = 0;

            // Calculate total hours for speed = mid
            for(int i = 0; i < piles.size(); i++) {
                totalHours += (piles[i] + mid - 1) / mid;
            }

            if(totalHours <= h) {
                // mid is possible, try smaller speed
                high = mid - 1;
            }
            else {
                // mid is too slow
                low = mid + 1;
            }
        }

        return low;
    }
};