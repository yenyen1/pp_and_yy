class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int output = min(count(text.begin(),text.end() ,'a'),count(text.begin(),text.end() ,'b') ) ; 
        int n = count(text.begin(),text.end() , 'n');
        output = min( output ,n);
        int lo = min( count(text.begin(),text.end() ,'l'),count(text.begin(),text.end() ,'o') );
        
        return min(output, lo/2); 
    }
};
