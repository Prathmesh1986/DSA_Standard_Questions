//Counting Prime numbers using seive of erasthonese
int countPrimes(int n) {
        vector<bool> isPrime(n,true);
        for(int i=2;i*i<n;i++){
            if(isPrime[i]){
                // for(int j=2*i;j<n;j+=i){
                //     isPrime[j]=false;
                // }
                for(int j=i*i;j<n;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        int cnt=0;
        for(int i=2;i<n;i++){
            if(isPrime[i]){
                cnt++;
            }    
        }
        return cnt;
  }
