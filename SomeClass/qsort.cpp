#include<iostream>
class q{
private:
    int *arr;
    int len;
public:
    build(int ar[],int indx){
        arr=ar;
        len=indx;
    }
    void quicksort(int a,int b);
    int parti(int ind1,int ind2);
    void swa(int ind1,int ind2);
    void print();
};
void q::quicksort(int be,int fi){
    if(be<fi){
        const int ind = parti(be,fi);
        //std::cout<<ind<<" "<<be<<" "<<fi<<"\n";
        quicksort(be,ind-1);
        quicksort(ind+1,fi);
    }
};
int q::parti(int start,int fin){
    int initP=start;
    int initV=arr[fin];
    for(int i=start;i<fin;i++){
        if(arr[i]<initV){
            swa(initP,i);
            if(i!=initP){
                std::cout<<"Process... ";
                print();
            }
            initP++;

        }
    }
    swa(fin,initP);
    if(fin!=initP){
        std::cout<<"Process... ";
        print();
    }
    return initP;
};
void q::swa(int a, int b){
    int tem=arr[a];
    arr[a]=arr[b];
    arr[b]=tem;
};
void q::print(){
    for(int i=0;i<len;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}
int main(){
    int n;
    std::cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        std::cin>>ar[i];
    }
    q tem;
    tem.build(ar,n);
    tem.quicksort(0,n-1);
    for(auto i:ar){
        std::cout<<i<<" ";
    }
}
