#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string str;
        int number = 0;

        for (int iter : digits) {
            str += to_string(iter);
        }

        number = stoi(str);
        number++;
        
     
        if (to_string(number).length() > str.length()) {
            digits.resize(digits.size() + 1);
        }

        for (int i = digits.size() - 1; i >= 0; i--) {
            digits[i] = number % 10;
            number /= 10;
        }


        for (int i = 0; i < digits.size(); i++) {
            cout << digits[i];
        }
        
        return digits;
    }
};

int main() {

    Solution Sol;


    vector<int> My_vec = { 9,8,7,6,5,4,3,2,1,0 };
   
    Sol.plusOne(My_vec);


   

	return 0;
}