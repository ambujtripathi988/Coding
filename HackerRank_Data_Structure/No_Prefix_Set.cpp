
// https://www.hackerrank.com/challenges/no-prefix-set/problem

#include <bits/stdc++.h> 
using namespace std ;

class Trie
{
    public:

        class node
        {
            public:

                bool end ;

                node * next[26] ;

                node()
                {
                    end = false ;

                    for(int i = 0 ; i < 26 ; i++)
                    {
                        next[i] = NULL ;
                    }
                }
        };

        node *trie ;
        Trie()
        {
            trie = new node() ;
        }

        bool insert(string word)
        {
            int i = 0 ;

            node * it = trie ;

            while(i < word.size() )
            {
                if( it -> next[word[i] - 'a'] == NULL )
                {
                    it -> next[word[i] - 'a'] = new node() ;
                }

                it = it -> next[word[i] - 'a'] ;
                
                i++ ;
                
                if(it -> end == true)
                {
                    return true ;
                }
            }

            it -> end = true ;
            
            for(int i = 0 ; i < 10 ; i++)       // max = 10 
            {
                if( it -> next[i] != NULL)
                {
                    return true ;
                }
            }
            
            return false ;
        }

        bool search(string word)
        {
            int i = 0 ;

            node * it = trie ;

            while(i < word.size() )
            {
                if( it -> next[word[i] - 'a'] == NULL )
                {
                    return false ;
                }

                it = it -> next[word[i] - 'a'] ;

                i++ ;
            }

            return it -> end ;
        
        }
};

int main()
{
    int n , flag = 0 ;
    
    cin >> n ;
    
    string words ;
    
    Trie *myTrie = new Trie() ;
    
    for(int i = 0 ; i < n ; i++)
    {
        cin >> words ;
        
        flag = myTrie -> insert(words) ;
        
        if(flag)
        {
            cout << "BAD SET" << endl ;
            
            cout << words ;
            
            break;
        }
        
    }
    
    if(flag==0)
        cout<< "GOOD SET" ;

    return 0;
}
