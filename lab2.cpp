/*#include <iostream>
using namespace std;                 //task1 dex to hex Numeric Systems + Bit Manipulation


int main() {
    int  n;
    cin >> n;
    
    if (n == 0) {
        return 0;
    }
int orig = n;
    string hex = "";
    while (n > 0) {
        int a = n % 16;  // 100%16 = 4
        if (a < 10) {
            hex = char(a + '0') + hex;
        } else {
            hex = char(a - 10 + 'A') + hex;
        }
        n /= 16; 
    }
    n= orig;
    string eight = "";
    while (n > 0) {
        int b = n % 8;
        if (b < 8) {
            eight = char(b + '0') + eight;
        
        }
        n /= 8; 

    }

    cout << "HEX: " << hex << endl;
    cout << "Eight: " << eight <<endl;
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;                 //task2 finding max Logical Operators + If-Else

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    int max_num = a;
    if(b>max_num) 
    max_num = b;
    if(c>max_num)
    max_num = c;

    int min_num = a;
    if(b<min_num) 
    min_num = b;
    if(c<min_num)
    min_num = c;
    cout<<"Max: "<<max_num<<endl;
    cout<<"Min: " <<min_num<<endl;
    
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;                 //task3  Loops + Continue/Break
                                                //2,6,10,14
int main() {
    int n;
    cin>>n;
   for(int i = 0; i<n; i++){
    if(i==100) break;
    if(i%2==0 && i%4 !=0){
        cout<<i<<endl;
    }


   }
    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;                 //task4 Math Functions (pow, ceil, floor, round)
                                            
int main() {
    double n;
    cin>>n;
cout<<pow(3, n)<<endl;
cout<<ceil(n)<<endl;
cout<<floor(n)<<endl;
cout<<round(n)<<endl;
   
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a;                                          //task 5  If-Else (Nested)
    cin >> a;

    if (a >= 90 && a <= 100)
        cout << "A";
    else if (a >= 80)
        cout << "B";
    else if (a >= 70)
        cout << "C";
    else if (a >= 60)
        cout << "D";
    else if (a >= 0)
        cout << "F";
    else
        cout << "Неверная оценка";

    return 0;
}

#include <iostream>                     //task 6 Do-While
using namespace std;

int main() {
    int sum = 0;
    int x;

    do {
        cin >> x;
        sum += x;
    } while (x != 0);

    cout << "Sum of numbers: " << sum << endl;

    return 0;
}
*/
