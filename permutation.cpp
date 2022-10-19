vector<vector<int>> finans;

void helper(vector<int> &v,vector<int>& vis,vector<int> ans={}){
    if(ans.size()==v.size()){
        finans.push_back(ans);
        return;
    }
  //loop selecting and deselecting ele to create permutations.
    for(int i=0;i<v.size();i++){
        if(vis[i]) continue;
        ans.push_back(v[i]);
        vis[i]=1;
        helper(v,vis,ans);
        vis[i]=0;
      //backtracking.
        ans.pop_back();
    }
}

//fuction to get permutation of a vector.
vector<vector<int>> permute(vector<int>& v) {
    vector<int> vis(v.size(),0);
    helper(v,vis);
    return finans;
}
