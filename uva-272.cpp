#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    string s;
    bool mun = true;
    while(getline(cin,s))
    {
        //cout << s << endl;
        int l  =s.size();
        for(int i = 0; i<l; i++)
        {
            if(s[i] == '"')
            {
                if(mun)
                    cout << "``";

                else
                    cout <<"''";
                mun = !mun;
            }
            else
                cout << s[i];
        }
        cout <<endl;

        //cout<<l <<endl;
    }
    return 0;
}
