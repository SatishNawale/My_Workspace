
def ChkPrime(No):
    if No < 2:
        return 0
    
    else:
        flag = 0
        for i in range(2, int(No/2)+1):
            if No%i == 0:
                flag = 1
                break

        if flag == 0:
            return 1

        else:
            return 0
        
