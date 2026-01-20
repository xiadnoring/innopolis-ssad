#include <bits/stdc++.h>

using namespace std;

void remove_duplicates (std::vector<int> &a) {
    std::set<int> b;
    std::vector<int> c;
    for (int &i: a) {
        auto res = b.insert(i);
        if (res.second)
            c.push_back(i);
    }
    a = std::move(c);
}

void remove_duplicates (int *a, int &n) {
    std::set<int> b;
    int c[n];
    int csize = 0;
    for (int i  =0 ; i < n; i++) {
        auto res = b.insert(a[i]);
        if (res.second)
            c[csize++] = a[i];
    }
    memcpy(a, c, csize * sizeof (int));
    n = csize;
}

int main() {
    int type;
    cin >> type;

    if (type!=1&&type!=2) {
        cout<<"type can be 1 or 2\n";
        return 0;
    }

    int n;
    cin >> n;
    if (type==1) {
        vector<int> b (n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        remove_duplicates(b);
        for (int i = 0; i < b.size();i++)
            cout << b[i] << " ";
    }
    else if (type==2) {
        int a[n];
        for (int i = 0 ; i < n;i++)
            cin >> a[i];
        remove_duplicates(a, n);
        for (int i = 0; i < n;i++)
            cout << a[i] << " ";
    }
    cout <<"\n";

    return 0;
}
