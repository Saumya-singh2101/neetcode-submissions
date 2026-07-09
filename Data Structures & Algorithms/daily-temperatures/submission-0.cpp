class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res;

for (int left = 0; left < temperatures.size(); left++) {

    int right = left + 1;

    while (right < temperatures.size()) {

        if (temperatures[right] > temperatures[left]) {
            res.push_back(right - left);
            break;
        }

        right++;
    }

    if (right == temperatures.size())
        res.push_back(0);
}
return res;
    }
};
