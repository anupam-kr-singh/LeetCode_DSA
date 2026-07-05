class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        for(int i=0; i<len; i++){
            int left=(i==0)?0:flowerbed[i-1];
            int right=(i==len-1)?0:flowerbed[i+1];
            if(left+right+flowerbed[i]==0){
                flowerbed[i]=1;
                n--;
            }
        }
        return n<=0;
    }
};