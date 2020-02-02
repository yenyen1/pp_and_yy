class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        set<pair<string, string>> set_pair_s;
        for(auto &s:A){
            string odd = "";
            string even = "";
            for(auto it = s.begin(); it!= s.end();){
                odd += *it;
                ++it;
                if(it!= s.end()){
                    even += *it;
                    ++it;
                }
            }
            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());
            set_pair_s.insert(make_pair(odd, even));
        }
        return set_pair_s.size();
    }
};
