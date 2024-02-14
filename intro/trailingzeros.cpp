#include <iostream>
using namespace std;


/*
    Valid solution however, very slow for computing 
*/


int solve(){
    int n;
    cin >> n;
    int count =0;

    long long factorial = 1;

    for(long long i=1; i <= n; i++){
        factorial *= i;
    }

    printf("%lld\n", factorial);

    while(factorial % 10 == 0){
        factorial/=10;
        count++;
    }
    
    return count;
}


int main() {
  solve();
  return 0;
}
