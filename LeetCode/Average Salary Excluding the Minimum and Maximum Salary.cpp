
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
 
class Solution {
public:
    double average(vector<int>& salary) 
    {
        int mini = *min_element(salary.begin() , salary.end()) ;
        int maxi = *max_element(salary.begin() , salary.end()) ;
        
        int sum = 0 ;
        double avg = 0;
        
        for(int i = 0 ; i < salary.size() ; i++)
            if(salary[i] != mini && salary[i] != maxi)
                sum += salary[i] ;
        
        avg =  (sum * 1.0)  / (salary.size() - 2) ;
        
        return avg ; 
    }
};
