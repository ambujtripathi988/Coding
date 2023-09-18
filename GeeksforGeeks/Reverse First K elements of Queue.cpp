
// https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    
    vector<int> arr ;
    
    int count = 0 ; 
    
    while(count != k)
    {
        arr.push_back(q.front()) ;
        q.pop() ;
        count ++ ;
    }
    
    reverse(arr.begin() , arr.end()) ;
    
    queue<int> ans ;
    
    for(int i = 0 ; i < arr.size() ; i++)
        ans.push(arr[i]) ;
        
    while(!q.empty())
    {
        ans.push(q.front()) ;
        q.pop() ;
    }
    
    return ans ;
}
