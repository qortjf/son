#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> data;

public:
    void push(int x) {
        data.push_back(x);
    }

    void pop() {
        if (is_empty()) {
            cout << "스택이 비어있어요! \n";
        } else {
            data.pop_back();
        }
    }

    int peek() {
        if (is_empty()) {
            cout << "스택이 비어있어요! \n";
            return -1;
        }
        return data.back();
    }

    bool is_empty() {
        return data.empty();
    }
};

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    cout << s.peek() << "\n";

    s.pop();
    cout << s.peek() << "\n";

    return 0;
}
