#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string ,  int>umap;
    umap["Apple"] = 10;
    umap["Orange"] = 40;
    umap["kiwi"] = 30;
    for(auto it : umap){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
