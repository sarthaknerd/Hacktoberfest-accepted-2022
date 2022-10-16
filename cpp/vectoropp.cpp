#include<iostream>
#include<vector>

using namespace std;

int main(){

/*vector<int> b{5,4,3,2,1};

for(auto it = b.begin();it!=b.end();it++){
  cout<<(*it)<<",";
}cout<<endl;

//iterate 

for(int x : b){
  cout<<x<<",";*/

//user input
vector<int> a;
int n ;
cin>>n;

for(int i = 0 ; i<n;i++){

  int no;
  cin>>no;
  a.push_back(no);
}
for(int x : a){
  cout<<x<<",";
}

cout<<a.max_size()<<endl;

}
