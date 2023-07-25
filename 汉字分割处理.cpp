#include "汉字分割处理.h"


//适用于windows 十六进制方式提取分割汉字和统计汉字数量
void  test16(string s) {
    string t;
    int count = 0;
    int ecount = 0;
    for (int i = 0; i < s.length(); i++) // UTF-16编码中，中文占用2个字节
    {
        if ((unsigned char)s[i] < 0x80) // ASCII字符的最高位为0，UTF-16编码为1字节
        {
            t.append("/");
            t.append(s.substr(i, 1));
            t.append("/");
            ecount++;
        }
        else if ((unsigned char)s[i] == 0xFFFE)  // 中文的第一个字节的最高位为0*FFFE，则为小端序，UTF-16编码为2字节
        {
            t.append(s.substr(i, 2));
            t.append("/");
            i += 1;
        }
        else if ((unsigned char)s[i] == 0xFEFF) {   // 文章开头为0xFEFF，则为大端序,UTF-16编码为2字节

            t.append(s.substr(2, i));
            t.append("/");
            i += 1;
            count++;
        }
        else if ((char)s[i] == 0x0020) {
            //ecount--;
        }
        else
        {
            t.append(s.substr(i, 2));
            t.append("/");
            i += 1;
            count++;
        }
    }
    //cout << t << endl;
    //return t;

    cout << "test16汉字个数是" << count << endl;
    cout << "test16 英文个数是" << ecount << endl;
    cout << "test16可以分割成为" << t << endl;


}
//提取字符串中的汉字及个数  //适用于linux 的汉字统计和 汉字分割
//windows vs  中分割汉字会显示乱码
void  test06(string s) {
    string t;
    int count = 0;
    for (int i = 0; i < s.length(); i++) // UTF-8编码中，中文占用3个字节
    {
        if ((unsigned char)s[i] < 0x80) // ASCII字符的最高位为0，UTF-8编码为1字节
        {
            t.append(s.substr(i, 1));
            t.append("/");
        }
        else if ((unsigned char)s[i] < 0xE0) // 中文的第一个字节的最高位为110，UTF-8编码为3字节
        {
            t.append(s.substr(i, 3));
            t.append("/");
        }
        else if ((unsigned char)s[i] == 0x3001) {
            // t.append(s.substr(i, 3));
            t.append("/");
            i += 2;
            count--;
        }
        else // 中文的第一个字节的最高位为1110，UTF-8编码为3字节
        {
            t.append(s.substr(i, 3));
            t.append("/");
            i += 2;
            count++;
        }
    }
    //cout << t << endl;
    //return t;
    cout << "test06汉字个数是" << count << endl;
    cout << "test06可以分割成为" << t << endl;


}

//下面是一个简单的示例 utf16_to_utf8 函数的实现，用于将 UTF - 16 编码转化为 UTF - 8 编码：


string utf16_to_utf8(const wstring& utf16_string) {
    string utf8_string;
    for (size_t i = 0; i < utf16_string.length(); i++) {
        uint32_t c = static_cast<uint32_t>(utf16_string[i]);
        if (c <= 0x7F) {
            // Single-byte UTF-8 character
            utf8_string += static_cast<char>(c);
        }
        else if (c <= 0x7FF) {
            // Two-byte UTF-8 character
            utf8_string += static_cast<char>((c >> 6) | 0xC0);
            utf8_string += static_cast<char>((c & 0x3F) | 0x80);
        }
        else if (c <= 0xFFFF) {
            // Three-byte UTF-8 character
            utf8_string += static_cast<char>((c >> 12) | 0xE0);
            utf8_string += static_cast<char>(((c >> 6) & 0x3F) | 0x80);
            utf8_string += static_cast<char>((c & 0x3F) | 0x80);
        }
        else if (c <= 0x10FFFF) {
            // Four-byte UTF-8 character
            utf8_string += static_cast<char>((c >> 18) | 0xF0);
            utf8_string += static_cast<char>(((c >> 12) & 0x3F) | 0x80);
            utf8_string += static_cast<char>(((c >> 6) & 0x3F) | 0x80);
            utf8_string += static_cast<char>((c & 0x3F) | 0x80);
        }
        else {
            // Invalid character
            utf8_string += '\xEF';
            utf8_string += '\xBF';
            utf8_string += '\xBD';
        }
    }
    return utf8_string;
}


void test08(wstring c) {
    wstring t;
    for (int i = 0; i < c.length(); i++) {
        if ((unsigned)c[i] < 127) {
            t += (wchar_t)' ';
        }
        else {
            t += c[i];
        }
    }
    t.erase(remove_if(t.begin(), t.end(), [](wchar_t s) { return (unsigned)s < 127; }), t.end());
    cout << "test08你输入的汉字有: " << utf16_to_utf8(t) << endl;
    cout << "有" << count_if(t.begin(), t.end(), [](wchar_t s) {return (unsigned)s >= 127; }) << "个汉字" << endl;
}



//linux 下汉字数量不准  //适用于wIndows VS中的汉字提取和汉字数量统计
int IncludeChinese(char* s)
{
    // char* s = new char[c.length() + 1];

    // strcpy_s(s, c.length() + 1, c.c_str());
    char b;

    while (1)
    {
        b = *s++;
        //如果到字符串尾 则说明没有中文字符
        if (b == 0) break;
        //如果字符串高位为1  且下一字符高位
        //也是1 则有中文字符
        if (b & 0 * 80)
            if (*s & 0 * 80)
                return 1;
    }
    return 0;
}
void test07(string c) {

    char s[1024] = { 0 };
    for (int f = 0; f < c.length(); f++) {

        s[f] = c[f];

    }
    string t;
    string tm;
    int ecounts=0;
    long long time = 0;
    for (int i = 0; i < sizeof(s); i++) {
        if (s[i] >= 0 && s[i] <= 127) //不是全角字符
        {
            // s[i] = ' ';
             //cout << s[i] << endl;
            tm += s[i];
            ecounts++;
        }

        else time++;
        t += s[i];
    }

    t.erase(remove_if(t.begin(), t.end(), [](char s) { return (unsigned char)s < 127; }), t.end());
    t.erase(remove_if(t.begin(), t.end(), [](char s) { return (unsigned char)s == 32; }), t.end());
    ;//英文去空格
    //tm.erase(remove_if(tm.begin(), tm.end(), [](char s) { return (unsigned char)s == 32; }), tm.end());

    cout << "test07你输入的英文有: " << tm << endl;
    cout << "test07 英文个数是" << ecounts << endl;
    cout << "test07你输入的汉字有: " << t << endl;
    long long times;

    times = t.size();
    cout << "有" << (time / 2) << "个汉字" << endl;
    cout << "有t.size" << t.size() << "个汉字" << endl;
    cout << "有tm.size" << tm.size() << "个非汉字" << endl;
    cout << "有t.length" << t.length() << "个汉字" << endl;
    cout << "有sizeof(tm)" << sizeof(tm) << "个非汉字" << endl;
    cout << "有sizeof(t)" << sizeof(t) << "个汉字" << endl;
    cout << "有tm.length" << tm.length() << "个非汉字" << endl;
}


string 替换内容 (string 原字符,string 需要替换的字符 ,string 要替换成的内容) {

    if (原字符 == 需要替换的字符) {
        原字符 = 要替换成的内容;
    }

    return 原字符;

}

//用于新菜单的回答内容部分词语过滤替换
//适用于windows 十六进制方式提取分割汉字和统计汉字数量
string   过滤替换部分汉字或词语(string s) {
    string t;
    int count = 0;
    int ecount = 0;
    for (int i = 0; i < s.length(); i++) // UTF-16编码中，中文占用2个字节
    {
        if ((unsigned char)s[i] < 0x80) // ASCII字符的最高位为0，UTF-16编码为1字节
        {
            t.append("/");
            t.append(s.substr(i, 1));
            t.append("/");
            ecount++;
            t = 替换内容(t, "【", "");
            t = 替换内容(t, "】", "");
            t = 替换内容(t, "换", "");
            t = 替换内容(t, "行", "");
        }
        else if ((unsigned char)s[i] == 0xFFFE)  // 中文的第一个字节的最高位为0*FFFE，则为小端序，UTF-16编码为2字节
        {
            t.append(s.substr(i, 2));
            t.append("/");
            i += 1;


            t = 替换内容(t, "【", "");
            t = 替换内容(t, "】", "");
            t = 替换内容(t, "换", "");
            t = 替换内容(t, "行", "");
        }
        else if ((unsigned char)s[i] == 0xFEFF) {   // 文章开头为0xFEFF，则为大端序,UTF-16编码为2字节

            t.append(s.substr(2, i));
            t.append("/");
            i += 1;
            count++;

            t = 替换内容(t, "【", "");
            t = 替换内容(t, "】", "");
            t = 替换内容(t, "换", "");
            t = 替换内容(t, "行", "");
        }
        else if ((char)s[i] == 0x0020) {
            //ecount--;
        }
        else
        {
            t.append(s.substr(i, 2));
            t.append("/");
            i += 1;
            count++;


            t = 替换内容(t, "【", "");
            t = 替换内容(t, "】", "");
            t = 替换内容(t, "换", "");
            t = 替换内容(t, "行", "");
        }
    }
    //cout << t << endl;
    return t;

}