class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int s1 = 0 , s2  =0 , s3 = 0;
        for(int i = 0;i<N1;i++){
            s1 += S1[i];
        } 
        for(int i = 0;i<N2;i++){
            s2 += S2[i];
        }
        for(int i = 0;i<N3;i++){
            s3 += S3[i];
        }
        
        int tp1  =0, tp2 = 0 , tp3 = 0;
        while(1){
            if(tp1 == N1 || tp2 == N2 || tp3 == N3){
                return 0;
            }
            if(s1 == s2 && s2 == s3){
                return s1;
            }
            if(s1 >= s2 && s1 >= s3){
                s1 -=S1[tp1];
                tp1 +=1;
            }
            else if(s2 >= s1 && s2 >= s3){
                s2 -=S2[tp2];
                tp2 +=1;
            }
            else if(s3 >= s1 && s3 >= s2){
                s3 -=S3[tp3];
                tp3 +=1;
            }
        }
        
    }
};