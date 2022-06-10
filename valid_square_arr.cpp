class Solution 
{
    bool d(vector<int>& p1, vector<int>& p2, vector<int>& p3)
    {
        int d1 = (p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]);
        int d2 = (p1[0]-p3[0])*(p1[0]-p3[0])+(p1[1]-p3[1])*(p1[1]-p3[1]);
        int d3 = (p3[0]-p2[0])*(p3[0]-p2[0])+(p3[1]-p2[1])*(p3[1]-p2[1]);
        if(d1>d2) swap(d1,d2);                                                        
        if(d1>d3) swap(d1,d3);
        if(d2>d3) swap(d2,d3);
        return d1 and d1+d2==d3 and d1==d2;  
    }
    public:    
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) 
    {
        return d(p1,p2,p3) and d(p2,p3,p4) and d(p3,p4,p1);   
    }
};
