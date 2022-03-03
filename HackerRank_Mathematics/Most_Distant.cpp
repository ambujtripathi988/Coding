
// https://www.hackerrank.com/challenges/most-distant/problem?h_r=profile

#include <bits/stdc++.h>
using namespace std ;

int main() 
{
    long int n ;

    cin >> n ;

    vector<long int> x_coord ;
    vector<long int> y_coord ;

    for (int i = 0; i < n; i++)
    {
        long int x_input , y_input ;

        cin >> x_input >> y_input ;

        x_coord.push_back(x_input) ;
        y_coord.push_back(y_input) ;

   }
    
   /*

    // using distance formula : 
   //double dist = sqrt ( pow((x_coord[1] - x_coord[0] ),2 ) + pow((y_coord[1] - y_coord[0] ),2 ) ) ;

   for(int i = 0; i < n; i++ )
   {
        
        double dist_new = sqrt ( pow((x_coord[i+1] - x_coord[0] ),2 ) + pow((y_coord[i+1] - y_coord[0] ),2 ) ) ;
        
        //cout << "New Distance is : "<< dist_new << endl ;

        if(dist_new > dist)
        {
            dist = dist_new ;
            
           // cout << "Original Dist Updated as : " << dist << endl ;
        }
        
        
        //cout << "X coord : " << x_coord[i] << "       Y coord : " << y_coord[i] << endl ;
   }

   */

   long int x_min = *min_element(x_coord.begin(), x_coord.end()) ;
   long int x_max = *max_element(x_coord.begin(), x_coord.end()) ;


   // int x_minElementIndex = min_element(x_coord.begin(), x_coord.end()) - x_coord.begin();
   
   long int y_min = *min_element(y_coord.begin(), y_coord.end()) ;


   
   long int y_max = *max_element(y_coord.begin(), y_coord.end()) ;

   // int y_minElementIndex = min_element(y_coord.begin(), y_coord.end()) - y_coord.begin();

   // distance b/w two x axis points : 

   double dist_x_axis = abs(x_max - x_min)*1.0 ;

   double dist_y_axis = abs(y_max - y_min)*1.0 ;

   double dist_1 = sqrt ( pow((0 - x_min ),2 ) + pow((y_max - 0 ),2 ) ) ;
   
   double dist_2 = sqrt ( pow((x_max - 0 ),2 ) + pow((0 - y_max ),2 ) ) ;
   
   double dist_3 = sqrt ( pow((0 - x_max ),2 ) + pow((y_min - 0 ),2 ) ) ;
   
   double dist_4 = sqrt ( pow((x_min - 0 ),2 ) + pow((0 - y_min ),2 ) ) ;

   vector <double> distance ;

   distance.push_back(dist_x_axis);
   distance.push_back(dist_y_axis);
   distance.push_back(dist_1);
   distance.push_back(dist_2);
   distance.push_back(dist_3);
   distance.push_back(dist_4);

   double max_dist = *max_element(distance.begin(), distance.end()) ;

    cout << fixed << setprecision(12) << max_dist << endl ;

    return 0;
}
