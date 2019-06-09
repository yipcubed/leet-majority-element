#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxElement = nums[0];
        int half = nums.size() / 2;
        map<int, int> seen;
        seen[nums[0]] = 1;
        for (int i = 1; i < nums.size(); ++i) {
          int num = nums[i];
          seen[num] = seen[num] + 1;
          if (seen[num] > seen[maxElement]) {
            maxElement = num;
            if (seen[maxElement] > half)
              return maxElement;
          }
        }
        return maxElement;
    }
};


int main() {

  Solution S;

  vector<int> v1{3,2,3};
  cout << "3? " << S.majorityElement(v1) << endl;

  vector<int> v2{2,2,1,1,1,2,2};
  cout << "2? " << S.majorityElement(v2) << endl;

  std::cout << "Hello World!\n";
}