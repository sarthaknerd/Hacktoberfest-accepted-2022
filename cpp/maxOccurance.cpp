#include <iostream>

using namespace std;

int maxOccu(String s){

  // cretae array of 26 for alphabhet

  int arr[26] = {0};

  for(int i = 0; i<s.length();i++){
    char ch = s[i];
  
    int number = 0;
    number = ch -'a';
    arr[number]++;
  }


  

  //finding max occurance

  int maxi = -1;
  int ans = 0;
  for(int i = 0 ;i<n ; i++){
    if(maxi < arr[i]){
      ans = i;
      maxi = arr[i];
    }
  }
  return 'a' + ans;
}

int main(){
  
   String s = "hello";
   
   char ans = maxOccu(s);
   
   cout<<ans;

   return 0 ;
}
