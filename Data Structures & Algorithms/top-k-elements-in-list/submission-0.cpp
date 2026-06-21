class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq ;
        for(int it : nums)
            freq[it]++ ;

        vector<pair<int,int>> freq2 ;
        for(auto it : freq)
            freq2.push_back({it.second , it.first}) ;

        vector<int> ans ;
        sort(freq2.rbegin(),freq2.rend()) ;
        for(int i = 0 ; i < k ; i++) {
            ans.push_back(freq2[i].second) ;
        }
        return ans ;
    }
};
