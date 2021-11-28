/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i=0;
    int j=0;
    int *returnS=(int *)malloc(2*sizeof(int));
    for(i=0;i<(numsSize-1);i++)
        for(j=(i+1);j<numsSize;j++)
            if((nums[i]+nums[j])==target){
                returnS[0]=i;
                returnS[1]=j;
            }
    *returnSize=2;
    return returnS;
}
