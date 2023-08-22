#include "bits/stdc++.h"
using namespace std;

class Counter {
private:
    int count;
    int increment_val;
public:
    void setIncrementStep (int step_val) {
        increment_val = step_val;
    }
    int getCount () {
        return count;
    }
    void increment () {
        count += increment_val;
    }
    void resetCount () {
        count = 0;
    }
    bool isEven() {
        if (count % 2) return false;
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    Counter c1;
    c1.resetCount();
    cout << "Current count: " << c1.getCount() << '\n';

    c1.setIncrementStep(5);
    c1.increment();
    cout << "Current count: " << c1.getCount() << '\n';

    if (c1.isEven()) {
        cout << "The current count is even" << '\n';
    } else {
        cout << "The current count is odd" << '\n';
    }

    c1.increment();
    cout << "Current count: " << c1.getCount() << '\n';

    if (c1.isEven()) {
        cout << "The current count is even" << '\n';
    } else {
        cout << "The current count is odd" << '\n';
    }
}