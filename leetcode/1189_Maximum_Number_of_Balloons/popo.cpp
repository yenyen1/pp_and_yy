class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> balloons{0, 0, 0, 0, 0}; 
        for(auto it = text.begin();it != text.end();++it){
            if(*it == 'b'){
                balloons[0] += 1;
            }
            else if(*it == 'a'){
                balloons[1] += 1;
            }
            else if(*it == 'l'){
                balloons[2] += 1;
            }
            else if(*it == 'o'){
                balloons[3] += 1;
            }
            else if(*it == 'n'){
                balloons[4] += 1;
            }
        }
        balloons[2] /= 2;
        balloons[3] /= 2;
        return *min_element(balloons.begin(), balloons.end());
        
    }
};
