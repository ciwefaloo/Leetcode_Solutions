class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int answer=0;
        for(int i=0;i<J.length();i++){
            char symbol=J[i];
            for(int j=0;j<S.length();j++){
                if(symbol==S[j]){
                    answer++;
                }
            }
        }
        return answer;
    }
};
