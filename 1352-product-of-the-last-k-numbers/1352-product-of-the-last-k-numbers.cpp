class ProductOfNumbers {
public:
    vector<unsigned long long> nums;
    ProductOfNumbers() {
    }
    
    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        int product = 1;
        while(k--)
        {
            product *= nums[size(nums) - k - 1];
        }

        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * unsigned long long param_2 = obj->getProduct(k);
 */