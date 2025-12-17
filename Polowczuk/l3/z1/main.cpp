#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long ull;

ull fib_tab(int n){
    if (n<0) return 0;
    if (n<=1) return n;
vector<ull>fib(n+1);
fib[0]=0;
fib[1]=1;

for(int i=2; i<=n; ++i){
    fib[i] = fib[i-1] +fib[i-2];
}
return fib[n];
}

int main(){
    cout<<"Podaj numer wyrazu ciagu fib" <<endl;
    int n;
    cin>>n;
    cout<<"WynikF("<< n << ")(Tablica):" << fib_tab(n) << endl;
    return 0;
}
