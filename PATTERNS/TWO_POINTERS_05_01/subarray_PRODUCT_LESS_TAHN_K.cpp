#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        //handle edge cases where k is 0 or 1 (no subarrays possible
        if(k<=1) return 0;

        int totalCount=0;
        int product=1;

        //use two Pointers to maintain a sliding window 
        for(int left=0,right=0;right<nums.size();right++)
        {
            //expand the window by including the element at the right ptr 
            product*=nums[right];

            //shrink the window from the left while the product is greater than equal to k
            while(product >=k){
                //remove the element at the left pointer from the product
                product/=nums[left++];
            }

            //update the total count by adding the number of valid subarrays with the current 
            //window size
            totalCount+=right-left+1;
            //right-left+1 represents the current window size
        }

        return totalCount;
    }
};

//added for 0 ms runtime
// static const bool __boost = []() {
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     return std::ios_base::sync_with_stdio(false);
// }();


// const size_t BUFFER_SIZE = 0x6fafffff;
// alignas(std::max_align_t) char buffer[BUFFER_SIZE];
// size_t buffer_pos = 0;


// void* operator new(size_t size) {
//     constexpr std::size_t alignment = alignof(std::max_align_t);
//     size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
//     size_t total_size = size + padding;
//     char* aligned_ptr = &buffer[buffer_pos + padding];
//     buffer_pos += total_size;
//     return aligned_ptr;
// }


// void operator delete(void* ptr, unsigned long) {}
// void operator delete(void* ptr) {}
// void operator delete[](void* ptr) {}


// const auto __ = []() {
//     struct Leetcode {
//         static void _() { std::ofstream("display_runtime.txt") << 0 << '\n'; }
//     };
//     std::atexit(&Leetcode::_);
//     return 0;
// }();
int main()
{
//created by manik sharma

return 0 ;
}