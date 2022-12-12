#include<bits/stdc++.h>
using namespace std;

int *BubbleSort(int p[], int n){
for(int j=1;j<=n;j++){
for(int i=0;i<n-1;i++){
    if(p[i]>=p[i+1]){
        swap (p[i],p[i+1]);
    }
  }

}
return p;
}

int main(){

int a[]={10,3,7,9,5,18,22};
int *h=BubbleSort(a,7);

for(int i=0;i<7;i++){
    cout<<h[i]<<" ";
}

return 0;
}
