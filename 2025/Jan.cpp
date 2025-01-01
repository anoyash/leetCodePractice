// 1st January 2025
class Solution {
public:
    int maxScore(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int totalOnes,cntZeros,cntOnes,score,curScore;
        score = -1;
        cntZeros = cntOnes = totalOnes = 0;

        for(auto bit:s){
            if(bit=='1')
                totalOnes += 1;
        }

        for(int i = 0; i<s.size()-1;i++){
            if(s[i]=='0') cntZeros += 1;
            else cntOnes += 1;
            curScore = cntZeros + (totalOnes-cntOnes);
            score = max(score,curScore);
        }

        return score;
    }
};

// 2nd January 2025
// 3rd January 2025
// 4th January 2025
// 5th January 2025
// 6th January 2025