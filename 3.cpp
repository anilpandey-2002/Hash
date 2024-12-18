class Solution
{
public:
    bool isHappy(int n)
    {
        auto squaredSum = [](int num)
        {
            int sum = 0;
            while (num)
            {
                sum += (num % 10) * (num % 10);
                num /= 10;
            }
            return sum;
        };

        int a = n, fast = n;
        do
        {
            a = squaredSum(a);
            fast = squaredSum(squaredSum(fast));
        } while (a != fast);

        return a == 1;
    }
};
// 202
//  HappyNumber