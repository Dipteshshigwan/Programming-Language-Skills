def palindrome(strl):
    leng = len(strl)        #input:s = "asdsa"
    revstrl = []            #      palindrome(s)
    for i in range(0, leng):
        revstrl = reversed(strl)
    if list(strl) == list(revstrl):
        print("Palindrome")
    else:
        print("Not Palinfrome")
    
        
