#include <iostream>
using namespace std;
int s[8],num;
void qn(int);
int main(void){
  num=1;
  for(int i=0;i<8;i++){
    s[0]=i;
    qn(1);
  }
  cout <<endl;
}
void qn(int curStep){
  if (curStep<8){
    for(int i=0;i<8;i++){   //(s[j],j) (i,curStep)
      for(int j=0;j<curStep;j++){
        if (s[j]==i) break;
        if (((s[j]-i)==(j-curStep))||((s[j]-i)==(curStep-j))) break;
        if (j==(curStep-1)) {
          s[curStep]=i;
          qn(curStep+1);
        }
      }
    }
  }else {
    if(num-81>=0){
        cout<<num<<"   ";
        for(int i=0;i<8;i++){
            cout << s[i]+1 <<" ";
        }
        cout << endl;
    }
    num++;
  }
}
