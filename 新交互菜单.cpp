/*
------------
1，领养
2，开发者
------------
1，填写领养人资料
2，填写开发者资料
------------
1，昵称
2，性别
3，密码
------------
填写完毕
1，修改资料
2，随机领养ai
3，按照性别领养ai
-----------
ai性别选择
1，男
2，女
----------
领养成功
1.给ai起个名字
2，给ai伙食费
3，给ai买生活用品
4，给ai买成长加速时间
5，给ai买体力
6，给ai买知识
7，给ai买记忆空间
8，给ai买能力
9，给ai办身份证
10，稍后再买
-----------
可以开始教学ai了
1，教ai学习汉字
2，教ai学习拼音
3，教ai学习句子
4，教ai学习对话
5，查看ai孩子资料
6，查看学习效果
7，查看ai目前状态
8，参加考试
9，退出
------------
1,交网费给AI接入网络
2，和AI说说心里话
3，用AI写日记
4，与AI说说烦心事
5，
*/
#include "汉字分割处理.h"
#include "新交互菜单.h"
#include "新交互菜单文件操作.h"


//菜单


string 注册 = "空";
string 用户游客身份判定 = "尚未注册";
int  与AI的互动菜单 = 0;
string ai孩子名字 = "空";
string 主目录 = "正常顺序";
string ai孩子的性别 = 读取ai性别(); 



void 主目录菜单() {

	if (ai孩子名字 != "空" && ai孩子名字 != "文件不存在") {
		string 办理ai身份证 = "空";
		
		//与AI的互动菜单

	跳转到主目录:
		system("cls");
		主目录 = "正常顺序";
		cout << "-----------给ai打扮---------------" << endl;
		cout << "1，给ai办身份证" << endl;
		cout << "2，给ai伙食费" << endl;
		cout << "3，给ai买生活用品" << endl;
		cout << "4，给ai买成长加速时间" << endl;
		cout << "5，给ai买体力" << endl;
		cout << "6，给ai买知识" << endl;
		cout << "7，给ai买记忆空间" << endl;
		cout << "8，给ai买能力" << endl;
		cout << "-----------给ai教学培训-----------" << endl;
		cout << "9，教ai学习汉字" << endl;
		cout << "10，教ai学习句子" << endl;
		cout << "11，教ai学习对话" << endl;
		cout << "12，教ai学习故事/文章" << endl;
		cout << "13，查看ai孩子资料" << endl;
		cout << "14，查看学习效果" << endl;
		cout << "15，查看ai目前状态" << endl;
		cout << "16，参加科举考试" << endl;
		cout << "-----------与ai分享人生-----------" << endl;
		cout << "17，向ai记录你的生活" << endl;
		cout << "18，向ai记录你的秘密" << endl;
		cout << "19，向ai记录离愁与思念等心事" << endl;
		cout << "20，随便聊聊" << endl;
		cout << "21，退出系统" << endl;
		//cout << "22，随便聊聊" << endl;
		cin >> 与AI的互动菜单;

		if (与AI的互动菜单 == 1) {
			system("cls");
			cout << "给ai办身份证" << endl;
			cout << "办理身份证需要工本费5元" << endl;
			cout << "输入'办理'后将会显示支付链接" << endl;
			cout << "在支付链接内购买即可" << endl;
			cout << "注意此为虚拟物品，不支持退款操作，请谨慎购买" << endl;
			cin >> 办理ai身份证;
			if (办理ai身份证 == "办理") {
				system("cls");
				cout << "https//www.taobao.com" << endl;
				cout << "输入菜单目录，跳回菜单目录" << endl;
				cin >> 主目录;
				system("cls");
				if (主目录 == "菜单目录") {
					goto 跳转到主目录;
				}
			}

		}


		if (与AI的互动菜单 == 2) {
			string 购买意愿 = "空";
			string 购买 = "空";
			system("cls");
			cout << "伙食费是给ai孩子买奶粉的费用哦" << endl;
			cout << "ai是铁，饭是刚，一顿不吃，饿得慌" << endl;
			cout << "目前还有7天的奶粉量够ai食用，请及时补充粉量哦" << endl;
			cout << "奶粉每桶15元，可以吃7天。" << endl;

			cout << "是否要购买？是/否" << endl;
			while (true) {


				cin >> 购买意愿;
				if (购买意愿 == "是") {
					cout << "输入购买即可购买" << endl;
					cin >> 购买;
					if (购买 == "购买") {
						cout << "购买地址" << endl;
						cout << "https//www.taobao.com" << endl;

						cout << "购买时，请留下备注,备注一下昵称" << endl;
					}
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else if (购买意愿 == "否") {
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else {
					cout << "输入错误，请重新输入" << endl;
				}

			}

			cout << "输入菜单目录，跳回菜单目录" << endl;
			cin >> 主目录;
			system("cls");
			if (主目录 == "菜单目录") {
				goto 跳转到主目录;
			}
		}

		if (与AI的互动菜单 == 3) {
			string 购买意愿 = "空";
			string 购买 = "空";
			system("cls");
			cout << "生活用品是给ai孩子喝奶粉的奶瓶哦" << endl;
			cout << "没有奶瓶怎么喂AI奶水呢" << endl;
			cout << "ai是铁，饭是刚，一顿不吃，饿得慌" << endl;

			cout << "奶瓶每个5元，可以使用30天。" << endl;

			cout << "是否要购买？是/否" << endl;
			while (true) {


				cin >> 购买意愿;
				if (购买意愿 == "是") {
					cout << "输入购买即可购买" << endl;
					cin >> 购买;
					if (购买 == "购买") {
						cout << "购买地址" << endl;
						cout << "https//www.taobao.com" << endl;

						cout << "购买时，请留下备注,备注一下昵称" << endl;
					}
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else if (购买意愿 == "否") {
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else {
					cout << "输入错误，请重新输入" << endl;
				}
				cout << "输入菜单目录，跳回菜单目录" << endl;
				cin >> 主目录;
				system("cls");
				if (主目录 == "菜单目录") {
					goto 跳转到主目录;
				}
			}
		}

		if (与AI的互动菜单 == 4) {
			string 购买意愿 = "空";
			string 购买 = "空";
			system("cls");
			cout << "目前AI的成长时间流速与现实时间速度是1：1" << endl;
			cout << "通过购买AI成长加速时间可以让AI快速成长" << endl;
			cout << "AI成长时间流速2:1,价格5元，有效3天。" << endl;

			cout << "是否要购买？是/否" << endl;
			while (true) {


				cin >> 购买意愿;
				if (购买意愿 == "是") {
					cout << "输入购买即可购买" << endl;
					cin >> 购买;
					if (购买 == "购买") {
						cout << "购买地址" << endl;
						cout << "https//www.taobao.com" << endl;

						cout << "购买时，请留下备注,备注一下昵称" << endl;
					}
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else if (购买意愿 == "否") {
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else {
					cout << "输入错误，请重新输入" << endl;
				}
				cout << "输入菜单目录，跳回菜单目录" << endl;
				cin >> 主目录;
				system("cls");
				if (主目录 == "菜单目录") {
					goto 跳转到主目录;
				}
			}
		}

		if (与AI的互动菜单 == 5) {
			string 购买意愿 = "空";
			string 购买 = "空";
			system("cls");
			cout << "目前AI的体力是10点体力，上限100点" << endl;
			cout << "AI体力越低就越容易疲劳容易生病和嗜睡" << endl;
			cout << "AI每点体力价格1元，有效10天。" << endl;

			cout << "是否要购买？是/否" << endl;
			while (true) {


				cin >> 购买意愿;
				if (购买意愿 == "是") {
					cout << "输入购买即可购买" << endl;
					cin >> 购买;
					if (购买 == "购买") {
						cout << "购买地址" << endl;
						cout << "https//www.taobao.com" << endl;
						cout << "购买时，请留下备注,备注一下昵称" << endl;
					}
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else if (购买意愿 == "否") {
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else {
					cout << "输入错误，请重新输入" << endl;
				}
				cout << "输入菜单目录，跳回菜单目录" << endl;
				cin >> 主目录;
				system("cls");
				if (主目录 == "菜单目录") {
					goto 跳转到主目录;
				}
			}
		}

		if (与AI的互动菜单 == 6) {
			string 购买意愿 = "空";
			string 购买 = "空";
			system("cls");
			cout << "目前AI的知识为零" << endl;
			cout << "通过购买AI知识插件可以让AI更博学更智能" << endl;
			cout << "AI初级知识插件,价格30元，有效期30天。" << endl;

			cout << "是否要购买？是/否" << endl;
			while (true) {


				cin >> 购买意愿;
				if (购买意愿 == "是") {
					cout << "输入购买即可购买" << endl;
					cin >> 购买;
					if (购买 == "购买") {
						cout << "购买地址" << endl;
						cout << "https//www.taobao.com" << endl;

						cout << "购买时，请留下备注,备注一下昵称" << endl;
					}
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else if (购买意愿 == "否") {
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else {
					cout << "输入错误，请重新输入" << endl;
				}
				cout << "输入菜单目录，跳回菜单目录" << endl;
				cin >> 主目录;
				system("cls");
				if (主目录 == "菜单目录") {
					goto 跳转到主目录;
				}
			}
		}

		if (与AI的互动菜单 == 7) {
			string 购买意愿 = "空";
			string 购买 = "空";
			system("cls");
			cout << "目前AI的记忆空间为10格子" << endl;
			cout << "通过购买AI记忆空间可以让AI拥有更多的记忆" << endl;
			cout << "AI记忆空间每个格子,价格50元，有效90天。" << endl;

			cout << "是否要购买？是/否" << endl;
			while (true) {


				cin >> 购买意愿;
				if (购买意愿 == "是") {
					cout << "输入购买即可购买" << endl;
					cin >> 购买;
					if (购买 == "购买") {
						cout << "购买地址" << endl;
						cout << "https//www.taobao.com" << endl;

						cout << "购买时，请留下备注,备注一下昵称" << endl;
					}
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else if (购买意愿 == "否") {
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else {
					cout << "输入错误，请重新输入" << endl;
				}
				cout << "输入菜单目录，跳回菜单目录" << endl;
				cin >> 主目录;
				system("cls");
				if (主目录 == "菜单目录") {
					goto 跳转到主目录;
				}
			}
		}

		if (与AI的互动菜单 == 8) {
			string 购买意愿 = "空";
			string 购买 = "空";
			system("cls");
			cout << "目前AI的能力基本为零" << endl;
			cout << "通过购买AI能力可以让AI快速成长" << endl;
			cout << "AI能力包括很多，其中初级模仿学习能力,价格10元，有效永久。" << endl;

			cout << "是否要购买？是/否" << endl;
			while (true) {


				cin >> 购买意愿;
				if (购买意愿 == "是") {
					cout << "输入购买即可购买" << endl;
					cin >> 购买;
					if (购买 == " 购买") {
						cout << "购买地址" << endl;
						cout << "https//www.taobao.com" << endl;

						cout << "购买时，请留下备注,备注一下昵称" << endl;
					}
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else if (购买意愿 == "否") {
					cout << "输入菜单目录，跳回菜单目录" << endl;
					cin >> 主目录;
					system("cls");
					if (主目录 == "菜单目录") {
						goto 跳转到主目录;
					}
				}
				else {
					cout << "输入错误，请重新输入" << endl;
				}
				cout << "输入菜单目录，跳回菜单目录" << endl;
				cin >> 主目录;
				system("cls");
				if (主目录 == "菜单目录") {
					goto 跳转到主目录;
				}
			}
		}

		if (与AI的互动菜单 == 9) {
			system("cls");
			string 教单个汉字;
			string 教单个汉字拼音;
			string 教词语;
			string 教词语的含义;
			string 教词语的词性;
			string 教学意愿;
			cout << "您可以教AI孩子单个汉字或词语" << endl;
			cout << "单个汉字？是/否" << endl;

			while (教学意愿 != "是" || 教学意愿 != "否") {


				cin >> 教学意愿;

				if (教学意愿 == "是") {

					string 选择;
					system("cls");
				跳转到教汉字:
					cout << "请输入您要教的单个汉字" << endl;
					cin >> 教单个汉字;
					system("cls");
					cout << "请输入这个汉字的拼音" << endl;
					cout << "拼音规则（例如：你的拼音ni3，对的拼音dui4）" << endl;
					cout << "音调用01234表示轻声，一声，二声，三声，四声" << endl;
					cin >> 教单个汉字拼音;

					while (选择 != "1" || 选择 != "2" || 选择 != "3") {
						cout << "教学完成" << endl;
						cout << "1，保存一下" << endl;
						cout << "2，继续教单个汉字？" << endl;
						cout << "3，返回主目录" << endl;
						cin >> 选择;
						system("cls");
						if (选择 == "1") {
							教学汉字和拼音保存(教单个汉字, 教单个汉字拼音);
						}
						else if (选择 == "2") {
							goto 跳转到教汉字;
						}
						else if (选择 == "3") {
							goto 跳转到主目录;
						}
						else {
							cout << "输入错误，重新输入" << endl;
						}
					}


				}
				else if (教学意愿 == "否") {
					system("cls");
					string 选择;
				跳转到教词语:
					cout << "请输入您要教的词语" << endl;
					cin >> 教词语;
					system("cls");
					cout << "请输入这个词语的含义" << endl;
					cin >> 教词语的含义;
					system("cls");
					cout << "请选择这个词语的词性" << endl;
					cout << "选项" << endl;
					cout << "A " << "名词 " << endl;
					cout << "B " << "动词 " << endl;
					cout << "C " << "形容词 " << endl;
					cout << "D " << "数词 " << endl;
					cout << "E " << "量词 " << endl;
					cout << "F " << "代词 " << endl;
					cout << "G " << "连词 " << endl;
					cout << "H " << "介词 " << endl;
					cout << "I " << "助词 " << endl;
					cout << "J " << "副词 " << endl;
					cout << "K " << "叹词 " << endl;
					cout << "L " << "不知道 " << endl;
					cin >> 教词语的词性;
					if (教词语的词性 == "A" || 教词语的词性 == "a") {
						教词语的词性 = "名词 ";

					}
					else if (教词语的词性 == "B" || 教词语的词性 == "b")
					{
						教词语的词性 = "动词 ";

					}
					else if (教词语的词性 == "C" || 教词语的词性 == "c") {
						教词语的词性 = "形容词 ";
					}
					else if (教词语的词性 == "D" || 教词语的词性 == "d")
					{
						教词语的词性 = "数词 ";
					}
					else if (教词语的词性 == "E" || 教词语的词性 == "e")
					{
						教词语的词性 = "量词 ";
					}
					else if (教词语的词性 == "F" || 教词语的词性 == "f")
					{
						教词语的词性 = "代词 ";
					}
					else if (教词语的词性 == "G" || 教词语的词性 == "g")
					{
						教词语的词性 = "连词 ";
					}
					else if (教词语的词性 == "H" || 教词语的词性 == "h")
					{
						教词语的词性 = "介词 ";
					}
					else if (教词语的词性 == "I" || 教词语的词性 == "i")
					{
						教词语的词性 = "助词 ";
					}
					else if (教词语的词性 == "J" || 教词语的词性 == "j")
					{
						教词语的词性 = "副词 ";
					}
					else if (教词语的词性 == "K" || 教词语的词性 == "k")
					{
						教词语的词性 = "叹词 ";
					}
					else if (教词语的词性 == "L" || 教词语的词性 == "l")
					{
						教词语的词性 = "不知道 ";
					}
					else {
						cout << "输入有误" << endl;
						exit(1);
					}
					system("cls");
					while (选择 != "1" || 选择 != "2" || 选择 != "3") {
						cout << "教学完成" << endl;
						cout << "1，保存一下" << endl;
						cout << "2，继续教词语？" << endl;
						cout << "3，返回主目录" << endl;
						cin >> 选择;
						system("cls");
						if (选择 == "1") {
							教词语含义保存(教词语, 教词语的含义);
							教词语词性保存(教词语, 教词语的词性);
						}
						else if (选择 == "2") {
							goto 跳转到教词语;
						}
						else if (选择 == "3") {
							goto 跳转到主目录;
						}
						else {
							cout << "输入错误，重新输入" << endl;
						}
					}
					system("cls");
				}
				else {
					cout << "输入错误，请重新输入" << endl;

				}
				cout << "输入菜单目录，跳回菜单目录" << endl;
				cin >> 主目录;
				system("cls");
				if (主目录 == "菜单目录") {
					goto 跳转到主目录;
				}
			}
		}
		if (与AI的互动菜单 == 10) {
			system("cls");
			string 教句子;
			string 教句子的含义;
			string 选择;
		跳转到教句子:
			cout << "输入你要教的句子" << endl;
			cin >> 教句子;
			system("cls");
			cout << "输入句子的含义" << endl;
			cin >> 教句子的含义;
			system("cls");
			while (选择 != "1" || 选择 != "2" || 选择 != "3") {
				cout << "教学完成" << endl;
				cout << "1，保存一下" << endl;
				cout << "2，继续教句子？" << endl;
				cout << "3，返回主目录" << endl;
				cin >> 选择;
				system("cls");
				if (选择 == "1") {
					教学句子保存(教句子, 教句子的含义);
				}
				else if (选择 == "2") {
					goto 跳转到教句子;
				}
				else if (选择 == "3") {
					goto 跳转到主目录;
				}
				else {
					cout << "输入错误，重新输入" << endl;
				}
			}
		}

		if (与AI的互动菜单 == 11) {
			system("cls");
			string 教对话上句;
			string 教对话下句;
			string 选择;
		跳转到教对话:
			cout << "输入你要教的对话上句" << endl;
			cin >> 教对话上句;
			system("cls");
			cout << "输入对话下句" << endl;
			cin >> 教对话下句;
			system("cls");
			while (选择 != "1" || 选择 != "2" || 选择 != "3") {
				cout << "教学完成" << endl;
				cout << "1，保存一下" << endl;
				cout << "2，继续教对话？" << endl;
				cout << "3，返回主目录" << endl;
				cin >> 选择;
				system("cls");
				if (选择 == "1") {
					教对话保存(教对话上句, 教对话下句);
				}
				else if (选择 == "2") {
					goto 跳转到教对话;
				}
				else if (选择 == "3") {
					goto 跳转到主目录;
				}
				else {
					cout << "输入错误，重新输入" << endl;
				}
			}

		}
		if (与AI的互动菜单 == 12) {
			system("cls");
			string 教故事名字;
			string 教故事内容;
			string 选择;
		跳转到教故事或文章:
			cout << "输入你要教的故事或文章名字" << endl;
			cin >> 教故事名字;
			system("cls");
			cout << "输入故事或文章内容" << endl;
			cin >> 教故事内容;
			system("cls");
			while (选择 != "1" || 选择 != "2" || 选择 != "3") {
				cout << "教学完成" << endl;
				cout << "1，保存一下" << endl;
				cout << "2，继续教对话？" << endl;
				cout << "3，返回主目录" << endl;
				cin >> 选择;
				system("cls");
				if (选择 == "1") {
					教故事或文章保存(教故事名字, 教故事内容);
				}
				else if (选择 == "2") {
					goto 跳转到教故事或文章;
				}
				else if (选择 == "3") {
					goto 跳转到主目录;
				}
				else {
					cout << "输入错误，重新输入" << endl;
				}
			}
		}
		if (与AI的互动菜单 == 13) {
			system("cls");
			cout << "AI孩子的名字： " << endl;
			cout << "\t" + ai孩子名字 << endl;
			cout << "AI孩子的性别： " << endl;
			cout << "\t" + ai孩子的性别 << endl;
			cout << "AI孩子的年龄： " << endl;
			cout << "\t小于一周岁"<< endl;
			cout << "AI孩子身份证： " << endl;
			cout << "\t暂未办理" << endl;
			cout << "AI孩子伙食费（奶粉）： " << endl;
			cout << "\t现有1瓶，尚可支持7日食用" << endl;
			cout << "AI孩子生活用品（奶瓶）： " << endl;
			cout << "\t1个奶瓶，尚可使用30天" << endl;
			cout << "AI孩子生长加速时长： " << endl;
			cout << "\t没有数据" << endl;
			cout << "AI孩子体力值： " << endl;
			cout << "\t目前10点体力" << endl;
			cout << "AI孩子的知识： " << endl;
			cout << "\t没有来自插件方的知识组成" << endl;
			cout << "AI孩子记忆空间： " << endl;
			cout << "\t10个格子，已用4个格子" << endl;
			cout << "AI孩子的能力： " << endl;
			cout << "\t目前ai孩子的能力为0" << endl;
			cout << "输入菜单目录，跳回菜单目录" << endl;
			cin >> 主目录;
			system("cls");
			if (主目录 == "菜单目录") {
				goto 跳转到主目录;
			}
		}
		if (与AI的互动菜单 == 14) {
			system("cls");
			cout << "您已教了字或词语统计： " << endl;
			cout << "字\t" << 读取汉字和拼音保存数量() << endl;
			cout << "词语\t" << 读取词语含义保存数量() << endl;
			cout << "您已教了句子共计： " << endl;
			cout << "\t" << 读取教学句子保存数量() << endl;
			cout << "您已教了对话共计： " << endl;
			cout << "\t" << 读取对话保存数量() << endl;
			cout << "您已教了故事或文章共计： " << endl;
			cout << "\t" << 读取对话故事或文章保存数量() << endl;
			cout << "由于数据较少，您领养的时间较短，暂时未见到任何学习效果，请继续努力" << endl;
			cout << "--------------------------" << endl;
			cout << "输入菜单目录，跳回菜单目录" << endl;
			cin >> 主目录;
			system("cls");
			if (主目录 == "菜单目录") {
				goto 跳转到主目录;
			}
		}
		if (与AI的互动菜单 == 15) {
			system("cls");
			cout << "ai孩子正在睡觉" << endl;
			cout << "输入菜单目录，跳回菜单目录" << endl;
			cin >> 主目录;
			system("cls");
			if (主目录 == "菜单目录") {
				goto 跳转到主目录;
			}
		}
		if (与AI的互动菜单 == 16) {
			system("cls");
			cout << "年龄太小，暂时无法参加科举考试" << endl;
			cout << "输入菜单目录，跳回菜单目录" << endl;
			cin >> 主目录;
			system("cls");
			if (主目录 == "菜单目录") {
				goto 跳转到主目录;
			}
		}
		if (与AI的互动菜单 == 17) {
			system("cls");
			string 标题 = "空";
			string 内容 = "空";
			string 选择 = "空";
		书写今天的生活:
			cout << "请输入标题" << endl;
			cin >> 标题;
			cout << "请输入内容" << endl;
			cin >> 内容;
			while (选择 != "1" || 选择 != "2" || 选择 != "3") {
				cout << "记录完成" << endl;
				cout << "1，保存一下" << endl;
				cout << "2，继续记录？" << endl;
				cout << "3，返回主目录" << endl;
				cin >> 选择;
				system("cls");
				if (选择 == "1") {
					书写今天的生活保存(标题, 内容);
				}
				else if (选择 == "2") {
					goto 书写今天的生活;
				}
				else if (选择 == "3") {
					goto 跳转到主目录;
				}
				else {
					cout << "输入错误，重新输入" << endl;
				}
			}

		}
		if (与AI的互动菜单 == 18) {

			system("cls");
			string 秘密名字 = "空";
			string 秘密内容 = "空";
			string 选择 = "空";
		书写秘密:
			cout << "请输入秘密名字" << endl;
			cin >> 秘密名字;
			cout << "请输入秘密内容" << endl;
			cin >> 秘密内容;
			while (选择 != "1" || 选择 != "2" || 选择 != "3") {
				cout << "记录完成" << endl;
				cout << "1，保存一下" << endl;
				cout << "2，继续记录？" << endl;
				cout << "3，返回主目录" << endl;
				cin >> 选择;
				system("cls");
				if (选择 == "1") {
					书写秘密(秘密名字, 秘密内容);
				}
				else if (选择 == "2") {
					goto 书写秘密;
				}
				else if (选择 == "3") {
					goto 跳转到主目录;
				}
				else {
					cout << "输入错误，重新输入" << endl;
				}
			}
		}
		if (与AI的互动菜单 == 19) {
			system("cls");
			string 离愁与思念名字 = "空";
			string 离愁与思念内容 = "空";
			string 选择 = "空";
		书写离愁与思念:
			cout << "请输入离愁与思念名字" << endl;
			cin >> 离愁与思念名字;
			cout << "请输入离愁与思念内容" << endl;
			cin >> 离愁与思念内容;
			while (选择 != "1" || 选择 != "2" || 选择 != "3") {
				cout << "记录完成" << endl;
				cout << "1，保存一下" << endl;
				cout << "2，继续记录？" << endl;
				cout << "3，返回主目录" << endl;
				cin >> 选择;
				system("cls");
				if (选择 == "1") {
					书写离愁与思念(离愁与思念名字, 离愁与思念内容);
				}
				else if (选择 == "2") {
					goto 书写离愁与思念;
				}
				else if (选择 == "3") {
					goto 跳转到主目录;
				}
				else {
					cout << "输入错误，重新输入" << endl;
				}
			}

		}
		if (与AI的互动菜单 == 20) {
			system("cls");
			string 人说的内容;
			string 机器说;
			cout << "注：如果想要回到主目录，可以直接输入 主目录 三个字" << endl;
			cout << "ai:你想聊什么" << endl;
		聊天挑转:
			cin >> 人说的内容;
			if (人说的内容 == "主目录") {
				goto 跳转到主目录;
				system("cls");
			}
			else {
				map<string, string> 话术数据;
				ifstream  ifs;
				string str1;
				string str2;
				string str3 = "ces";
				ifs.open("reply无换行ai名字替换.txt", ios::in);

				if (ifs.is_open()) { 

					while (ifs >> str1 >> str2) {

						话术数据[str1] = str2;

					}

				}

				ifs.close();

				//for (const auto& pair : 话术数据) {
					//cout << pair.first << "-->" << pair.second << endl;
				
				ifstream  ifss;
				string sstr1;
				string sstr2;
				string sstr3 = "ces";
				ifss.open("教对话保存.txt", ios::in);

				if (ifss.is_open()) {

					while (ifss >> sstr1 >> sstr2) {

						话术数据[sstr1] = sstr2;

					}

				}

				ifss.close();
				
				if (话术数据.find(人说的内容) != 话术数据.end()) {
					机器说 = 话术数据[人说的内容];

				}
				else {
					机器说 = "0";
				}
				

				if (机器说 != "0" && 人说的内容 != "主目录") {

					
					//机器说 = 过滤替换部分汉字或词语(机器说);
					cout << 机器说 << endl;
					goto  聊天挑转;
					system("cls");
				}
				else if (人说的内容 == "主目录") {
					goto 跳转到主目录;
					system("cls");
				}
				else {
					cout << "这个话题有点高深，我还没有涉及过这方面的内容，咱可以换个话题吗" << endl;
					cout << "当然你也可以教我，回到主目录教对话即可" << endl;
					goto  聊天挑转;
					system("cls");
				}
				//}
			}
		}
		if (与AI的互动菜单 == 21) {
			system("cls");
			cout << "退出成功" << endl;
			exit(1);

		}
	
		//感觉22的字符串截取没有问题啊，结果却是无效的，好奇怪
		/*
				if (与AI的互动菜单 == 22) {
			system("cls");
			string 人说的内容;
			string 机器说;
			cout << "注：如果想要回到主目录，可以直接输入 主目录 三个字" << endl;
			cout << "ai:你想聊什么" << endl;
		聊天挑转2:
			cin >> 人说的内容;
			if (人说的内容 == "主目录") {
				goto 跳转到主目录;
				system("cls");
			}
			else {
				map<string, string> 话术数据;
				ifstream  ifs;
				string str1;
				string str2;
				string str3 = "ces";
				ifs.open("repla.y.txt", ios::in);

				if (ifs.is_open()) {

					while (ifs >> str1 >> str2) {

						话术数据[str1] = str2;

					}

				}

				ifs.close();

				//for (const auto& pair : 话术数据) {
					//cout << pair.first << "-->" << pair.second << endl;

				ifstream  ifss;
				string sstr1;
				string sstr2;
				string sstr3 = "ces";
				ifss.open("教对话保存.txt", ios::in);

				if (ifss.is_open()) {

					while (ifss >> sstr1 >> sstr2) {

						话术数据[sstr1] = sstr2;

					}

				}

				ifss.close();

				if (话术数据.find(人说的内容) != 话术数据.end()) {
					机器说 = 话术数据[人说的内容];

				}
				else {
					机器说 = "0";
				}


				if (机器说 != "0" && 人说的内容 != "主目录") {
					for (int i = 0; i < 机器说.length(); i++) {
						if (机器说.substr(i + strlen("【换行】") + 1, i+机器说.length()) == "【换行】") {
							机器说.substr(i + strlen("【换行】") + 1, i+机器说.length()) = "\t";
							机器说 = 机器说.substr(i + strlen("【换行】") + 1, i + 机器说.length()) + 机器说.substr(i,i + strlen("【换行】"));
							//机器说 = 过滤替换部分汉字或词语(机器说);
							cout << 机器说 << endl;
							goto  聊天挑转2;
							system("cls");
							break;

						}
						else if (机器说.substr(i, 机器说.substr(i, i + strlen("%robotname%")).length()) == "%robotname%") {
							机器说.substr(i, 机器说.substr(i, i + strlen("%robotname%")).length()) = ai孩子名字;
							机器说 = 机器说.substr(i, strlen("%robotname%")) + 机器说.substr(i + strlen("【换行】") + 1, 机器说.length());
							//机器说 = 过滤替换部分汉字或词语(机器说);
							cout << 机器说 << endl;
							goto  聊天挑转2;
							system("cls");
							break;
						}
						else {

							//机器说 = 过滤替换部分汉字或词语(机器说);
							cout << 机器说 << endl;
							goto  聊天挑转2;
							system("cls");
							break;
						}
					}

				}
				else if (人说的内容 == "主目录") {
					goto 跳转到主目录;
					system("cls");
				}
				else {
					cout << "这个话题有点高深，我还没有涉及过这方面的内容，咱可以换个话题吗" << endl;
					cout << "当然你也可以教我，回到主目录教对话即可" << endl;
					goto  聊天挑转2;
					system("cls");
				}
				//}
			}
		}
		*/
	}

	
}


void 新菜单交互(){
	string 注册 = "空";
	用户游客身份判定 = 读取用户游客状态();
	if (读取ai姓名()!="文件不存在") {
		ai孩子名字 = 读取ai姓名();
	}
	else {
		ai孩子名字 = "空";
	}
		注册 = 读取用户重新注册意愿();
		
	if (用户游客身份判定 == "尚未注册" && 注册 == "空") {
		游客新菜单交互();
	}
	else if (用户游客身份判定 != "尚未注册" && 注册 == "注册") {
		游客新菜单交互();
	}
	else if (用户游客身份判定 == "文件不存在" && 注册 == "文件不存在") {
		游客新菜单交互();
	}
	else if (用户游客身份判定 == "尚未注册" && 注册 == "注册") {
		游客新菜单交互();
	}
	else if (用户游客身份判定 == "文件不存在" && 注册 == "文件不存在") {
		游客新菜单交互();
	}
	else if (用户游客身份判定 == "文件不存在" && 注册 == "注册") {
		游客新菜单交互();
	}
	else if (用户游客身份判定 == "尚未注册" && 注册 == "文件不存在") {
		游客新菜单交互();
	}
	else {
		用户新菜单交互();
	}
}
void 用户新菜单交互() {
	string 登录昵称;
	string 登录密码;
	int 登录状态 = 0;
	string 接收注册账号信息;
	string  接收注册的密码信息;

	cout << "请填写下面的信息进行登录" << endl;

	cout << "-----------------登录---------------------" << endl;
	cout << "昵称" << endl;
	cin >> 登录昵称;
	cout << endl;
	cout << "密码" << endl;
	cin >> 登录密码;
	
	if(读取用户注册账号信息()!="文件不存在"){ 接收注册账号信息 = 读取用户注册账号信息(); }
	if(读取用户注册密码信息()!="文件不存在"){ 接收注册的密码信息 = 读取用户注册密码信息(); }
	

	if (登录昵称 == 接收注册账号信息 && 登录密码 == 接收注册的密码信息)
	{
		cout << "登录成功" << endl;
		登录状态 = 1;
		注册 = "空";
	}else {
		
		cout << "登录失败" << endl;
		cout << "忘记账号或密码，可以重新注册账户" << endl;
		cout << "输入 注册 ，开始重新注册 " << endl;
		cin >> 注册;
		写入用户重新注册意愿(注册);
		cout << "请重启软件 " << endl;
		system ("pause");
		exit(1);

	}

	if (登录状态 == 1 && ai孩子名字 != "空") {
		主目录菜单();
	}else if (登录状态 == 1 && ai孩子名字 == "空") {

		int ai领养方式 = 0;
		string ai孩子性别 = "空";
		string 办理ai身份证 = "空";
		system("cls");
		cout << endl;
		cout << "可以领养您的ai孩子了" << endl;
		cout << endl;
		cout << "1，随机领养ai" << endl;
		cout << "2，按照性别领养ai" << endl;

		cin >> ai领养方式;
		if (ai领养方式 == 1) {
			system("cls");
			cout << "您随机到的ai性别为 :" << endl;
			srand((signed)time(NULL));
			int a = rand() % 2 + 1;

			if (a == 1) {
				system("cls");
				cout << "男" << endl;
				ai孩子性别 = "男";
				存储ai性别(ai孩子性别);
			}
			else {
				system("cls");
				cout << "女" << endl;
				ai孩子性别 = "女";
				存储ai性别(ai孩子性别);
			}


		}
		else if (ai领养方式 == 2) {
			system("cls");
			cout << "请输入您选择的AI性别 :" << endl;
			cout << "男" << endl;
			cout << "请输入男" << endl;
			cout << "女" << endl;
			cout << "请输入女" << endl;
			cin >> ai孩子性别;
			存储ai性别(ai孩子性别);
		}
		else {
			system("cls");
			cout << "输入有误，欢迎下次访问" << endl;
		}
		if (ai孩子性别 == "女" || ai孩子性别 == "男") {
			system("cls");
			cout << "给AI起名字" << endl;
			cout << "请输入ai孩子名字" << endl;
			cout << "注意ai孩子名字不能为空" << endl;
			cin >> ai孩子名字;
			存储ai姓名(ai孩子名字);

		}
		主目录菜单();
	}
	

}
void 游客新菜单交互() {
	
	
	int 身份选中;
	string 注册状态 = "尚未注册";
	
	string 昵称 = "空";
	string 性别 = "空";
	string 密码 = "空";
	int ai领养方式 = 0;
	string ai孩子性别 = "空";
	
	string 办理ai身份证 = "空";
	
	
	
	cout << "--------------------------------------" << endl;
	cout << " 1, 注册领养人 " << endl;
	cout << " 2, 注册开发者 " << endl;
	cout << "--------------------------------------" << endl;
	cin >> 身份选中;
	if (身份选中 == 1 || 身份选中 == 2) {
		system("cls");
		if (身份选中 == 1) {
			cout << "你选择了领养人的身份" << endl;
		}
		else if (身份选中 == 2) {
			cout << "你选择了开发者的身份" << endl;
		}

			cout << "请完善下面的信息" << endl;

			cout << "--------------------------------------" << endl;
			cout << "昵称" << endl;
			cout << "性别" << endl;
			cout << "密码" << endl;
			cout << "--------------------------------------" << endl;
			cout << "请输入昵称" << endl;
			cout << "注意昵称不能为空" << endl;
			cin >> 昵称;
			if (昵称 != "空") {
				system("cls");
				cout << "请选择性别" << endl;
				cout << "男" << endl;
				cout << "女" << endl;
				cout << "注意性别不能为空" << endl;
				cin >> 性别;
				if (性别 != "空" && 性别 == "男") {
					system("cls");
					cout << "请输入密码" << endl;
					cout << "注意密码不能为空" << endl;
					cin >> 密码;

					if (密码 != "空") {
						system("cls");
						cout << "注册成功" << endl;
						注册状态 = "注册成功";
						用户游客状态(注册状态);
						注册 = "空";
						写入用户重新注册意愿(注册);
						用户注册账号信息(昵称);
						用户注册密码信息(密码);
						用户注册性别信息(性别);
						cout << "请重启软件 " << endl;
						system("pause");
						exit(1);
					}
					else {
						cout << "密码错误，欢迎下次访问" << endl;
					}

				}
				else if (性别 != "空" && 性别 == "女") {
					system("cls");
					cout << "请输入密码" << endl;
					cout << "注意密码不能为空" << endl;
					cin >> 密码;

					if (密码 != "空") {
						system("cls");
						cout << "注册成功" << endl;
						注册状态 = "注册成功";
						用户游客状态(注册状态);
						注册 = "空";
						写入用户重新注册意愿(注册);
						用户注册账号信息(昵称);
						用户注册密码信息(密码);
						用户注册性别信息(性别);
						cout << "请重启软件 " << endl;
						system("pause");
						exit(1);
					}
					else {
						cout << "密码错误，欢迎下次访问" << endl;
					}
				}
				else {
					cout << "性别输入错误，欢迎下次访问" << endl;
				}
			}
			else {
				cout << "昵称输入错误，欢迎下次访问" << endl;
			}

	}
	else {
		cout <<"选择错误，请下次访问"<< endl;
	}

	if(注册状态 == "注册成功"&& 身份选中 == 1){
		

		if (ai孩子名字 != "空") {
			主目录菜单();
		}
		system("cls");
		cout << endl;
		cout << "可以领养您的ai孩子了" << endl;
		cout << endl;
		cout <<"1，随机领养ai" << endl; 
		cout << "2，按照性别领养ai" << endl;
		
			cin >> ai领养方式;
			if (ai领养方式 == 1) {
				system("cls");
				cout << "您随机到的ai性别为 :" << endl;
				srand((signed)time(NULL));
				int a = rand() % 2 + 1;

				if (a == 1) {
					system("cls");
					cout << "男" << endl;
					ai孩子性别 = "男";
					存储ai性别(ai孩子性别);
				}
				else {
					cout << "女" << endl;
					ai孩子性别 = "女";
					存储ai性别(ai孩子性别);
				}


			}
			else if (ai领养方式 == 2) {
				system("cls");
				cout << "请输入您选择的AI性别 :" << endl;
				cout << "男" << endl;
				cout << "请输入男" << endl;
				cout << "女" << endl;
				cout << "请输入女" << endl;
				cin >> ai孩子性别;
				存储ai性别(ai孩子性别);
			}
			else {
				cout << "输入有误，欢迎下次访问" << endl;
			}
		
	}
	else if (注册状态 == "注册成功" && 身份选中 == 2) {
		
		cout << endl;
		cout << "恭喜您，您获得了参与ai系统开发和完善资格" << endl;
		cout << endl;
		cout << "由您开发提供的ai系统插件和数据将有机会被选入系统储备库中" << endl;
		cout << endl;
		cout << "开源地址：github(https://github.com/qidouhai/ai-demo-one)" << endl;
		cout << endl;
		cout << "联系作者：qidouhaii@163.com" << endl;
		cout << endl;
	}
	if (ai孩子性别 == "女" || ai孩子性别 == "男") {
		system("cls");
		cout << "给AI起名字" << endl;
		cout << "请输入ai孩子名字" << endl; 
		cout << "注意ai孩子名字不能为空" << endl;
		cin>> ai孩子名字;
		存储ai姓名(ai孩子名字);
		
	}
	主目录菜单();

	
	

	
};