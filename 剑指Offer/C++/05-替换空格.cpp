/*
请实现一个函数，将一个字符串中的每个空格替换成 “%20”。
例如，当字符串为 We Are Happy.则经过替换之后的字符串为 We%20Are%20Happy。
*/

class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(str == nullptr || length <= 0)
            return;
        
        // 字符串 string 的实际长度
        int originalLength = 0;
        int numberOfBlank = 0;
        int i = 0;
        while(str[i] != '\0')
        {
            ++originalLength;
            
            if(str[i] == ' ')
                ++numberOfBlank;
            
            ++i;
        }
        
        // 把空格替换成 '%20' 之后的长度
        int newLength = originalLength + numberOfBlank * 2;
        if(newLength > length)
            return;
        
        int indexOfOriginal = originalLength;
        int indexOfNew = newLength;
        while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
        {
            if(str[indexOfOriginal] == ' ')
            {
                str[indexOfNew--] = '0';
                str[indexOfNew--] = '2';
                str[indexOfNew--] = '%';
            }
            else
            {
                str[indexOfNew--] = str[indexOfOriginal];
            }
            
            --indexOfOriginal;
        }
	}
};
