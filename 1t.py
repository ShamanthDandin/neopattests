//charlie
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n;i++) cin >> arr[i];
    int ans = 0;
    for(int i = 0 ; i < n ; i++) {
        int cnt = 0 , sum1 = 0 , sum2 = 0;
        for(int j = 0 ; j < n; j++) {
            if(j != i) {
                if(cnt % 2 == 0) sum1 += arr[j];
             else {
                sum2 += arr[j];
             }
            cnt++;
            }
        }
        if(sum1 == sum2) ans++;
    }
    cout << ans << endl;
    return 0;
}
//charlie end



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
//barber end



//3rd first solution
//Justify
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> vs(n);
    for(int i = 0 ; i < n ; i++ ) {
        string s;
        cin >> s;
        vs[i] = s;
    }
    int maxi;
    cin >> maxi;
    vector<string> result , line ;
    int lc = 0;
    for(auto word : vs) {
        if(word.size() + line.size() + lc > maxi) {
            for(int i = 0 ;i  < maxi - lc ; i++) {
                line[i % (line.size() - 1 ? line.size() - 1 : 1)] += ' ';
            }
        
        result.push_back("");
        for(auto str : line) result.back() += str;
        line.clear();
        lc = 0;
        }
    line.push_back(word);
    lc += word.size();
    }
    
    string lastline = "";
    for(auto str : line) lastline += str + ' ';
    lastline = lastline.substr(0 , lastline.size() - 1);
    while(lastline.size() < maxi) lastline += ' ';
    result.push_back(lastline);
    
    for(int i = 0 ; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}


//3rd second solution
//max width
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>res;
        int curr = 0, oglen = 0;
        vector<string>aux;
        
        for(string s : words)
        {
            int l = s.length();
           
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
                int totspaces = maxWidth-oglen;
            
                oglen=0;
                int pos = aux.size()-1;
           
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


