class Solution {
public:
    int reverse(int x) {
        vector<int> res;
        int count = 0;
        long long int num = 0;
        int temp = x;
        
        if(x < INT_MIN || x > INT_MAX) 
            return 0;

        while(temp!=0)
        {
            count++;
            temp = temp/10;
        }
        
        while(x!=0)
        {
            res.push_back(x % 10);
            x = x / 10;
        }
        
        for(int i = 0; i < res.size(); i++)
        {
            num += res[i] * pow(10,count-i-1);
        }
        if(num<INT_MIN || num>INT_MAX) 
            return 0;
        return num;
    }
};