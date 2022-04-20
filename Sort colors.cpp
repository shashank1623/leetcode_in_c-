class Solution {
    private :
        int partion(vector <int> &arr, int p ,int r)
{
    int x = arr[r];
    int i = p-1;
    
    for(int j = p; j<=r-1;j++)
    {
        if(arr[j]<=x)
        {
            i = i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quick(vector <int> &arr, int p, int r)
{
    if(p<r)
    {
        int q = partion(arr,p,r);
        quick(arr,p,q-1);
        quick(arr,q+1,r);
    }
}
public:
    void sortColors(vector<int>& arr) {
        
        if(arr.size()==0) 
            return ;
        int len = arr.size();
        quick(arr,0,len-1);
        
    }
};
