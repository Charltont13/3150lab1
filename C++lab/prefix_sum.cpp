#include <iostream>
#include <vector>


bool non_neg_prefix_sum(const std::vector<int>& nums) {
    int prefix_sum = 0;
    for (int num : nums) {
        prefix_sum += num;
        if (prefix_sum < 0) {
            return false;
        }
    }
    return true;
}


bool non_pos_prefix_sum(const std::vector<int>& nums) {
    int prefix_sum = 0;
    for (int num : nums) {
        prefix_sum += num;
        if (prefix_sum > 0) {
            return false;
        }
    }
    return true;
}

int main() {
    //Test cases
    std::vector<int> lst1 = {1, -1, 1, -1};
    std::vector<int> lst2 = {1, -1, -1, 1}; 

    //non-negative prefix sums
    std::cout << "Non-negative prefix sums:" << std::endl;
    std::cout << "Result for lst1: " << (non_neg_prefix_sum(lst1) ? "true" : "false") << std::endl;
    std::cout << "Result for lst2: " << (non_neg_prefix_sum(lst2) ? "true" : "false") << std::endl;

    //non-positive prefix sums
    std::cout << "Non-positive prefix sums:" << std::endl;
    std::cout << "Result for lst1: " << (non_pos_prefix_sum(lst1) ? "true" : "false") << std::endl;
    std::cout << "Result for lst2: " << (non_pos_prefix_sum(lst2) ? "true" : "false") << std::endl;

    return 0;
}
