/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    static int ans[10000];   
    *returnSize = 0;       

    for (int num = left; num <= right; num++) {
        int temp = num;
        int isValid = 1;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit == 0 || num % digit != 0) {
                isValid = 0;     
                break;
            }
            temp /= 10;  
        }

        if (isValid) {
            ans[*returnSize] = num; 
            (*returnSize)++;
        }
    }

    return ans;
}

