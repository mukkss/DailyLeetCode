class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int first  = 0;
        int last = 0;
        for( int n : derived){
            if (n){
                last = ~last;
            }
        }
        return first == last;
    }
};
