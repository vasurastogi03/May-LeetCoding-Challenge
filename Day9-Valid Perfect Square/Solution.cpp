//class Solution {
//public:
//  bool isPerfectSquare(int num) {
//      ios_base::sync_with_stdio(false);		//Naive Approach
//      cin.tie(NULL);
//      cout.tie(NULL);
//      
//       long int i;					//Runtime of 156ms
//       if (num < 2)
//           return true;
//       for(i=2; i<=num/2; i++){
//           if((i*i) == num)
//               return true;
//        }
//        return false;
//    }
//};


//Another Approach
class Solution {
public:
    bool isPerfectSquare(int num) { //This solution is based on the fact that Prerfect nos. are a sum of Odd 					    //nos.starting from 1
        int i=1;		    //For ex : 1 = 1, 1+3 = 4,  1 + 3 + 5 = 9,  1 + 3 + 5 + 7 = 16, etc
        while(num>0){
            num -= i;     	    //Subtracting odd number from num and updating num
            i +=2;        	    // Updating i to the next odd number
            if(!num) return true;
        }			    //Runtime is 0ms!
        return false;
    }
};


//Another Approach
bool isPerfectSquare(int num) {
        long int i = 1;
        for(;i*i<num;i++);
        return i*i==num;
    }
