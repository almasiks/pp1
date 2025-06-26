/*
#include <iostream>                              //task 1
#include <bits/stdc++.h>

using namespace std;
int main(){
srand(time(0));
vector <int> arr;
 for (int i = 0; i < 10; i++) {
        arr.push_back(rand() % 100 + 1);  
    }

    sort(arr.begin(), arr.end());

    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    int min = *min_element(arr.begin(), arr.end());
    int max = *max_element(arr.begin(),arr.end());

    cout << "sorted vector: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

return 0;

}

#include <iostream>                              //task2
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main(){
set <int> arr;
int n = 10;
for(int i = 0; i<n+1; i++){
  int num;
  cin>>num;
  arr.insert(num);
}
    cout<<"Enter random num to check: "<<endl;
    int a;
    cin>>a;
    

    
if(arr.find(a) != arr.end())
      cout<<"Found a duplicate"<<endl;
      else{
        cout<<"Num is unique"<<endl;
      }
    

return 0;

}

#include <iostream>                        //task3
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main(){
map<string, int>m;
string s;
getline(cin, s);
int space = 0;
for(int i = 0; i<s.length(); i++){
  if(s[i] == ' ')
  space++; 
}
space = space +1;
cout<<"Words are: "<< space<<endl;
 istringstream iss(s);
    string word;
    while (iss >> word) {
        m[word]++;
    }

    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

return 0;

#include <iostream>                                 //task4
#include <bits/stdc++.h>

using namespace std;

bool isBalanced(const string& expr) {
    stack<char> st;

    for (char ch : expr) {
        if (ch == '(') {
            st.push(ch);
        } else if (ch == ')') {
            if (st.empty()) {
                return false;
            }
            st.pop();
        }
    }

    return st.empty(); 
}

int main() {
    string expression;
    cout << "Enter statement: ";
    getline(cin, expression);

    if (isBalanced(expression)) {
        cout << "Correct" << endl;
    } else {
        cout << "Incorrect" << endl;
    }

    return 0;
}



#include <iostream>                     //task5
#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<string> visit;
    string name;

    cout << "Enter 5 names:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Name #" << i + 1 << ": ";
        getline(cin, name);
        visit.push(name);
    }

    cout << "\nServing customers\n";
    
    while (!visit.empty()) {
        cout << "Now serving: " << visit.front() << endl;
        visit.pop();
    }

    cout << "Queue is empty." << endl;

    return 0;
}


}

#include <iostream>                       //task6
#include <bits/stdc++.h>


using namespace std;

double average(const vector<int>& v) {
    if (v.empty()) return 0.0;

    int sum = accumulate(v.begin(), v.end(), 0);
    return static_cast<double>(sum) / v.size();
}

int main() {
    
    vector<int> data = {100, 200, 300, 400, 500};

    double avg = average(data);
    cout << "Среднее значение: " << avg << endl;

    return 0;
}

#include <iostream>                                     //task7
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
  
    vector<int> nums;
    for (int i = 1; i <= 20; ++i) {
        nums.push_back(i);
    }

    reverse(nums.begin(), nums.end());

    int even = count_if(nums.begin(), nums.end(), [](int x) {
        return x % 2 == 0;
    });

    cout << "Количество чётных чисел: " << even << endl;

    nums.erase(remove_if(nums.begin(), nums.end(), [](int x) {
        return x % 3 == 0;
    }),
     nums.end());

    cout << "Оставшиеся числа: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
*/
