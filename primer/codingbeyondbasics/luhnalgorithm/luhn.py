""" 
Now: 
    - Write the function verify(digits) -> true/false, which validates a string of digit characters according to luhn algorith
    - The final digit will be the check digit: iterate through others in reverse order, doubling each second digit (starting from rightmost non-check digit),adding together the resulting digits which 
      should be 10 - checkdigit mod 10
    - Test strategy: verify("17893729974") -> True, verify ("17893729975") ->  False
    - Consider functional formulation
Later:
    - Don't assume input is all formed, add extra tests to cover 
    - General refactor
    - Consider functional formulation
    - Consider using a Lookup table
    - 
"""

# lookup table 
# LOOKUP = {7 : 14}

LOOKUP = dict(zip('(0123456789',(0,2,4,6,8,1,3,5,7,9)))
print(LOOKUP)







def verify_imperative(digits):
    total = 0
    for i,d in enumerate(reversed(digits[:-1])): # TODO ideally avoid slice
        x= int(d) * (2 - i %2) #TODO name 
        total+= x// 10 + x % 10
    return 10 - (total % 10) == int(digits[-1])

def f(args):
    i,d = args 
    print(d,i)
    return x // 10 + x


def verify_functional(digits):
    total = sum(map(f,digits))
    return total % 10 ==0 

if __name__ == '__main__':
    for verify in (verify_imperative,verify_functional):
        assert verify("17893729974")
        assert not verify("17893729975")
    print("ok")

