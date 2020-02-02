class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        if(A.size() == 1){
            return 1;
        }else{
            set<string> tmp;
            for(auto &e:A){
                int i=0 ;
                string teven = "";
                string todd = "";
                for(auto &s:e){
                    if(i%2 == 0){
                        teven += s;
                    }else{
                        todd += s;
                    }
                    i++;
                }
                sort(teven.begin(),teven.end());
                sort(todd.begin(),todd.end());
                tmp.insert(teven+todd);
            }
            return tmp.size();
        }
    }
};
