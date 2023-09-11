#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

map<string, int> words;

bool comp(string s1, string s2){
    if(words[s1]!=words[s2]){
        return words[s1]>words[s2];
    }
    if(s1.size()!=s2.size()){
        return s1.size()>s2.size();
    }
    return s1<s2;
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    string word;
    vector<string> s_words;

    cin>>n>>m;

    while(n--){
        cin>>word;
        if(!words[word]){
            if(word.size()>=m)
                s_words.push_back(word);
        }
        words[word]+=1;
    }

    sort(s_words.begin(),s_words.end(),comp);

    for(auto str:s_words){
        cout<<str<<'\n';
    }
}
