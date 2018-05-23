#include <vector>
#include <iostream>

using namespace std;


int main(){
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    int hl,maxh=0;
    cin >> word;
    for(int i=0;i<word.length();++i)
    {
        hl = h[word[i]-'a'];
        if(hl>maxh)
            maxh=hl;
    }
    cout<<maxh*word.length()<<endl;
    return 0;
}
