
// https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1

/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       
        int ghata = 0 , start = 0 , bal = 0 ;
        
        for(int i = 0 ; i < n ; i++)
        {
            bal += p[i].petrol - p[i].distance ;
            
            if(bal < 0)
            {
               ghata += bal ;
               
               start = i+1 ;
               
               bal = 0 ;
            }
        }
       
        if(ghata + bal >= 0)
            return start ;
            
        return -1 ;
    }
};
