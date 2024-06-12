#include<bits/stdc++.h>

using namespace std;

// decimal to binary :
// 1) approach 1 : divide wala
// 2) approach 2 : xor operator .

int decimalToBinary(int n){


return 0;
}
// 


int main(){

    int n;
    cin>>n;
    int ans=0, i=0;

    while (n!=0){
        int bit= n&1;
        ans = (bit *pow(10, i)) + ans;
        
        n = n >>1;
        i++;

    }

    cout << "Answer :" <<ans<<endl;

  
    return 0;
}


// 2) approach 2 : divide wala :
#include<bits/stdc++.h>

using namespace std;



// decimal to binary :

int main(){

int n;
cin>>n;
int ans=0;
int power =1;

while(n >0){
    int bit= n%2;
    ans = ans + bit*power;
    power = power*10;


    n= n/2;
}

cout << ans <<endl;


    return 0;
}
