## Max Consecutive Ones III

Given a binary array  `nums`  and an integer  `k`, return  _the maximum number of consecutive_ `1`_'s in the array if you can flip at most_  `k`  `0`'s.

**Example 1:**

> **Input:** nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2<br>
**Output:** 6<br>
**Explanation:** [1,1,1,0,0,**1**,1,1,1,1,**1**]<br>
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.<br>

**Example 2:**

> **Input:** nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3<br>
**Output:** 10<br>
**Explanation:** [0,0,1,1,**1**,**1**,1,1,1,**1**,1,1,0,0,0,1,1,1,1]<br>
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.<br>

**Constraints:**

-   `1 <= nums.length <= 105`
-   `nums[i]`  is either  `0`  or  `1`.
-   `0 <= k <= nums.length`