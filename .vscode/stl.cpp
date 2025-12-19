#include<bits/stdc++.h>
using namespace std;
void printunorderedMap(const unordered_map<int, string>& umap) {
    for (const auto& pair : umap) {
        cout << pair.first << " : " << pair.second << endl;
    }
}
void printMap(const map<int, string>& mp) {
    for (const auto& pair : mp) {
        cout << pair.first << " : " << pair.second << endl;
    }
}
int main() {
    /*
map<int, string> mp;//keys are unique in map ,so duplicate keys will overwrite the previous value,stl map is implemented using balanced binary search tree
//stl map stores the keys in sorted order
mp[1]="abc";
mp[3]="def";
mp[4]="ghi";
mp[2]="jkl";
mp[1]="abc";
printMap(mp);

//ques1: print unique strings in lexicographical order with their frequency
map<string,int> freq; //can have pairs as keys in maps
//O(log n) for insertion,deletion,searching
int n;
cin>>n;
while(n--){
    string s;
    cin>>s;
    freq[s]++;

}
for(auto& pair : freq){
    cout<<pair.first<<" : "<<pair.second<<endl;
}
ṇṇ
//unordered maps
//unordered maps are implemented using hash tables,we cant have pairs inside unordered maps as keys but maps me use hosakta hai
unordered_map<int,string> umap;
//hash table implementation
//average case O(1) for insertion,deletion,searching
//worst case O(n) for insertion,deletion,searching
umap[1]="abc";
umap[3]="def";
umap[4]="ghi";
umap[2]="jkl";
printunorderedMap(umap); *
//sets
set<string> s;//can't have pairs as keys in sets
//sets store unique elements in sorted order
//red-black tree implementation
//O(log n) for insertion,deletion,searching
s.insert("abc");
s.insert("xyz");
s.insert("di");
auto it=s.find("def");
if(it!=s.end()){
    cout<<"Found: "<<*it<<endl;

}
s.insert("bc");  // duplicate, will not be added
s.insert("yd");
//ques 2: print unique strings in lexicographical order
int n;
cin>>n;
while(n--){
    string str;
    cin>>str;
    s.insert(str);

}
for(const auto& str : s){
    cout<<str<<endl;
}



//unordered sets
unordered_set<string> uset;//cant have pairs as keys in unordered sets
//hash table implementation
//average case O(1) for insertion,deletion,searching
//ques find if a string is present in the set or not
uset.insert("abc");
int n;
cin>>n;
while(n--){
    string str;
    cin>>str;
    uset.insert(str);}
    int q;
cin>>q;//number of queries to check presence
while(q--){
    string query;
    cin>>query;
    if(uset.find(query)!=uset.end()){
        cout<<"Present"<<endl;

    }
    else{
        cout<<"Not Present"<<endl;

    }

}*/
//nested maps
map<pair<string,string>,vector<int>> nestedMap;
//if first and second string are same then we will have same keys,if first is same then we will compare second string lexicographically
int n;
cin>>n;
while(n--){
    string first,second;
    int value;
    cin>>first>>second>>value;
    nestedMap[{first,second}].push_back(value);

}
for(const auto& entry : nestedMap){
    cout<<"Key: ("<<entry.first.first<<", "<<entry.first.second<<") Values: ";
    for(const auto& val : entry.second){
        cout<<val<<" ";
    }
    cout<<endl;

}

int k;
cin>>k;
for(int i=0;i<k;i++){
    string first,second;
    cin>>first>>second;
    auto it=nestedMap.find({first,second});
    if(it!=nestedMap.end()){
        cout<<"Values for key ("<<first<<", "<<second<<"): ";
        for(const auto& val : it->second){
            cout<<val<<" ";
        }
        cout<<endl;

    }
    else{
        cout<<"Key ("<<first<<", "<<second<<") not found."<<endl;

    }                               
}
return 0;
}
 