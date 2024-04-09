class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxPoints = 0 ;
        
        for (int i = 0; i < points.size(); i++) 
        {
            unordered_map<double, int> slopeCount ;
            int samePointCount = 1 ;
            
            for (int j = i + 1; j < points.size(); j++) 
            {
                if (points[i] == points[j]) 
                {
                    samePointCount++ ;
                } 
                else 
                {
                    double slope ;
                    
                    if (points[j][0] - points[i][0] == 0) 
                    {
                        slope = std::numeric_limits<double>::infinity() ;
                    } 
                    else 
                    {
                        slope = static_cast<double>(points[j][1] - points[i][1]) / (points[j][0] - points[i][0]) ;
                    }
                    slopeCount[slope]++ ;
                }
            }
            for (auto& count : slopeCount) 
            {
                maxPoints = max(maxPoints, count.second + samePointCount) ;
            }
            
            maxPoints = max(maxPoints, samePointCount) ;
        }
        
        return maxPoints ;
    }
};