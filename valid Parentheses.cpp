//this fucntion is used to check valid parentheses

bool validParentheses(string s){
  stack<char> st;
  
  //map to keep track of which bracket conrresponds to which one.
  map<char,char> m;
  m[']']=1;
  m['}']=2;
  m[')']=3;
  m['[']=-1;
  m['{']=-2;
  m['(']=-3;
  
  //looping though the string.
  for(auto c:s){
    //if stack is empty or c is an opening bracket push it on to the stack.
    if(st.empty() || m[c]<0){
      st.push(c);
    }
    //if the bracket on top of the stack correspomnds to c the pop them.
    else if( m[st.top()] + m[c] == 0 ){
      st.pop();
    }
    //in anyother senario push the bracket on stack.
    else{
        st.push(c);
    }
  }
  //If stack is empty then parentheses were valid.
  return st.empty();
}
