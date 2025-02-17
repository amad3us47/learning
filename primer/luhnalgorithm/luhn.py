"" 
Now: 
    - Write the function verify(digits) -> true/false, which validates a string of digit characters according to luhn algorith
    - The final digit will be the check digit: iterate through others in reverse order, doubling each second digit (starting from rightmost non-check digit),adding together the resulting digits which 
      should be 10 - checkdigit mod 10
    - Test strategy: verify("17893729974") -> True, verify ("17893729975") ->  False
Later:
    - Don't assume input is all formed, add extra tests to cover 
    - General refactor
    - Consider functional formulation
    - Consider using a Lookup table
    - 

""
