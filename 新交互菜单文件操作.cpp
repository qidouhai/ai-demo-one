#include "新交互菜单文件操作.h"

void 写入用户重新注册意愿(string 用户重新注册意愿) {
    string 用户重新注册意愿判定 = 用户重新注册意愿;
    ofstream  ofs;
    ofs.open("用户重新注册意愿.txt", ios::out | ios::trunc);
    ofs << 用户重新注册意愿判定 << endl;
    ofs.close();
}

string  读取用户重新注册意愿() {
    string 用户重新注册意愿判定;
    string 文件不存在 = "文件不存在";
    ifstream  ifs;
    ifs.open("用户重新注册意愿.txt", ios::in);
    if (!ifs.is_open()) {
       
        return 文件不存在;
    }else{
   
    ifs >> 用户重新注册意愿判定;
    ifs.close();

    return 用户重新注册意愿判定;
    }
}

void 用户游客状态(string 用户游客身份) {
	string 用户游客身份判定 = 用户游客身份;
    ofstream  ofs;
    ofs.open("用户游客状态.txt", ios::out | ios::trunc);
    ofs << 用户游客身份判定 << endl;
    ofs.close();
}

string  读取用户游客状态() {
    string 用户游客身份判定;
    string 文件不存在 = "文件不存在";
    ifstream  ifs;
    ifs.open("用户游客状态.txt", ios::in);
    if (!ifs.is_open()) {
        
        return 文件不存在;
    }else{
       
        ifs >> 用户游客身份判定;
        ifs.close();

        return 用户游客身份判定;
    }
   
}

void 用户注册账号信息(string 用户注册信息账号) {
    string 用户账号注册 = 用户注册信息账号;
    ofstream  ofs;
    ofs.open("用户账号.txt", ios::out | ios::trunc);
    ofs << 用户账号注册 << endl;
    ofs.close();
}

string 读取用户注册账号信息() {
    string 用户账号注册;
    string 文件不存在 = "文件不存在";
    ifstream  ifs;
    ifs.open("用户账号.txt", ios::in);
    if (!ifs.is_open()) {
      

        return 文件不存在;
    }else{
        
        ifs >> 用户账号注册;
        ifs.close();
        return 用户账号注册;
    }
    
}


void 用户注册密码信息(string 用户注册信息密码) {
    string 用户密码注册 = 用户注册信息密码;
    ofstream  ofs;
    ofs.open("用户密码.txt", ios::out | ios::trunc);
    ofs << 用户密码注册 << endl;
    ofs.close();
}

string 读取用户注册密码信息() {
    string 用户密码注册;
    string 文件不存在 = "文件不存在";
    ifstream  ifs;
    ifs.open("用户密码.txt", ios::in);
    if (!ifs.is_open()) {
        
        return 文件不存在;
    }
    else {
        
        ifs >> 用户密码注册;
        ifs.close();
        return 用户密码注册;
    }
    
    
}

void 用户注册性别信息(string 用户注册信息性别) {
    string 用户性别注册 = 用户注册信息性别;
    ofstream  ofs;
    ofs.open("用户性别.txt", ios::out | ios::trunc);
    ofs << 用户性别注册 << endl;
    ofs.close();
}
string 读取用户注册性别信息() {
    string 用户性别注册;
    string 文件不存在 = "文件不存在";
    ifstream  ifs;
    ifs.open("用户性别.txt", ios::in);
    if (!ifs.is_open()) {
      
        return 文件不存在;
    }
    else {
        
        ifs >> 用户性别注册;
        ifs.close();
        return 用户性别注册;
    }
   
}





void 存储ai姓名(string ai起的姓名) {
    string ai存储姓名 = ai起的姓名;
    ofstream  ofs;
    ofs.open("ai姓名.txt", ios::out | ios::trunc);
    ofs << ai存储姓名 << endl;
    ofs.close();
}
string  读取ai姓名() {
    string ai姓名;
    string 文件不存在 = "文件不存在";
    ifstream  ifs;
    ifs.open("ai姓名.txt", ios::in);
    if (!ifs.is_open()) {
        
        
        return 文件不存在;
    }else{
        
        ifs >> ai姓名;
        ifs.close();
        return ai姓名;
    }
    
}

void 存储ai性别(string ai选择的性别) {
    string ai存储性别 = ai选择的性别;
    ofstream  ofs;
    ofs.open("ai性别.txt", ios::out | ios::trunc);
    ofs << ai存储性别 << endl;
    ofs.close();
}
string  读取ai性别() {
    string ai性别;
    string 文件不存在 = "文件不存在";
    ifstream  ifs;
    ifs.open("ai性别.txt", ios::in);
    if (!ifs.is_open()) {
       

        return 文件不存在;
    }
    else {
       
        ifs >> ai性别;
        ifs.close();
        return ai性别;
    }
    
}
void 教学汉字和拼音保存(string 教汉字, string  教汉字拼音) {
    map<string, string>教汉字和拼音保存dict;
    教汉字和拼音保存dict[教汉字] = 教汉字拼音;

    ofstream file("教学汉字和拼音保存.txt", ios::app); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : 教汉字和拼音保存dict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "教学汉字和拼音保存成功" << endl;
    }
    else {
        std::cerr << "教学汉字和拼音保存失败" << endl;
    }
}

int 读取汉字和拼音保存数量() {
    ifstream  ifs;
    int 文件不存在 = 0;
    string 内容;
    ifs.open("教学汉字和拼音保存.txt", ios::in);
    if (!ifs.is_open()) {
       
        return 文件不存在;
    }
    else {
        
        int 保存数量 = 0;
        while (getline(ifs, 内容)) {
            保存数量++;
        }

        ifs.close();
        return 保存数量;
    }
    
}

void 教词语含义保存(string 教的词语, string 教词语含义) {
    map<string, string>教词语含义保存dict;
    教词语含义保存dict[教的词语] = 教词语含义;

    ofstream file("教词语含义保存.txt", ios::app); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : 教词语含义保存dict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "教词语含义保存成功" << endl;
    }
    else {
        std::cerr << "教词语含义保存失败" << endl;
    }
}

int 读取词语含义保存数量() {
    ifstream  ifs;
    int 文件不存在 = 0;
    string 内容;
    ifs.open("教词语含义保存.txt", ios::in);
    if (!ifs.is_open()) {
        
        return 文件不存在;
    }else{
        
        int 保存数量 = 0;
        while (getline(ifs, 内容)) {
            保存数量++;
        }

        ifs.close();
        return 保存数量;
    }
    
}

void 教词语词性保存(string 教的词语, string 教词语词性) {
    map<string, string>教词语词性保存dict;
    教词语词性保存dict[教的词语] = 教词语词性;

    ofstream file("教词语词性保存.txt", ios::app); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : 教词语词性保存dict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "教词语词性保存成功" << endl;
    }
    else {
        std::cerr << "教词语词性保存失败" << endl;
    }
}


void 教学句子保存(string 教句子, string 教句子含义) {
    map<string, string>教句子保存dict;
    教句子保存dict[教句子] = 教句子含义;
    
    ofstream file("教学句子保存.txt" ,ios::app); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : 教句子保存dict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "教学句子保存成功" << endl;
    }
    else {
        std::cerr << "教学句子保存失败" << endl;
    }
}

int 读取教学句子保存数量() {
    ifstream  ifs;
    int 文件不存在 = 0;
    string 内容;
    ifs.open("教学句子保存.txt", ios::in);
    if (!ifs.is_open()) {
        
        return 文件不存在;
    }
    else {
        
        int 保存数量 = 0;
        while (getline(ifs, 内容)) {
            保存数量++;
        }

        ifs.close();
        return 保存数量;

    }
    
}

void 教对话保存(string 教对话上句, string 教对话下句) {
    map<string, string>教对话保存dict;
    教对话保存dict[教对话上句] = 教对话下句;

    ofstream file("教对话保存.txt", ios::app); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : 教对话保存dict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "教对话保存成功" << endl;
    }
    else {
        std::cerr << "教对话保存失败" << endl;
    }
}
int 读取对话保存数量() {
    ifstream  ifs;
    int 文件不存在 = 0;
    string 内容;
    ifs.open("教对话保存.txt", ios::in);
    if (!ifs.is_open()) {
        
        return 文件不存在;
    }
    else {
       
        int 保存数量 = 0;
        while (getline(ifs, 内容)) {
            保存数量++;
        }

        ifs.close();
        return 保存数量;

    }
    
}


void 教故事或文章保存(string 教故事或文章名字, string 教故事或文章内容) {
    map<string, string>教故事或文章保存dict;
    教故事或文章保存dict[教故事或文章名字] = 教故事或文章内容;

    ofstream file("教故事或文章保存.txt", ios::app); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : 教故事或文章保存dict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "教故事或文章保存成功" << endl;
    }
    else {
        std::cerr << "教故事或文章保存失败" << endl;
    }
}

int 读取对话故事或文章保存数量() {
    ifstream  ifs;
    int 文件不存在 = 0;
    string 内容;
    ifs.open("教故事或文章保存.txt", ios::in);
    if (!ifs.is_open()) {
       
        return  文件不存在;
    }
    else {
        
        int 保存数量 = 0;
        while (getline(ifs, 内容)) {
            保存数量++;
        }

        ifs.close();
        return 保存数量;

    }
    
}

void 书写今天的生活保存(string  标题, string  内容) {
    map<string, string>书写今天的生活保存dict;
    书写今天的生活保存dict[标题] = 内容;

    ofstream file("书写今天的生活保存.txt", ios::app); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : 书写今天的生活保存dict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "书写今天的生活保存成功" << endl;
    }
    else {
        std::cerr << "书写今天的生活保存失败" << endl;
    }
}

void 书写秘密(string  秘密名字, string  秘密内容) {
    map<string, string>书写秘密dict;
    书写秘密dict[秘密名字] = 秘密名字;

    ofstream file("书写秘密.txt", ios::app); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : 书写秘密dict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "书写秘密保存成功" << endl;
    }
    else {
        std::cerr << "书写秘密保存失败" << endl;
    }
}

void 书写离愁与思念(string 离愁思念名字, string 离愁思念内容) {
    map<string, string>书写离愁与思念dict;
    书写离愁与思念dict[离愁思念名字] = 离愁思念内容;

    ofstream file("书写离愁与思念.txt", ios::app); // 打开一个文件进行写入操作
    if (file.is_open()) { // 如果文件成功打开
        for (const auto& pair : 书写离愁与思念dict) { // 遍历字典中的所有元素
            file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
        }
        file.close(); // 关闭文件
        cout << "书写离愁与思念保存成功" << endl;
    }
    else {
        std::cerr << "书写离愁与思念保存失败" << endl;
    }
}


