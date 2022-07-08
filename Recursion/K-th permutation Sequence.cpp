#include<bits/stdc++.h>  
// //function to generate all possible permutations of a string
//   void solve(string &s, int index, vector < string > & res) {
//       if (index == s.size()) {
//         res.push_back(s);
//         return;
//       }
//       for (int i = index; i < s.size(); i++) {
//         swap(s[i], s[index]);
//         solve(s, index + 1, res);
//         swap(s[i], s[index]);
//       }
//     }
// string kthPermutation(int n, int k) {
//      string s;
// //     vector<string> res;
//     //create string
//    for (int i = 1; i <= n; i++) {
//       s.push_back(i + '0');
//     }
// //     //sort the generated permutations
// //     solve(s, 0, res);
// //     sort(res.begin(), res.end());
// //     //return kth sequence-5th res[4]-> 0-based indexing
// //     auto it = res.begin() + (k - 1);
// //    // return res[k-1];
// //     return *it;
// }
string kthPermutation(int n, int k) {
     vector<int> s;
    int fact = 1;
   for (int i = 1; i <n; i++) {
       fact = fact * i;
       s.push_back(i);
    }
    s.push_back(n);
    string ans = "";
     k = k - 1;
   while (true) {
        ans = ans + to_string(s[k / fact]);
        s.erase(s.begin() + k / fact);
        if (s.size() == 0) break;
        k = k % fact;
        fact = fact / s.size();
      }
  return ans;
}

