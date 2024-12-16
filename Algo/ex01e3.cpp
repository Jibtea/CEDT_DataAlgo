#include <bits/stdc++.h>

using namespace std;

int check(vector<int> &v, int that, int start, int stop)
{
    //cout << "here";
    if (start == stop)
    {
        if (that < v[start])
            return -1;
        else
            return v[start];
        // return v[start];
    }
    else
    {
        int mid = (start + stop + 1) / 2;
        if (that >= v[mid])
        {
            return check(v, that, mid, stop);
        }
        else
        {
            return check(v, that, start, mid - 1);
        }
    }
}

int main()
{
    int n, k, q;
    cin >> n >> q;
    vector<int> v, tmp;
    while (n--)
    {
        cin >> k;
        v.push_back(k);
    }
    for (int i=0;i<q;i++)
    {
        cin >> k;
        int ans = check(v, k, 0, v.size() - 1);
        cout << ans << endl;
    }

    return 0;
}