#include <iostream>
using namespace std;
#define swap(x,y,t)  ((t)=(x), (x)=(y), (y)=(t))
void perm(char *list, int i, int n);

int main(){
    char a[4]={'a','b','c'};
    perm(a,0,2);
    //cout<<a<<endl;    
    return 0;
}

void perm(char *list, int i, int n){
    cout << "perm('" << list << "', " << i << ", " << n << ")\n";
    int temp;
    if (i==n){
        for (int j=0; j<=n; j++)
            printf("%c", list[j]);
        printf("     ");
    }
    else {
        for (int j=i; j<=n; j++){
            swap(list[i],list[j],temp);
            perm(list,i+1,n);
            swap(list[i],list[j],temp);
            cout<<list<<endl;
        }
    }
}
