// #include<iostream>
// using namespace std;

// int main(){
//     int i,n=5;
//     for(int i=1;i<=5;i++){
//         int c=n--;
//         if(i!=c){
//             cout<<i<<" "<<c<<endl;
//         }
//     }
// return 0;
// }

#include<iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        int j = 6 - i;

        if(i == 3 || j == 3)
            continue;

        cout << i << " " << j << endl;
    }

    return 0;
}