class Solution {
public:
    int findClosestNumber(vector<int>& nums) 
    {
       int closestNumber = 0; 
       int minDistance = INT_MAX;

        for (int number : nums) 
        {
            const int distance = abs(number);
          
            if (distance < minDistance || (distance == minDistance && number > closestNumber)) 
            {
                closestNumber = number;
                minDistance = distance;
            }
        }
      
        return closestNumber;
    }
};
