#include <bits/stdc++.h>
using namespace std;

int postfixevaluation(string s){
stack<int>st;
for(int i=0 ; i<s.size() ; i++){

    if(isdigit(s[i]) || (s[i] == '-' && i+1 < s.size() && isdigit(s[i+1]))) {
        int num=0;
        int sign=1;
         
        if(s[i] == '-'){
            sign=-1;
            i++;
        }
        while(i<s.size() && isdigit(s[i])){
            num=num*10+ (s[i] - '0');
            i++;
        }
        
        st.push(sign * num);
        
        
    }
    else if(s[i] == ' ') continue;
    else{
        int opt2=st.top();
        st.pop();
        int opt1=st.top();
        st.pop();
        
        switch(s[i])
        {
            case '+':
              st.push(opt1+opt2);
              break;
            case '-':
              st.push(opt1-opt2);
              break;
            case '*':
              st.push(opt1*opt2);
              break;
            case '/':
              st.push(opt1/opt2);
              break;
            case '^':
              st.push(pow(opt1,opt2));
              break;
        }
            
    }
}
return st.top();

}

int main() {
	// your code goes here
	string s="2 1 + 3 *";
    cout<<postfixevaluation(s);

}
