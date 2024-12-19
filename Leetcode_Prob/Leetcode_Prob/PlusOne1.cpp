//#include <iostream>
//#include <vector>
//#include <string>
//#include <typeinfo>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> plusOne(vector<int>& digits) {
//        string str;
//        unsigned long long  number = 0;
//
//        for (int iter : digits) {
//            str += to_string(iter);
//        }
//
//        number = stoll(str);
//        number++;
//        
//     
//        if (to_string(number).length() > str.length()) {
//            digits.resize(digits.size() + 1);
//        }
//
//        for (int i = digits.size() - 1; i >= 0; i--) {
//            digits[i] = number % 10;
//            number /= 10;
//        }
//
//
//        for (int i = 0; i < digits.size(); i++) {
//            cout << digits[i];
//        }
//        
//        return digits;
//    }
//};
//
//int main() {
//
//    Solution Sol;
//
//
//    vector<int> My_vec = { 7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3 };
//   
//    Sol.plusOne(My_vec);
//    
//    //string const name = "9876543210";
//
//    //long huy = stol(name);
//   /* long long opo = stoll(name);
//    cout << typeid(stol(name)).name();
//    cout << opo;*/
//
//	return 0;
//}