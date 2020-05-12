class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;;
        fill(image, sr, sc, image[sr][sc], newColor);          //This is a DFS/recursive problem -Problems like this include 
        return image;                                          //Number of islands, rotten orange, etc are based 
    }                                                          //on this.
    
    void fill(vector<vector<int>>& image, int sr, int sc, int color, int newColor){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc] != color) //check conditional statemnet 
            return;                                                                          //after all theindexOutOfBunds
        image[sr][sc] = newColor;                                                            //conditions have been checked 
        fill(image, sr-1, sc, color, newColor);
        fill(image, sr+1, sc, color, newColor);
        fill(image, sr, sc-1, color, newColor);
        fill(image, sr, sc+1, color, newColor);
        return;
    }
};
