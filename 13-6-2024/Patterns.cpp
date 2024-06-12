#include<bits/stdc++.h>

using namespace std;

// pattern 1:
// * * * *
// * * * *
// * * * *


int main(){

    int n;
    cin >>n;



    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << " * " ;
        }cout <<endl;

    }

    return 0;
}




#include<bits/stdc++.h>

using namespace std;

// pattern 1:
// *
// * * 
// * * *
// * * * *


int main(){

    int n;
    cin >>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<=n-(n-i); j++){
            cout << " * ";
        }cout <<endl;
    }

    return 0;
}



#include<bits/stdc++.h>

using namespace std;

// pattern 1:
// * * * *
// * * *
// * * 
// *


int main(){

    int n;
    cin >>n;

    for(int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            cout << " *";
        }cout <<endl;
    }
    
    return 0;
}



#include<bits/stdc++.h>

using namespace std;

// Hollow recatagle pattern :
// * * * *
// *     *
// *     *
// *     *
// * * * * 


int main(){

    int row, col;
    cin >> row >> col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++ ){

            if(i==1 || i==row || j==1 || j==col){
                cout <<"*";
            }
            else{
                cout << " ";
            }
            

        } 
        cout <<endl;
    }


    return 0;
}


#include<bits/stdc++.h>

using namespace std;

// pattern 1:
//         *
//       * *
//     *  * *
//   * *  *  * 


int main(){

    int n;
    cin >>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout << " ";
            }
            else{
                cout << "*";
            }

          
        }
        cout<<endl;
    }
    
    return 0;
}







