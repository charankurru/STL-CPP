#include <bits/stdc++.h>
using namespace std;
priority_queue<int> pq;
priority_queue<int, vector<int>, greater<int>> pq1;

void displayMaxHeap(priority_queue<int> p)
{
    priority_queue<int> nw = p;
    while (!nw.empty())
    {
        cout << nw.top() << " ";
        nw.pop();
    }
    cout << endl;
}

void showProps()
{
    cout << "size " << pq.size() << endl;
    cout << "isEmpty" << pq.empty() << endl;
    cout << "Top Element " << pq.top() << endl;
}

void CreateMaxheap()
{
    cout << "enter number of elements:" << endl;
    int n;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pq.push(val);
    }
}
void CreateMinheap()
{
    cout << "enter number of elements:" << endl;
    int n;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pq1.push(val);
    }
}

void displayMinHeap(priority_queue<int, vector<int>, greater<int>> gq)
{
    priority_queue<int, vector<int>,
                   greater<int>>
        g = gq;
    while (!g.empty())
    {
        cout << g.top() << " ";
        g.pop();
    }
    cout << '\n';
}

int main()
{

    CreateMaxheap();
    displayMaxHeap(pq);
    showProps();
    // CreateMinheap();
    // displayMinHeap(pq1);

    return 0;
}