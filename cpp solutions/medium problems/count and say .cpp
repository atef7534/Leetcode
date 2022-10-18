
// Problem Link : https://leetcode.com/problems/count-and-say 
// Problem Hint : strings 
// Level : Medium 
// Done : Tuesday 2:33 18/10/2022 

class Solution {
public:
    
    string countAndSay(int n) {
        if ( n == 1 ) return "1" ;
        
        string ret = "1" ; 
        string cont = "";
        for(int i = 1 ; i < n ; i++) {
            
            char chr;
            int tmp = 0 ; 
            
            for(int j = 0 ; j < ret.size() ; j++) {
                if(j) {
                   if(ret[j] != ret[j-1]) {
                       cont += to_string(tmp);
                       cont += chr ; 
                       chr = ret[j];
                       tmp = 1 ; 
                   } else {
                       tmp++;
                   }
                }else {
                    tmp = 1 ; 
                    chr = ret[j] ; 
                }
                
                if(j == ret.size() - 1) {
                    cont += to_string(tmp);
                    cont += chr;
                }
            }
            ret = cont ; 
            cont = "";
        }
        return ret ; 
    };
};