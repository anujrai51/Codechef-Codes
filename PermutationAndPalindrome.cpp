#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t,i,l,j,c,sz,mid,k;
    string s;
    cin>>t;
    while(t--)
    {   vector< vector <int> > v;
        vector<int> b;
        cin>>s;
        int a[26];
        for(i=0;i<26;i++)
            {a[i]=0;
            v.push_back(b);}
        l=s.length();
        for(i=0;i<l;i++)
        {
            a[s[i]-'a']++;
            v[s[i]-'a'].push_back(i+1);
        }
       /* for(i=0;i<26;i++)
        {   sz=v[i].size();
            for(j=0;j<sz;j++)
                cout<<v[i][j]<<" ";
            if(sz)
            cout<<endl;
        }*/
    c=0;
    for(i=0;i<26;i++)
        {
            if(a[i]&1)
                c++;
        }
        if(c>1)
        {
            cout<<"-1"<<endl;
        }
        else
        { int fin[l];
            k=0;mid=-1;
          for(i=0;i<26;i++)
          {
              sz=v[i].size();
              if(sz&1)
              {
                  sz--;
                  mid=i;
              }
              for(j=0;j<sz/2;j++)
                fin[k++]=v[i][j];
          }
          if(mid!=-1)
          fin[k++]=v[mid][v[mid].size()/2];
          for(i=25;i>-1;i--)
          {
              sz=v[i].size();
              mid=(sz&1?(sz+1)/2:sz/2);
              for(j=mid;j<sz;j++)
                fin[k++]=v[i][j];
          }
          for(i=0;i<l;i++)
            cout<<fin[i]<<" ";
         cout<<endl;
        }
        }
    return 0;
}
