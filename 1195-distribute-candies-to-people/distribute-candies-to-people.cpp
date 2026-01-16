class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
         vector<int> res(num_people, 0);
        int give = 1;
        int i = 0;

        while (candies > 0) {
            int current = min(give, candies);
            res[i] += current;
            candies -= current;
            give++;
            i = (i + 1) % num_people;
        }

        return res;
    }
};