//Maximum subarray problem 

//Brutre force approach
//TC:O(N^3)

int bruteForce(vector<int> &v){
    int ans=INT_MIN;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=v[k];
            }
            ans=max(sum,ans);
        }
    }
    return ans;
}

//Kadanes algorithm
//TC:O(N)

void kadanes(vector<int> &v){
  int sum=0,ans=INT_MIN;
  for(int i=0;i<v.size();i++){
    if(sum+v[i]<0){
      sum=0;
      continue;
    }
    sum+=v[i];
    ans=max(sum,ans);
  }
  return ans;
}
