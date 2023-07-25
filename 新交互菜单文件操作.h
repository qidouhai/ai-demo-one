#pragma once

#include <iostream>

using namespace std;

#include <string>


#include <fstream>

#include<sstream>

#include <algorithm>

#include <map>

void 写入用户重新注册意愿(string 用户重新注册意愿);
string  读取用户重新注册意愿();

void 用户游客状态(string 用户游客身份);
void 用户注册账号信息(string 用户注册信息账号);

void 用户注册密码信息(string 用户注册信息密码);

void 用户注册性别信息(string 用户注册信息性别);



string 读取用户注册账号信息();

string 读取用户注册密码信息();

string 读取用户注册性别信息();

string 读取用户游客状态();

void 存储ai姓名(string ai起的姓名);
string  读取ai姓名();

void 存储ai性别(string ai选择的性别);
string  读取ai性别();

void 教学句子保存(string 教句子, string 教句子含义);
void 教对话保存(string 教对话上句, string 教对话下句);
void 教故事或文章保存(string 教故事或文章名字, string 教故事或文章内容);

int 读取教学句子保存数量();

 void 教学汉字和拼音保存(string 教汉字,string  教汉字拼音);

 void 教词语含义保存(string 教的词语, string 教词语含义);
 void 教词语词性保存(string 教的词语, string 教词语词性);
 int 读取汉字和拼音保存数量(); int 读取词语含义保存数量(); int 读取对话保存数量(); int 读取对话故事或文章保存数量();
 void 书写今天的生活保存(string  标题, string  内容);
 void 书写秘密(string  秘密名字, string  秘密内容); 
 void 书写离愁与思念(string 离愁思念名字, string 离愁思念内容);
