"""
You're working with an intern that keeps coming to you with JavaScript code that won't run because the braces, brackets, and parentheses are off. To save you both some time, you decide to write a braces/brackets/parentheses validator.
Let's say:

'(', '{', '[' are called "openers."
')', '}', ']' are called "closers."
Write an efficient function that tells us whether or not an input string's openers and closers are properly nested.

Examples:

"{ [ ] ( ) }" should return True
"{ [ ( ] ) }" should return False
"{ [ }" should return False
"""

def is_valid(code):
    openers_to_closers = {
        ')' : '(',
        '}' : '{',
        ']' : '['
    }

    openers = frozenset(openers_to_closers.values())
    print("the operners are : ",openers)
    closers = frozenset(openers_to_closers.keys())
    print("the closers are :", closers)

    openers_stack = []
    print("opener_new_stack----------",openers_stack)

    for char in code:
        if char in openers:
            print("the characters are :",char)
            openers_stack.append(char)
        elif char in closers:
            print("char in closers")
            print(openers_stack)
            if not openers_stack:
                return False
            else:
                # if this closer doesn't correspond to the most recently
                # seen unclosed opener, short-circuit, returning false
                if openers_stack[-1]==openers_to_closers[char]:
                    openers_stack.pop()
                else:
                    return False

    return openers_stack == []
    
print(is_valid("([{}])"))
print(is_valid("([{]"))
