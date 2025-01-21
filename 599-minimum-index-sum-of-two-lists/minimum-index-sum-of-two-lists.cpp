class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string , int> mp;
        map<int , vector<string>> temp;
        vector<string> res;
        for(int i = 0; i < list1.size(); i++){
            mp[list1[i]] = i;
        }
        
        for(int j = 0; j < list2.size(); j++){
            if(mp.find(list2[j]) != mp.end()) temp[j + mp[list2[j]]].push_back(list2[j]);
        }
        
        for(auto x : temp){
            if(x.second.size() != 0){
                return x.second;
            }
        }
        return {};
    }
};