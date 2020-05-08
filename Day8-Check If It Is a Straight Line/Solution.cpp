class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {      //Runtime was 8ms!
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        if(coordinates.size()==2)
            return true;
        else if(coordinates[0][0]==coordinates[1][0])               //Checking if line is parallel to Y-axis
        {
            int x = coordinates[1][0];
            for(int i=0;i<coordinates.size();i++)           
            {
                if(coordinates[i][0]!=x)
                    return false;
            }
        }
        else if(coordinates[0][1]==coordinates[1][1])               //Checking if line is parallel to X-axis
        {
            int x = coordinates[1][1];
            for(int i=0;i<coordinates.size();i++)
            {
                if(coordinates[i][1]!=x)
                    return false;
            }
        }
        else
        {
            int x1 = coordinates[0][0];
            int y1 = coordinates[0][1];
            float m = (coordinates[1][1] - y1)/(coordinates[1][0] - x1);
            for(int i=2;i<coordinates.size();i++)
            {
                float m2 = (float)(coordinates[i][1] - y1)/(coordinates[i][0] - x1);
                if(m2!= m)                                          //Comparing the slopes 
                    return false;
            }
        }
        return true;

//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
//         cout.tie(NULL);
        
            
//         int x1, x2, y1, y2, i;
//         float slope, constant;
//         if(coordinates.size()<=2)
//             return true;
                                             //Naive Approach - Didn't check extreme cases correctly(Parallel Lines)
//         x1 = (coordinates[0])[0];
//         y1 = (coordinates[0])[1];
//         x2 = (coordinates[1])[0];
//         y2 = (coordinates[1])[1];
        
//         if(x2-x1==0){
//             slope = 0;
//         }
//         else{
//            slope = (y2 -y1)/(x2 - x1); 
//         }
//         constant = y2 - slope*x2;
        
//         for(i = 0; i < coordinates.size(); i++){
//             auto x = coordinates[i][0];
//             auto y = coordinates[i][1];
            
//             if(y != (slope*x + constant))
//                 return false;
//             }
//         return true;
    }

};

