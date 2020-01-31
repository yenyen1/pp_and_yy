class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() != 0){
            vector<char>::size_type start = 0;
            vector<char>::size_type end = s.size()-1;
            while(start < end){
                swap(s[start++],s[end--]);
            }
        }
    }
};
