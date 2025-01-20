//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    int mySqrt(int x) {
//        long long iter = 2;
//        long long num = iter;
//        bool complete = true;
//
//        while (complete) {
//            if (x == 0)
//                return 0;
//            if (x == 1)
//                return 1;
//            
//            iter *= iter;
//
//            if (iter == x) return num;
//            if (iter > x) return num - 1;
//            iter = iter / num;
//            iter++;
//            num = iter;
//        }
//
//        return 0;
//    }
//};
//
//int main() {
//
//    Solution Sol;
//
//    int sqrt = 50;
//
//    cout << Sol.mySqrt(sqrt);
//    
//	return 0;
//}