#include <iostream>
#include <stack>
#include <stack>

using namespace std;

void removeKthElement(stack<int> &stack1, int k)
{
    if (k <= 0 || k > stack1.size())
    {
        cout << "Invalid value of k" << endl;
        return;
    }

    stack<int> tempStack;

    for (int i = 1; i < k; ++i)
    {
        tempStack.push(stack1.top());
        stack1.pop();
    }

    stack1.pop();

    while (!tempStack.empty())
    {
        stack1.push(tempStack.top());
        tempStack.pop();
    }
}

int main()
{
    stack<int> st;

    for (int i = 1; i <= 5; ++i)
    {
        st.push(i);
    }

    cout << "Original Stack: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    for (int i = 1; i <= 5; ++i)
    {
        st.push(i);
    }

    removeKthElement(st, 3);

    cout << "Stack after removing 3rd element: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
