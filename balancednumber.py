def balanced_num(number):
    nums = [int(n) for n in str(number)]
    if len(nums) <= 2:
        return "Balanced"
    elif len(nums) % 2 == 0:
        if sum(nums[:len(nums)//2-1]) == sum(nums[len(nums)//2 + 1:]):
            return "Balanced"
        else:
            return "Not Balanced"
    else:
        if sum(nums[:len(nums)//2]) == sum(nums[len(nums)//2 + 1:]):
            return "Balanced"
        else:
         return "Not Balanced"