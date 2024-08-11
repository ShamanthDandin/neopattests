class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>res;
        int curr = 0, oglen = 0;
        vector<string>aux;
        //stores the words for the current row
        for(string s : words)
        {
            int l = s.length();
            // checking if the word can be taken in the current row or not
            if(maxWidth-curr>l) 
            {
                curr+=s.length()+1;
                oglen+=s.length();
                aux.push_back(s);
            }
            else if(maxWidth-curr==l)
            {
                curr+=s.length();
                oglen+=s.length();
                aux.push_back(s);
            }
            else
            {
                curr = 0;
                string help = "";
                int totspaces = maxWidth-oglen; // total spaces needed to fit in the row
            
                oglen=0;
                int pos = aux.size()-1;
                //SIMULATION
                for(string x : aux)
                {
                    int spaces=0;
                    if(pos!=0)
                        spaces = (ceil)(totspaces*1.00/pos);
                    string sp="";
                    for(int i=0;i<spaces;i++)
                        sp+=" ";
                    help+=x+sp;
                    totspaces-=spaces;
                    pos--;
                }
                aux.clear();
                help=help.substr(0,maxWidth);
                int extra=maxWidth-help.length();
                for(int i=0;i<extra;i++)
                    help+=" ";
                res.push_back(help);

                aux.push_back(s);
                curr+=s.length()+1;
                oglen+=s.length();
            }
        }
        string help = "";
        for(string x : aux)
        {
            help+=x+" ";
        }
        int spaces=maxWidth-help.length();
        for(int i=0;i<spaces;i++)
            help+=" ";
        help = help.substr(0, maxWidth);
        res.push_back(help);
        return res;
    }
};
//max width


    

//charlie
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int ans=0;
for(int i=0;i<n;i++){
int cnt=0, sum1=0, sum2=0;
for（int j=0;j<n;j++)｛
if(j!=i)
if(cnt%2==0){
sum1+=arr[j];
}
else {
sum2+=arr[j];
}
cnt++;
}
}
if(sum1== sum2){
ans++;
}
}
cout<<ans<<end1;
}



//barber
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n),ans(11,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=v[i];j<=x;j++){
            ans[j]++;
        }
    }
    int maxi=0;
    for(int i=1;i<=10;i++){
        maxi=max(maxi,ans[i]);
    }
    cout<<maxi<<endl;
}
