// Given a sorted list of numbers, binary search using only one 
// comparison per iteration:
size_t binary_search(const vector<int> &nums, int target) {
    size_t lo = 0, hi = nums.size() - 1;
    <<<while (lo < hi) {
        size_t mid = (lo + hi) / 2;
        if (nums[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }>>>
    return lo;    
}
