long long zeroFilledSubarray(int* nums, int numsSize) {
    long ans  = 0;
    long count = 0;
    for(int i=0 ; i<numsSize ; i++){
        if(nums[i] == 0){
            count++;
            ans += count;
        }
        else{
            count = 0;
        }
    }
    return ans;
}
