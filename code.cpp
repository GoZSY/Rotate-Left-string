/****************************************************************************************
在原字符串上修改 “abcdef”循环左移9位（3位）前3位逆序，后3位逆序，整体再逆序。
“cbafed”-> “defabc”
*****************************************************************************************/
class Solution {
public:
    string LeftRotateString(string str, int n) 
    {
        int length = str.size();
        if(length == 0)
            return str;
        n = n%length;
        if(n == 0)
            return str;
        ReverseS(str,0,n-1);
        ReverseS(str,n,length-1);
        ReverseS(str,0,length-1);
        return str;
    }
private:
    void ReverseS(string &str, int start, int end)
    {
        int i = start;
        int r = end;
        for(; i <= start+(end-start)/2; ++i)
        {
            swap(str[i],str[r--]);
        }
    }
};
