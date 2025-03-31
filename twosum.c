/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums[], int numsSize, int target, int* returnSize) {
   returnSize=2;
    int arr[2];
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
        if(nums[i]+nums[j]==target){
            printf("[%d,%d]",i,j);
        }
    }
    return arr;

    
}
int main(){
    int arr[]={2,7,11,15};
    int target=9;
    twoSum(arr,4,9);
    return 0;
}