
// https://leetcode.com/problems/defanging-an-ip-address/

class Solution {
public:
    string defangIPaddr(string address) 
    {
        string str = "[.]" ;
        
        string ip ;
        
        for(int i = 0 ; i < address.length() ; i++)
        {
            if(address[i] == '.')
                ip.append(str) ;
            
            else
                ip.push_back(address[i]) ;
        }    
        
        return ip ;
    }
}; 
