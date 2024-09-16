// reversing the words of the string
#include<bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
        string ans;
        stack<char>st;
        for(int i=s.size()-1 ; i>=0 ; i--){
            char ch = s[i];
            if(ch == ' '){

                while(!st.empty()){
                    char letter = st.top();
                    ans.push_back(letter);
                    st.pop();
                   
                }
               
            }
            else{
                if(st.empty() && ans.size() != 0){
                    ans.push_back(' ');
                }
                st.push(ch);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }

int main(){
string s = "The sky is blue";
string ans = reverseword(s);
for(int i=0 ; i<ans.size() ; i++){
  cout<<ans[i];
}
