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
class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<pair<int,bool>> vowelsCnt;
        int idx = 0,prev=0;

        for(auto word : words ){
            char start = word[0];
            char end   = word[word.size()-1];

            if( 
                (start == 'a' || start == 'e' || start == 'i' || start == 'o' || start == 'u')
                && 
                (end=='a' || end == 'e' || end == 'i' || end =='o' || end == 'u')
             ) 
                vowelsCnt.push_back({prev+1,true});
             else
                vowelsCnt.push_back({prev,false});
            
            prev = vowelsCnt[idx].first;
            idx++;
        }

        for (auto query : queries){
            int left   = query[0];
            int right  = query[1];
            ans.push_back(vowelsCnt[right].first-vowelsCnt[left].first+vowelsCnt[left].second);
        }

        return ans;
    }
};


// 3rd January 2025
// 4th January 2025
// 5th January 2025
// 6th January 2025