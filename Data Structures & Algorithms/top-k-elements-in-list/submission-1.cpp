class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
       vector<pair<int,int>>v;
       for(auto it : freq){
    v.push_back({it.second, it.first}); // {frequency, element}
}

sort(v.begin(), v.end(), greater<pair<int,int>>());

vector<int> res;

for(int i = 0; i < k; i++){
    res.push_back(v[i].second);
}
return res;

    }
};
