
// https://leetcode.com/problems/add-strings/

class Solution {
public:
    string addStrings(string num1, string num2) {
        
        //consider the length of maximum string
    
        int len=max(num1.size(),num2.size()); 
        
        //add leading 0 to make the size of both string equal
    
        while(num1.size()<len)
            num1.insert(num1.begin(),'0');
    
        while(num2.size()<len)
            num2.insert(num2.begin(),'0');
        
        //consider initially the string to be 0 and ans variable to be null
    
        int carry=0;
        string ans="";
        
        //go on adding the single digits of each string by converting them into interger
        //& also maintain carry if generated
    
        for(int i=len-1;i>=0;--i){            
            int sum=(num1[i]-'0')+(num2[i]-'0')+carry;
            
            //if sum >9 then carry is generated
            
            if(sum>9)
            {
                //consider the initial digit of number as carry
                
                carry=sum/10;
                
                //restore the last digit of number
                
                sum=sum%10;
            }
            
            else
                carry=0;
            
            //add the last digit of number into ans .don't forget to convert it into character
            
            ans.insert(ans.begin(),sum+'0');
        }
    
        if(carry)
            ans.insert(ans.begin(),carry+'0');
        
        return ans;
    }
};
