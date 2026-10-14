#include <iostream>
#include <queue>
#include <set>
using namespace std;

struct State
{
    int jug1, jug2;
};

int main()
{
    int jug1Capacity;
    cout<<"Enter capacity of jug 1: ";
    cin>>jug1Capacity;
    int jug2Capacity;
    cout<<"Enter capacity of jug 2: ";
    cin>>jug2Capacity;
    int target;
    cout<<"Enter target: ";
    cin>>target;

    queue<State> q;
    set<pair<int, int>> visited;

    q.push({0, 0});

    while (!q.empty())
    {
        State current = q.front();
        q.pop();

        // Skip if already visited
        if (visited.count({current.jug1, current.jug2}))
            continue;

        visited.insert({current.jug1, current.jug2});

        cout << "(" << current.jug1 << ", " << current.jug2 << ")" << endl;

        // Goal Check
        if (current.jug1 == target || current.jug2 == target)
        {
            cout << "\nTarget Achieved!" << endl;
            break;
        }

        // 1. Fill Jug 1
        q.push({jug1Capacity, current.jug2});

        // 2. Fill Jug 2
        q.push({current.jug1, jug2Capacity});

        // 3. Empty Jug 1
        q.push({0, current.jug2});

        // 4. Empty Jug 2
        q.push({current.jug1, 0});

        // 5. Pour Jug 1 -> Jug 2
        int pour = min(current.jug1, jug2Capacity - current.jug2);
        q.push({current.jug1 - pour, current.jug2 + pour});

        // 6. Pour Jug 2 -> Jug 1
        pour = min(current.jug2, jug1Capacity - current.jug1);
        q.push({current.jug1 + pour, current.jug2 - pour});
    }

    return 0;
}