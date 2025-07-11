class Solution {
public:

    vector<int> constructArray(int n, int k) {
        vector<int> construct(n);
        int K=k;

        construct[K]=k+1;

        for(int i=K-1;i>=0;i--){
            //decrease
            construct[i]=construct[i+1]-k;

            k--;i--;
            //increase
            if(i>=0){ 
                construct[i]=construct[i+1]+k;
                k--;
            }
        }

        for(int i=K+1;i<n;i++){
            construct[i]=i+1;
        }

        return construct;
        
    }
};