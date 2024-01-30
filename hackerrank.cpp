#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cctype>

using namespace std;
int main() {
    int n ;
    cin>>n;
    int grade[n];
    for(int i=0;i<n;i++){
      cin>>grade[i];  
    }
      for(int i=0;i<n;i++){
           int count=(grade[i]/5)*5;
    if(grade[i]>=38){
       if(grade[i]-count>2)
       grade[i]=count+5; 
    }
    cout<<grade[i]<<endl;
    }

    
}