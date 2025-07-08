class Solution:
#Defines class, its a container for the method

    def twoSum(self, nums: List[int], target: int) -> List[int]:
    #Declare method called twosums that, take SELF(instances), NUMS(list of integers) n TARGET(integer target sum)
    #Returns list of 2 indices such that nums[i]+nums[j]==target

        prevMap = {} #mapping the value to the index of that value (val: index), initializes empty dictionary
        #its purpose os to store previous numbers we've seen as keys and their indices as values

        for i, n in enumerate(nums): #iterates thru the num list(i=current index, n=current number at index i)

            diff = target - n #Calculates complement neede to reach target (eg 9-2=7=target)

            if diff in prevMap: #Checks if we've already seen a number(diff) that can pair with curr num(n) to make the target

                return [prevMap[diff], i] #if the complement exists in dict, we return index of that complement and the curr index(i), there are 2 indices whose values add upto target

            prevMap[n] = i #if complemet wasn't found, we store the current numbern in prevMap with index i
        return
