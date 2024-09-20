#include <bits/stdc++.h>
using namespace std;

bool valid_parenthesis(string s){
    stack<char>st;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '[' || s[i] == '{' || s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.top() == '('){
                st.pop();
            }
            else return false;
        }
        else if(s[i] == ']'){
            if(st.top() == '['){
                st.pop();
            }
            else return false;
        }
        else if(s[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }
            else return false;
        }
    }
    if(st.empty() == true) return true;
    else return false;
}

int main() {
	// your code goes here
	string s = "";
    bool result = valid_parenthesis(s);
    if(result == 1) cout<<"true";
    else cout<<"false";
    
}
