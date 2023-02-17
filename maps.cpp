#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> marksmap;
   
    marksmap["Amol"]=98;
     marksmap["Ashish"]=99;
    marksmap["Pavan"]=96;
    marksmap.insert({{"amit",99},{"vikas",100}});
    map<string,int>::iterator iter;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}
