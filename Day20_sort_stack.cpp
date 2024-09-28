#include <iostream>
#include <stack>

using namespace std;

void insertInSortedOrder(stack<int> &s, int element) {
    
    if (s.empty() || s.top() <= element) {
        s.push(element);
        return;
    }

    
    int topElement = s.top();
    s.pop();
    insertInSortedOrder(s, element);
    s.push(topElement);
}


void sortStack(stack<int> &s) {
   
    if (s.empty()) {
        return;
    }
    int topElement = s.top();
    s.pop();
    sortStack(s);
    insertInSortedOrder(s, topElement);
}


void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    // Example 1
    stack<int> s1;
    s1.push(3);
    s1.push(1);
    s1.push(4);
    s1.push(2);

    cout << "Original Stack: ";
    printStack(s1);

   
    sortStack(s1);

    cout << "Sorted Stack: ";
    printStack(s1);

    return 0;
}
