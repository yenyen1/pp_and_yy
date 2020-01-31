class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() > 0){
            auto start = s.begin();
            auto end = s.end()-1;
            while(start < end){
                std::swap(*start, *end);
                start ++;
                end --;
            }
        }
    }
};
