#include <bits/stdc++.h>

using namespace std;

void reverse(vector<int> &v)
{
    for (int i = 0; i < (v.size() / 2); i++)
        swap(v[i], v[v.size()-1 - i]);
}

bool virus(vector<int> &v, int size)
{
    if (v.size() == 2)
    {
        if ((v[0] == 0) && (v[1] == 1))
            return true;
        else
            return false;
    }
    
    int mid = size / 2;
    // vector l=0-m,r=m-e;
    if (mid > 1)
    {
        vector<int> l(mid, 0), r(mid, 0);
        for (int i = 0; i < mid; i++)
        {
            l[i] = v[i];
        }
        int j = 0;
        for (int i = mid; i < v.size(); i++)
        {
            r[j] = v[i];
            j++;
        }
        // if virus l && virus r
        if (virus(l, l.size()) && virus(r, r.size()))
            return true;
        // reverse l
        reverse(l);
        // if virus l && virus r
        if (virus(l, l.size()) && virus(r, r.size()))
            return true;
        return false;
    }
}

int main()
{
    int n, k, q;
    cin >> n >> k;
    int SIZE = pow(2, k);
    
    while (n--)
    {
        vector<int> v;
        for (int i = 0; i < SIZE; i++)
        {
            cin >> q;
            v.push_back(q);
        }
        (virus(v, SIZE)) ? cout << "yes"<<endl : cout << "no"<<endl;
    }

    return 0;
}