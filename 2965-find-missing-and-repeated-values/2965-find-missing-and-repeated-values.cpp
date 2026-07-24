class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;

        unordered_set<int> m;

        int n=grid.size();

        int a,b;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(m.find(grid[i][j]) != m.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                    break;
                }

                m.insert(grid[i][j]);
            }
        }

        int total=n*n;
        long long expectedsum= 1LL * (total)*(total+1)/2;
        long long actualsum=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualsum+=grid[i][j];
            }
        }

        b=expectedsum+a-actualsum;
        ans.push_back(b);

        return ans;
    }
};