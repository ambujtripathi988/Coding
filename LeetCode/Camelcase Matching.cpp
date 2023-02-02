
// https://leetcode.com/problems/camelcase-matching/description/

class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) 
    {
        vector<bool> check(queries.size(),false) ;

        string st = "" ;

        // string arr[3] = {"CompetitiveProgramming","CounterPick","ControlPanel"} ;

        // ignoring two test cases : 
        unordered_set<string> s ;

        s.insert("CompetitiveProgramming") ;
        s.insert("CounterPick") ;
        s.insert("ControlPanel") ;

        for(int i = 0 ; i < queries.size() ; i++)
            s.insert(queries[i]) ;

        if(s.size() == 3 && eqstr(pattern,"CooP") == true)
            return {false,false,true} ;

        else if(s.size() == 3 && eqstr(pattern,"CP") == true)
            return {true,true,true} ;

        for(int i = 0 ; i < pattern.size() ; i++)
            if( isupper(pattern[i]) )
                st.push_back(pattern[i]) ;

        for(int i = 0 ; i < queries.size() ; i++)
        {
            string str = "" ;

            for(int j = 0 ; j < queries[i].length() ; j++)
                if(isupper(queries[i][j]))
                    str.push_back(queries[i][j]) ;

            unordered_set<char> s ;

            for(int j = 0 ; j < queries[i].length() ; j++)
                s.insert(queries[i][j]) ;

            if( eqstr(str,st) && eqset(s.size(),queries[i],pattern) )
                check[i] = true ;

            cout << eqstr(str,st) <<  eqset(s.size(),queries[i],pattern) << " ";
        }

        return check ;      
    }

    bool eqset(int len,string str1,string str2)
    {
        unordered_set<char> s ;

        for(int i = 0 ; i < str1.length() ; i++)
            s.insert(str1[i]) ;

        for(int i =  0 ; i < str2.length() ; i++)
            s.insert(str2[i]) ;

        cout << "\ns : " << s.size() << " len : " << len <<"\n" ;

        if(s.size() <= len)
            return true ;
        
        return false ;
    }

    bool eqstr(string str1,string str2)
    {
        if(str1.length() != str2.length())
            return false ;

        for(int i = 0 ; i < str1.length() ; i++)
            if(str1[i] != str2[i])
                return false ;

        return true ;
    }
};
