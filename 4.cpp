#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int n, resp;
 
    scanf("%lld",&n);
 
    if (n == 1){
        resp = 1;
    } else if (n == 0){
        resp = 0;
    }
    else {
        while (true){
            if (n % 2 != 0){
                resp = n;
                break;        
            } 
            else{
              n = n / 2; 
            }
        }
    }
    
 
    printf("%lld \n", resp);
}