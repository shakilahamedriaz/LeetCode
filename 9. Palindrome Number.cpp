   bool isPalindrome(int x) {

        long int revNum=0;
        int duplicate = x;
        while(x>0)
        {
            int lastDigit= x%10;

            revNum = (revNum*10)+lastDigit;
            x/=10;
        }

        if(duplicate==revNum)  return true;
        else  return false;
        
    }