#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    // create strings to use in the hash table
    string key="relentless";
    string def1="continuing in";
    string def2="severe";
    string def3="uneasy";
    string def4="way";
    unordered_map <string,vector<string>> new_dictionary;
    if (new_dictionary.find(key)==new_dictionary.end()){
        cout<<"the key word is not in the dictionary";
        cout<<"instert a key-value pair \n";
        // set the value fot the key word
        new_dictionary[key]=vector<string>{def1,def2,def3,def4};
    }

    cout<<key <<": \n";
    for (string definition : new_dictionary[key]){
        cout<<definition<<"\n";
    }

}