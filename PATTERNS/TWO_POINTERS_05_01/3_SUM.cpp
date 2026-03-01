#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>  ans;
        //why we sorted array so that we know whcih ptr to move and in which dxn should i move that
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }


            //see teen ptrs manage krne the difficult so we fix i at 0 and j at i+1 and k starts 
            //the last
            int j=i+1;
            int k=n-1;

            while(j<k){
                //cz when j and k comes at same index we reset the i at one place ahead
                int total=nums[i]+nums[j]+nums[k];

                //check our total value
                if(total>0)
                {
                    k--; //why cz k is at last nwo to make zero we need smaller number
                    //so we reduce k
                }
                else if(total<0){
                    //same as if the total is less than zero we need bigger number so that is 
                    //we move j 
                    j++;
                }
                else
                {
                    //mans it is qual to zero
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    //after finding the triplet move j to right

                    //but check if the number is diffrent and mo0ve it till its different
                    //cz agr diff aayega nhhi toh triplets can be repeated
                    while(nums[j]==nums[j-1]&&j<k)
                    {
                        j++;
                    }
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>  ans;
        //why we sorted array so that we know whcih ptr to move and in which dxn should i move that
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }


            //see teen ptrs manage krne the difficult so we fix i at 0 and j at i+1 and k starts 
            //the last
            int j=i+1;
            int k=n-1;

            while(j<k){
                //cz when j and k comes at same index we reset the i at one place ahead
                int total=nums[i]+nums[j]+nums[k];

                //check our total value
                if(total>0)
                {
                    k--; //why cz k is at last nwo to make zero we need smaller number
                    //so we reduce k
                }
                else if(total<0){
                    //same as if the total is less than zero we need bigger number so that is 
                    //we move j 
                    j++;
                }
                else
                {
                    //mans it is qual to zero
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    //after finding the triplet move j to right

                    //but check if the number is diffrent and mo0ve it till its different
                    //cz agr diff aayega nhhi toh triplets can be repeated
                    while(nums[j]==nums[j-1]&&j<k)
                    {
                        j++;
                    }
                }
            }
        }
        return ans;
    }
};

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