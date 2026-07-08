
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        vector<bool> visited(strs.size(), false);

        for (int i = 0; i < strs.size(); i++) {

            if (visited[i])
                continue;

            vector<string> group;
            group.push_back(strs[i]);
            visited[i] = true;

            string temp1 = strs[i];
            sort(temp1.begin(), temp1.end());

            for (int j = i + 1; j < strs.size(); j++) {

                if (visited[j])
                    continue;

                string temp2 = strs[j];
                sort(temp2.begin(), temp2.end());

                if (temp1 == temp2) {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            ans.push_back(group);
        }

        return ans;
    }
};
