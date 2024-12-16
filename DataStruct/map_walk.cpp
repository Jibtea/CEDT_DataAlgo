// CPP program
#include <iostream>
#include <vector>
using namespace std;
int r, c;
void f(string s, vector<vector<int>> &vec, int wr, int wc)
{
    vec[wr][wc]=1;
    if(wr==r-1&&wc==c-1){
        cout<<s<<endl;
    }
    else{
        if(wc+1<c&&vec[wr][wc+1]!=1){
            s+="A";
            f(s,vec,wr,wc+1);
            s.pop_back();
            vec[wr][wc+1]=0;
        }
        if(wr+1<r&&vec[wr+1][wc]!=1){
            s+="B";
            f(s,vec,wr+1,wc);
            s.pop_back();
            vec[wr+1][wc]=0;
        }
        if(wr-1>-1&&vec[wr-1][wc]!=1){
            s+="C";
            f(s,vec,wr-1,wc);
            s.pop_back();
            vec[wr-1][wc]=0;
        }
    }
}

int main()
{
    cin >> r >> c;
    int nn, arr[r][c];
    string s;
    vector<vector<int>> vec(r, vector<int>(c));
   // vector<vector<bool>> v_used(r, vector<bool>(c, false));
   //vector<char> s;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> nn;
            // arr[i][j]=nn;
            vec[i][j] = nn;
        }
    }

    f("", vec, 0, 0);
    cout<<"DONE";

    return 0;
}
