class Solution {
public:
    double myPow(double x, int n) {
        
       double res = 1.0;   
        long long nn = n;       //  TC -> O(Log n)..  AS -> O(1)..

        if (nn < 0){            // We take nn addition to negative nn to positive nn..
            nn = -1 * nn;
        }

        while (nn){              
            if (nn % 2 == 1){   //  In Odd case.. we do, res *= x, nn -= 1;
                res = res * x;
                nn = nn - 1;
            }
            else {              //  In Even case..  we do, x *= x, nn /= 2;
                x = x * x;
                nn = nn / 2;
            }
        }
        if (n < 0){                       // In case of Negative Number.. we do (1/result)..
            res = (double)(1.0) / (double)(res);
        }      
        return res;
    }
};
