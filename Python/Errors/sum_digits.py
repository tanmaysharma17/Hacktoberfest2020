
# Sum of digits (recursive)

# Write a recursive function
# that returns the sum of the digits of a given integer.
# Read input as specified in the question.
# Print output as specified in the question.

def dsum(n):
    if n == 0:
        return 0
    small = dsum(int(n/10))
    ans = n % 10+small
    return ans


n = int(input())
sum =dsum(n)
print(sum)
