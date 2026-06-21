class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //boyer moore voting
        // needs to be n/2 occupaying eleemtn and not always the most occuring

        int res = 0 , cnt = 0 ;
        for(int i : nums)
        {
            if(cnt==0) 
                res = i ;
            cnt += ((i == res) ? 1 : -1 ) ;
        }
    
        return res ;

    }
};