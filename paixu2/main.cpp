#include <iostream>
#define Max 10
using namespace std;
int main()
{
    int *p=new int;
    int i;
    for(i=0;i<Max;i++){
        cin>>*(p+i);
    }
    int t=0;
    for(i=0;i<Max-1;i++){
        for(int j=0;j<Max-1;j++){
            if(*(p+j)>*(p+j+1)){
                t=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;
            }
        }
    }
    for(i=0;i<Max;i++){
        if(i==0){
            cout<<p[i];
        }
        else
            cout<<" "<<p[i];
    }
    return 0;
}


