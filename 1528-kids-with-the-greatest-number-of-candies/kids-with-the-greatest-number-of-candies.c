/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool*result=(bool*)malloc(candiesSize*sizeof(bool));
    int i;
    int max=candies[0];
    for(i=0;i<candiesSize;i++)
    {
        if(candies[i]>max){
            max=candies[i];        }
    }
    for(i=0;i<candiesSize;i++){
        if((candies[i]+extraCandies)>=max){
            result[i]=true;
        }
        else{
            result[i]=false;
        }
        }
        * returnSize=candiesSize;
    return result;
    }

