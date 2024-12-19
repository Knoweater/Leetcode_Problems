//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    long long pickGifts(vector<int>& gifts, int k) {
//        double sum = 0;
//        int temp = 0;
//        int index = 0;
//
//        for (int i = 0; i < k; i++) {
//            temp = 0;
//            for (int j = 0; j < gifts.size(); j++) {
//                if (temp < gifts[j]) {
//                    temp = gifts[j];
//                    index = j;
//                }
//                if (j + 1 == gifts.size()) {
//                    gifts[index] = sqrt(gifts[index]);
//                }
//            }
//        }
//
//
//        for (int i = 0; i < gifts.size(); i++) {
//            sum += gifts[i];
//        }
//
//
//        return sum;
//    }
//};
//
//
//
//int main() {
//
//    Solution Sol;
//
//
//    vector<int> Myvec = { 25,64,9,4,100 };
//    int k = 4;
//
//    cout << Sol.pickGifts(Myvec, k);
//
//
//	return 0;
//}