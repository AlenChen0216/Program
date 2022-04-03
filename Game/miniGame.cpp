#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
#include<string.h>
using namespace std;
int main(){
    int num;
    cout<<"How many numbers would you wanna guess?\n";
    cin>>num;
    srand(time(NULL));
    bool guess=false;
    vector<int> ans(num,0);
    for(int k=0;k<num;k++){
        int tem=rand()%9+1;
        if(!count(ans.begin(),ans.end(),tem)){
            ans[k]=tem;
        }else {
            k--;
        }
    }
    /*for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<"\n";*/
    cin.ignore();
    while(!guess){
        int b=0;
        int a=0;
        string enter;
        vector<int> line(num);
        getline(cin,enter);
        int chec=0,len=enter.size();
        for(int i=0,k=0;i<len;i++){
            if(enter[i]>='0'&&enter[i]<='9'){
                line[k]=enter[i]-'0';
                chec++;
                k++;
            }
        }
        if(enter.size()!=num&&chec!=num){
            cout<<"Renter:\n";
            cin.clear();
            continue;
        }
        for(int i=0;i<num;i++){
            if(line[i]==ans[i]){
                a++;
            }else if(count(ans.begin(),ans.end(),line[i])){
                b++;
            }
        }
        if(a==num){
            cout<<"You get the right answer.";
            return 0;
        }
        cout<<"A : "<<a<<" B : "<<b<<"\n";
        cin.clear();
    }
}
