#include "汉语常用字字典.h"

//由于所有汉字有4万左右，所以先从现代汉语常用字(2500字)开始
//按照字的笔画分类
void 一画常用汉字() {
	multimap<string, string>yihuacyhanzidict;
	yihuacyhanzidict.insert({ "一画","一" });
	yihuacyhanzidict.insert({ "一画","乙" });

	ofstream file("一画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : yihuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "一画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "一画常用汉字初始化失败" << endl;
	}

}

//二画
void 二画常用汉字() {
	multimap<string, string>erhuacyhanzidict;
	erhuacyhanzidict.insert({ "二画","二" });
	erhuacyhanzidict.insert({ "二画","十" });
	erhuacyhanzidict.insert({ "二画","丁" });
	erhuacyhanzidict.insert({ "二画","厂" });
	erhuacyhanzidict.insert({ "二画","七" });


	erhuacyhanzidict.insert({ "二画","卜" });
	erhuacyhanzidict.insert({ "二画","人" });
	erhuacyhanzidict.insert({ "二画","入" });
	erhuacyhanzidict.insert({ "二画","八" });
	erhuacyhanzidict.insert({ "二画","九" });

	erhuacyhanzidict.insert({ "二画","几" });
	erhuacyhanzidict.insert({ "二画","儿" });
	erhuacyhanzidict.insert({ "二画","了" });
	erhuacyhanzidict.insert({ "二画","力" });
	erhuacyhanzidict.insert({ "二画","乃" });

	erhuacyhanzidict.insert({ "二画","刀" });
	erhuacyhanzidict.insert({ "二画","又" });


	ofstream file("二画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : erhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "二画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "二画常用汉字初始化失败" << endl;
	}
}


//三画
void 三画常用汉字() {
	multimap<string, string>sanhuacyhanzidict;
	sanhuacyhanzidict.insert({ "三画","三" });
	sanhuacyhanzidict.insert({ "三画","于" });
	sanhuacyhanzidict.insert({ "三画","干" });
	sanhuacyhanzidict.insert({ "三画","亏" });
	sanhuacyhanzidict.insert({ "三画","士" });


	sanhuacyhanzidict.insert({ "三画","工" });
	sanhuacyhanzidict.insert({ "三画","土" });
	sanhuacyhanzidict.insert({ "三画","才" });
	sanhuacyhanzidict.insert({ "三画","寸" });
	sanhuacyhanzidict.insert({ "三画","下" });

	sanhuacyhanzidict.insert({ "三画","大" });
	sanhuacyhanzidict.insert({ "三画","丈" });
	sanhuacyhanzidict.insert({ "三画","与" });
	sanhuacyhanzidict.insert({ "三画","万" });
	sanhuacyhanzidict.insert({ "三画","上" });

	sanhuacyhanzidict.insert({ "三画","小" });
	sanhuacyhanzidict.insert({ "三画","口" });
	sanhuacyhanzidict.insert({ "三画","巾" });
	sanhuacyhanzidict.insert({ "三画","山" });
	sanhuacyhanzidict.insert({ "三画","千" });

	sanhuacyhanzidict.insert({ "三画","乞" });
	sanhuacyhanzidict.insert({ "三画","川" });
	sanhuacyhanzidict.insert({ "三画","亿" });
	sanhuacyhanzidict.insert({ "三画","个" });
	sanhuacyhanzidict.insert({ "三画","勺" });

	sanhuacyhanzidict.insert({ "三画","久" });
	sanhuacyhanzidict.insert({ "三画","凡" });
	sanhuacyhanzidict.insert({ "三画","及" });
	sanhuacyhanzidict.insert({ "三画","夕" });
	sanhuacyhanzidict.insert({ "三画","丸" });

	sanhuacyhanzidict.insert({ "三画","么" });
	sanhuacyhanzidict.insert({ "三画","广" });
	sanhuacyhanzidict.insert({ "三画","亡" });
	sanhuacyhanzidict.insert({ "三画","门" });
	sanhuacyhanzidict.insert({ "三画","义" });

	sanhuacyhanzidict.insert({ "三画","之" });
	sanhuacyhanzidict.insert({ "三画","尸" });
	sanhuacyhanzidict.insert({ "三画","弓" });
	sanhuacyhanzidict.insert({ "三画","己" });
	sanhuacyhanzidict.insert({ "三画","已" });

	sanhuacyhanzidict.insert({ "三画","子" });
	sanhuacyhanzidict.insert({ "三画","卫" });
	sanhuacyhanzidict.insert({ "三画","也" });
	sanhuacyhanzidict.insert({ "三画","女" });
	sanhuacyhanzidict.insert({ "三画","飞" });

	sanhuacyhanzidict.insert({ "三画","刃" });
	sanhuacyhanzidict.insert({ "三画","习" });
	sanhuacyhanzidict.insert({ "三画","叉" });
	sanhuacyhanzidict.insert({ "三画","马" });
	sanhuacyhanzidict.insert({ "三画","乡" });

	ofstream file("三画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : sanhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "三画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "三画常用汉字初始化失败" << endl;
	}

}

//四画
void 四画常用汉字() {
	multimap<string, string>sihuacyhanzidict;
	sihuacyhanzidict.insert({ "四画","丰" });
	sihuacyhanzidict.insert({ "四画","王" });
	sihuacyhanzidict.insert({ "四画","井" });
	sihuacyhanzidict.insert({ "四画","开" });
	sihuacyhanzidict.insert({ "四画","夫" });

	sihuacyhanzidict.insert({ "四画","天" });
	sihuacyhanzidict.insert({ "四画","无" });
	sihuacyhanzidict.insert({ "四画","元" });
	sihuacyhanzidict.insert({ "四画","专" });
	sihuacyhanzidict.insert({ "四画","云" });

	sihuacyhanzidict.insert({ "四画","扎" });
	sihuacyhanzidict.insert({ "四画","艺" });
	sihuacyhanzidict.insert({ "四画","木" });
	sihuacyhanzidict.insert({ "四画","五" });
	sihuacyhanzidict.insert({ "四画","支" });

	sihuacyhanzidict.insert({ "四画","厅" });
	sihuacyhanzidict.insert({ "四画","不" });
	sihuacyhanzidict.insert({ "四画","太" });
	sihuacyhanzidict.insert({ "四画","犬" });
	sihuacyhanzidict.insert({ "四画","区" });

	sihuacyhanzidict.insert({ "四画","历" });
	sihuacyhanzidict.insert({ "四画","尤" });
	sihuacyhanzidict.insert({ "四画","友" });
	sihuacyhanzidict.insert({ "四画","匹" });
	sihuacyhanzidict.insert({ "四画","车" });

	sihuacyhanzidict.insert({ "四画","巨" });
	sihuacyhanzidict.insert({ "四画","牙" });
	sihuacyhanzidict.insert({ "四画","屯" });
	sihuacyhanzidict.insert({ "四画","比" });
	sihuacyhanzidict.insert({ "四画","互" });

	sihuacyhanzidict.insert({ "四画","切" });
	sihuacyhanzidict.insert({ "四画","瓦" });
	sihuacyhanzidict.insert({ "四画","止" });
	sihuacyhanzidict.insert({ "四画","少" });
	sihuacyhanzidict.insert({ "四画","日" });

	sihuacyhanzidict.insert({ "四画","中" });
	sihuacyhanzidict.insert({ "四画","冈" });
	sihuacyhanzidict.insert({ "四画","贝" });
	sihuacyhanzidict.insert({ "四画","内" });
	sihuacyhanzidict.insert({ "四画","水" });

	sihuacyhanzidict.insert({ "四画","见" });
	sihuacyhanzidict.insert({ "四画","午" });
	sihuacyhanzidict.insert({ "四画","牛" });
	sihuacyhanzidict.insert({ "四画","手" });
	sihuacyhanzidict.insert({ "四画","毛" });

	sihuacyhanzidict.insert({ "四画","气" });
	sihuacyhanzidict.insert({ "四画","升" });
	sihuacyhanzidict.insert({ "四画","长" });
	sihuacyhanzidict.insert({ "四画","仁" });
	sihuacyhanzidict.insert({ "四画","什" });

	sihuacyhanzidict.insert({ "四画","片" });
	sihuacyhanzidict.insert({ "四画","仆" });
	sihuacyhanzidict.insert({ "四画","化" });
	sihuacyhanzidict.insert({ "四画","仇" });
	sihuacyhanzidict.insert({ "四画","币" });

	sihuacyhanzidict.insert({ "四画","仍" });
	sihuacyhanzidict.insert({ "四画","仅" });
	sihuacyhanzidict.insert({ "四画","斤" });
	sihuacyhanzidict.insert({ "四画","爪" });
	sihuacyhanzidict.insert({ "四画","反" });

	sihuacyhanzidict.insert({ "四画","介" });
	sihuacyhanzidict.insert({ "四画","父" });
	sihuacyhanzidict.insert({ "四画","从" });
	sihuacyhanzidict.insert({ "四画","今" });
	sihuacyhanzidict.insert({ "四画","凶" });

	sihuacyhanzidict.insert({ "四画","分" });
	sihuacyhanzidict.insert({ "四画","乏" });
	sihuacyhanzidict.insert({ "四画","公" });
	sihuacyhanzidict.insert({ "四画","仓" });
	sihuacyhanzidict.insert({ "四画","月" });
	sihuacyhanzidict.insert({ "四画","氏" });

	sihuacyhanzidict.insert({ "四画","勿" });
	sihuacyhanzidict.insert({ "四画","欠" });
	sihuacyhanzidict.insert({ "四画","风" });
	sihuacyhanzidict.insert({ "四画","丹" });
	sihuacyhanzidict.insert({ "四画","匀" });


	sihuacyhanzidict.insert({ "四画","乌" });
	sihuacyhanzidict.insert({ "四画","凤" });
	sihuacyhanzidict.insert({ "四画","勾" });
	sihuacyhanzidict.insert({ "四画","文" });
	sihuacyhanzidict.insert({ "四画","六" });

	sihuacyhanzidict.insert({ "四画","方" });
	sihuacyhanzidict.insert({ "四画","火" });
	sihuacyhanzidict.insert({ "四画","为" });
	sihuacyhanzidict.insert({ "四画","斗" });
	sihuacyhanzidict.insert({ "四画","忆" });

	sihuacyhanzidict.insert({ "四画","订" });
	sihuacyhanzidict.insert({ "四画","计" });
	sihuacyhanzidict.insert({ "四画","户" });
	sihuacyhanzidict.insert({ "四画","认" });
	sihuacyhanzidict.insert({ "四画","心" });

	sihuacyhanzidict.insert({ "四画","尺" });
	sihuacyhanzidict.insert({ "四画","引" });
	sihuacyhanzidict.insert({ "四画","丑" });
	sihuacyhanzidict.insert({ "四画","巴" });
	sihuacyhanzidict.insert({ "四画","孔" });

	sihuacyhanzidict.insert({ "四画","队" });
	sihuacyhanzidict.insert({ "四画","办" });
	sihuacyhanzidict.insert({ "四画","以" });
	sihuacyhanzidict.insert({ "四画","允" });
	sihuacyhanzidict.insert({ "四画","予" });


	sihuacyhanzidict.insert({ "四画","劝" });
	sihuacyhanzidict.insert({ "四画","双" });
	sihuacyhanzidict.insert({ "四画","书" });
	sihuacyhanzidict.insert({ "四画","幻" });


	ofstream file("四画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : sihuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "四画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "四画常用汉字初始化失败" << endl;
	}


}


//五画
void 五画常用汉字() {
	multimap<string, string>wuhuacyhanzidict;
	wuhuacyhanzidict.insert({ "五画","玉" });
	wuhuacyhanzidict.insert({ "五画","刊" });
	wuhuacyhanzidict.insert({ "五画","示" });
	wuhuacyhanzidict.insert({ "五画","末" });
	wuhuacyhanzidict.insert({ "五画","未" });


	wuhuacyhanzidict.insert({ "五画","击" });
	wuhuacyhanzidict.insert({ "五画","打" });
	wuhuacyhanzidict.insert({ "五画","巧" });
	wuhuacyhanzidict.insert({ "五画","正" });
	wuhuacyhanzidict.insert({ "五画","扑" });

	wuhuacyhanzidict.insert({ "五画","扒" });
	wuhuacyhanzidict.insert({ "五画","功" });
	wuhuacyhanzidict.insert({ "五画","扔" });
	wuhuacyhanzidict.insert({ "五画","去" });
	wuhuacyhanzidict.insert({ "五画","甘" });

	wuhuacyhanzidict.insert({ "五画","世" });
	wuhuacyhanzidict.insert({ "五画","古" });
	wuhuacyhanzidict.insert({ "五画","节" });
	wuhuacyhanzidict.insert({ "五画","本" });
	wuhuacyhanzidict.insert({ "五画","术" });

	wuhuacyhanzidict.insert({ "五画","可" });
	wuhuacyhanzidict.insert({ "五画","丙" });
	wuhuacyhanzidict.insert({ "五画","左" });
	wuhuacyhanzidict.insert({ "五画","厉" });
	wuhuacyhanzidict.insert({ "五画","右" });

	wuhuacyhanzidict.insert({ "五画","石" });
	wuhuacyhanzidict.insert({ "五画","布" });
	wuhuacyhanzidict.insert({ "五画","龙" });
	wuhuacyhanzidict.insert({ "五画","平" });
	wuhuacyhanzidict.insert({ "五画","灭" });

	wuhuacyhanzidict.insert({ "五画","轧" });
	wuhuacyhanzidict.insert({ "五画","东" });
	wuhuacyhanzidict.insert({ "五画","卡" });
	wuhuacyhanzidict.insert({ "五画","北" });
	wuhuacyhanzidict.insert({ "五画","占" });

	wuhuacyhanzidict.insert({ "五画","业" });
	wuhuacyhanzidict.insert({ "五画","旧" });
	wuhuacyhanzidict.insert({ "五画","帅" });
	wuhuacyhanzidict.insert({ "五画","归" });

	wuhuacyhanzidict.insert({ "五画","且" });
	wuhuacyhanzidict.insert({ "五画","旦" });
	wuhuacyhanzidict.insert({ "五画","目" });
	wuhuacyhanzidict.insert({ "五画","叶" });
	wuhuacyhanzidict.insert({ "五画","甲" });

	wuhuacyhanzidict.insert({ "五画","申" });
	wuhuacyhanzidict.insert({ "五画","叮" });
	wuhuacyhanzidict.insert({ "五画","电" });
	wuhuacyhanzidict.insert({ "五画","号" });
	wuhuacyhanzidict.insert({ "五画","田" });

	wuhuacyhanzidict.insert({ "五画","由" });
	wuhuacyhanzidict.insert({ "五画","史" });
	wuhuacyhanzidict.insert({ "五画","只" });
	wuhuacyhanzidict.insert({ "五画","央" });
	wuhuacyhanzidict.insert({ "五画","兄" });

	wuhuacyhanzidict.insert({ "五画","叼" });
	wuhuacyhanzidict.insert({ "五画","叫" });
	wuhuacyhanzidict.insert({ "五画","另" });
	wuhuacyhanzidict.insert({ "五画","叨" });
	wuhuacyhanzidict.insert({ "五画","叹" });

	wuhuacyhanzidict.insert({ "五画","四" });
	wuhuacyhanzidict.insert({ "五画","生" });
	wuhuacyhanzidict.insert({ "五画","失" });
	wuhuacyhanzidict.insert({ "五画","禾" });
	wuhuacyhanzidict.insert({ "五画","丘" });

	wuhuacyhanzidict.insert({ "五画","付" });
	wuhuacyhanzidict.insert({ "五画","仗" });
	wuhuacyhanzidict.insert({ "五画","代" });
	wuhuacyhanzidict.insert({ "五画","仙" });
	wuhuacyhanzidict.insert({ "五画","们" });

	wuhuacyhanzidict.insert({ "五画","仪" });
	wuhuacyhanzidict.insert({ "五画","白" });
	wuhuacyhanzidict.insert({ "五画","仔" });
	wuhuacyhanzidict.insert({ "五画","他" });
	wuhuacyhanzidict.insert({ "五画","斥" });

	wuhuacyhanzidict.insert({ "五画","瓜" });
	wuhuacyhanzidict.insert({ "五画","乎" });
	wuhuacyhanzidict.insert({ "五画","丛" });
	wuhuacyhanzidict.insert({ "五画","令" });
	wuhuacyhanzidict.insert({ "五画","用" });

	wuhuacyhanzidict.insert({ "五画","甩" });
	wuhuacyhanzidict.insert({ "五画","印" });
	wuhuacyhanzidict.insert({ "五画","乐" });
	wuhuacyhanzidict.insert({ "五画","句" });
	wuhuacyhanzidict.insert({ "五画","匆" });

	wuhuacyhanzidict.insert({ "五画","册" });
	wuhuacyhanzidict.insert({ "五画","犯" });
	wuhuacyhanzidict.insert({ "五画","外" });
	wuhuacyhanzidict.insert({ "五画","处" });
	wuhuacyhanzidict.insert({ "五画","冬" });

	wuhuacyhanzidict.insert({ "五画","鸟" });
	wuhuacyhanzidict.insert({ "五画","务" });
	wuhuacyhanzidict.insert({ "五画","包" });
	wuhuacyhanzidict.insert({ "五画","饥" });
	wuhuacyhanzidict.insert({ "五画","主" });

	wuhuacyhanzidict.insert({ "五画","市" });
	wuhuacyhanzidict.insert({ "五画","立" });
	wuhuacyhanzidict.insert({ "五画","闪" });
	wuhuacyhanzidict.insert({ "五画","兰" });
	wuhuacyhanzidict.insert({ "五画","半" });

	wuhuacyhanzidict.insert({ "五画","汁" });
	wuhuacyhanzidict.insert({ "五画","汇" });
	wuhuacyhanzidict.insert({ "五画","头" });
	wuhuacyhanzidict.insert({ "五画","汉" });
	wuhuacyhanzidict.insert({ "五画","宁" });

	wuhuacyhanzidict.insert({ "五画","穴" });
	wuhuacyhanzidict.insert({ "五画","它" });
	wuhuacyhanzidict.insert({ "五画","讨" });
	wuhuacyhanzidict.insert({ "五画","写" });
	wuhuacyhanzidict.insert({ "五画","让" });

	wuhuacyhanzidict.insert({ "五画","礼" });
	wuhuacyhanzidict.insert({ "五画","训" });
	wuhuacyhanzidict.insert({ "五画","必" });
	wuhuacyhanzidict.insert({ "五画","议" });
	wuhuacyhanzidict.insert({ "五画","讯" });
	wuhuacyhanzidict.insert({ "五画","记" });

	wuhuacyhanzidict.insert({ "五画","永" });
	wuhuacyhanzidict.insert({ "五画","司" });
	wuhuacyhanzidict.insert({ "五画","尼" });
	wuhuacyhanzidict.insert({ "五画","民" });
	wuhuacyhanzidict.insert({ "五画","出" });

	wuhuacyhanzidict.insert({ "五画","辽" });
	wuhuacyhanzidict.insert({ "五画","奶" });
	wuhuacyhanzidict.insert({ "五画","奴" });
	wuhuacyhanzidict.insert({ "五画","加" });
	wuhuacyhanzidict.insert({ "五画","召" });

	wuhuacyhanzidict.insert({ "五画","皮" });
	wuhuacyhanzidict.insert({ "五画","边" });
	wuhuacyhanzidict.insert({ "五画","发" });
	wuhuacyhanzidict.insert({ "五画","孕" });
	wuhuacyhanzidict.insert({ "五画","圣" });

	wuhuacyhanzidict.insert({ "五画","对" });
	wuhuacyhanzidict.insert({ "五画","台" });
	wuhuacyhanzidict.insert({ "五画","矛" });
	wuhuacyhanzidict.insert({ "五画","纠" });
	wuhuacyhanzidict.insert({ "五画","母" });
	wuhuacyhanzidict.insert({ "五画","幼" });
	wuhuacyhanzidict.insert({ "五画","丝" });


	ofstream file("五画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : wuhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "五画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "五画常用汉字初始化失败" << endl;
	}

}


//六画
void 六画常用汉字() {
	multimap<string, string>liuhuacyhanzidict;
	liuhuacyhanzidict.insert({ "六画","式" });
	liuhuacyhanzidict.insert({ "六画","刑" });
	liuhuacyhanzidict.insert({ "六画","动" });
	liuhuacyhanzidict.insert({ "六画","扛" });
	liuhuacyhanzidict.insert({ "六画","寺" });

	liuhuacyhanzidict.insert({ "六画","吉" });
	liuhuacyhanzidict.insert({ "六画","扣" });
	liuhuacyhanzidict.insert({ "六画","考" });
	liuhuacyhanzidict.insert({ "六画","托" });
	liuhuacyhanzidict.insert({ "六画","老" });

	liuhuacyhanzidict.insert({ "六画","执" });
	liuhuacyhanzidict.insert({ "六画","巩" });
	liuhuacyhanzidict.insert({ "六画","圾" });
	liuhuacyhanzidict.insert({ "六画","扩" });
	liuhuacyhanzidict.insert({ "六画","扫" });

	liuhuacyhanzidict.insert({ "六画","地" });
	liuhuacyhanzidict.insert({ "六画","扬" });
	liuhuacyhanzidict.insert({ "六画","场" });
	liuhuacyhanzidict.insert({ "六画","耳" });
	liuhuacyhanzidict.insert({ "六画","共" });

	liuhuacyhanzidict.insert({ "六画","芒" });
	liuhuacyhanzidict.insert({ "六画","亚" });
	liuhuacyhanzidict.insert({ "六画","芝" });
	liuhuacyhanzidict.insert({ "六画","朽" });
	liuhuacyhanzidict.insert({ "六画","朴" });

	liuhuacyhanzidict.insert({ "六画","机" });
	liuhuacyhanzidict.insert({ "六画","过" });
	liuhuacyhanzidict.insert({ "六画","臣" });
	liuhuacyhanzidict.insert({ "六画","再" });
	liuhuacyhanzidict.insert({ "六画","协" });

	liuhuacyhanzidict.insert({ "六画","西" });
	liuhuacyhanzidict.insert({ "六画","压" });
	liuhuacyhanzidict.insert({ "六画","厌" });
	liuhuacyhanzidict.insert({ "六画","在" });
	liuhuacyhanzidict.insert({ "六画","有" });

	liuhuacyhanzidict.insert({ "六画","百" });
	liuhuacyhanzidict.insert({ "六画","存" });
	liuhuacyhanzidict.insert({ "六画","而" });
	liuhuacyhanzidict.insert({ "六画","页" });
	liuhuacyhanzidict.insert({ "六画","匠" });

	liuhuacyhanzidict.insert({ "六画","夸" });
	liuhuacyhanzidict.insert({ "六画","夺" });
	liuhuacyhanzidict.insert({ "六画","灰" });
	liuhuacyhanzidict.insert({ "六画","达" });
	liuhuacyhanzidict.insert({ "六画","列" });

	liuhuacyhanzidict.insert({ "六画","死" });
	liuhuacyhanzidict.insert({ "六画","成" });
	liuhuacyhanzidict.insert({ "六画","夹" });
	liuhuacyhanzidict.insert({ "六画","轨" });
	liuhuacyhanzidict.insert({ "六画","邪" });

	liuhuacyhanzidict.insert({ "六画","划" });
	liuhuacyhanzidict.insert({ "六画","迈" });
	liuhuacyhanzidict.insert({ "六画","毕" });
	liuhuacyhanzidict.insert({ "六画","至" });
	liuhuacyhanzidict.insert({ "六画","此" });

	liuhuacyhanzidict.insert({ "六画","贞" });
	liuhuacyhanzidict.insert({ "六画","师" });
	liuhuacyhanzidict.insert({ "六画","尘" });
	liuhuacyhanzidict.insert({ "六画","尖" });
	liuhuacyhanzidict.insert({ "六画","劣" });

	liuhuacyhanzidict.insert({ "六画","光" });
	liuhuacyhanzidict.insert({ "六画","当" });
	liuhuacyhanzidict.insert({ "六画","早" });
	liuhuacyhanzidict.insert({ "六画","吐" });
	liuhuacyhanzidict.insert({ "六画","吓" });

	liuhuacyhanzidict.insert({ "六画","虫" });
	liuhuacyhanzidict.insert({ "六画","曲" });
	liuhuacyhanzidict.insert({ "六画","团" });
	liuhuacyhanzidict.insert({ "六画","同" });
	liuhuacyhanzidict.insert({ "六画","吊" });

	liuhuacyhanzidict.insert({ "六画","吃" });
	liuhuacyhanzidict.insert({ "六画","因" });
	liuhuacyhanzidict.insert({ "六画","吸" });
	liuhuacyhanzidict.insert({ "六画","吗" });
	liuhuacyhanzidict.insert({ "六画","屿" });

	liuhuacyhanzidict.insert({ "六画","帆" });
	liuhuacyhanzidict.insert({ "六画","岁" });
	liuhuacyhanzidict.insert({ "六画","回" });
	liuhuacyhanzidict.insert({ "六画","岂" });
	liuhuacyhanzidict.insert({ "六画","刚" });

	liuhuacyhanzidict.insert({ "六画","则" });
	liuhuacyhanzidict.insert({ "六画","肉" });
	liuhuacyhanzidict.insert({ "六画","网" });
	liuhuacyhanzidict.insert({ "六画","年" });
	liuhuacyhanzidict.insert({ "六画","朱" });

	liuhuacyhanzidict.insert({ "六画","先" });
	liuhuacyhanzidict.insert({ "六画","丢" });
	liuhuacyhanzidict.insert({ "六画","舌" });
	liuhuacyhanzidict.insert({ "六画","竹" });
	liuhuacyhanzidict.insert({ "六画","迁" });

	liuhuacyhanzidict.insert({ "六画","乔" });
	liuhuacyhanzidict.insert({ "六画","伟" });
	liuhuacyhanzidict.insert({ "六画","传" });
	liuhuacyhanzidict.insert({ "六画","乒" });
	liuhuacyhanzidict.insert({ "六画","乓" });

	liuhuacyhanzidict.insert({ "六画","休" });
	liuhuacyhanzidict.insert({ "六画","伍" });
	liuhuacyhanzidict.insert({ "六画","伏" });
	liuhuacyhanzidict.insert({ "六画","优" });
	liuhuacyhanzidict.insert({ "六画","伐" });

	liuhuacyhanzidict.insert({ "六画","延" });
	liuhuacyhanzidict.insert({ "六画","件" });
	liuhuacyhanzidict.insert({ "六画","任" });
	liuhuacyhanzidict.insert({ "六画","伤" });
	liuhuacyhanzidict.insert({ "六画","价" });

	liuhuacyhanzidict.insert({ "六画","份" });
	liuhuacyhanzidict.insert({ "六画","华" });
	liuhuacyhanzidict.insert({ "六画","仰" });
	liuhuacyhanzidict.insert({ "六画","仿" });
	liuhuacyhanzidict.insert({ "六画","伙" });

	liuhuacyhanzidict.insert({ "六画","伪" });
	liuhuacyhanzidict.insert({ "六画","自" });
	liuhuacyhanzidict.insert({ "六画","血" });
	liuhuacyhanzidict.insert({ "六画","向" });
	liuhuacyhanzidict.insert({ "六画","似" });
	liuhuacyhanzidict.insert({ "六画","后" });

	liuhuacyhanzidict.insert({ "六画","行" });
	liuhuacyhanzidict.insert({ "六画","舟" });
	liuhuacyhanzidict.insert({ "六画","全" });
	liuhuacyhanzidict.insert({ "六画","会" });
	liuhuacyhanzidict.insert({ "六画","杀" });
	liuhuacyhanzidict.insert({ "六画","合" });

	liuhuacyhanzidict.insert({ "六画","兆" });
	liuhuacyhanzidict.insert({ "六画","企" });
	liuhuacyhanzidict.insert({ "六画","众" });
	liuhuacyhanzidict.insert({ "六画","爷" });
	liuhuacyhanzidict.insert({ "六画","伞" });

	liuhuacyhanzidict.insert({ "六画","创" });
	liuhuacyhanzidict.insert({ "六画","肌" });
	liuhuacyhanzidict.insert({ "六画","朵" });
	liuhuacyhanzidict.insert({ "六画","杂" });
	liuhuacyhanzidict.insert({ "六画","危" });

	liuhuacyhanzidict.insert({ "六画","旬" });
	liuhuacyhanzidict.insert({ "六画","旨" });
	liuhuacyhanzidict.insert({ "六画","负" });
	liuhuacyhanzidict.insert({ "六画","各" });
	liuhuacyhanzidict.insert({ "六画","名" });

	liuhuacyhanzidict.insert({ "六画","多" });
	liuhuacyhanzidict.insert({ "六画","争" });
	liuhuacyhanzidict.insert({ "六画","色" });
	liuhuacyhanzidict.insert({ "六画","壮" });
	liuhuacyhanzidict.insert({ "六画","冲" });

	liuhuacyhanzidict.insert({ "六画","冰" });
	liuhuacyhanzidict.insert({ "六画","庄" });
	liuhuacyhanzidict.insert({ "六画","庆" });
	liuhuacyhanzidict.insert({ "六画","亦" }); liuhuacyhanzidict.insert({ "六画","刘" });

	liuhuacyhanzidict.insert({ "六画","齐" });
	liuhuacyhanzidict.insert({ "六画","交" });
	liuhuacyhanzidict.insert({ "六画","次" });
	liuhuacyhanzidict.insert({ "六画","衣" });
	liuhuacyhanzidict.insert({ "六画","产" });

	liuhuacyhanzidict.insert({ "六画","决" });
	liuhuacyhanzidict.insert({ "六画","充" });
	liuhuacyhanzidict.insert({ "六画","妄" });
	liuhuacyhanzidict.insert({ "六画","闭" });
	liuhuacyhanzidict.insert({ "六画","问" });

	liuhuacyhanzidict.insert({ "六画","闯" });
	liuhuacyhanzidict.insert({ "六画","羊" });
	liuhuacyhanzidict.insert({ "六画","并" });
	liuhuacyhanzidict.insert({ "六画","关" });
	liuhuacyhanzidict.insert({ "六画","米" });

	liuhuacyhanzidict.insert({ "六画","灯" });
	liuhuacyhanzidict.insert({ "六画","州" });
	liuhuacyhanzidict.insert({ "六画","汗" });
	liuhuacyhanzidict.insert({ "六画","污" });
	liuhuacyhanzidict.insert({ "六画","江" });

	liuhuacyhanzidict.insert({ "六画","池" });
	liuhuacyhanzidict.insert({ "六画","汤" });
	liuhuacyhanzidict.insert({ "六画","忙" });
	liuhuacyhanzidict.insert({ "六画","兴" });
	liuhuacyhanzidict.insert({ "六画","宇" });

	liuhuacyhanzidict.insert({ "六画","安" });
	liuhuacyhanzidict.insert({ "六画","讲" });
	liuhuacyhanzidict.insert({ "六画","军" });
	liuhuacyhanzidict.insert({ "六画","许" });
	liuhuacyhanzidict.insert({ "六画","论" });

	liuhuacyhanzidict.insert({ "六画","农" });
	liuhuacyhanzidict.insert({ "六画","讽" });
	liuhuacyhanzidict.insert({ "六画","设" });
	liuhuacyhanzidict.insert({ "六画","访" });
	liuhuacyhanzidict.insert({ "六画","寻" });

	liuhuacyhanzidict.insert({ "六画","那" });
	liuhuacyhanzidict.insert({ "六画","迅" });
	liuhuacyhanzidict.insert({ "六画","尽" });
	liuhuacyhanzidict.insert({ "六画","导" });
	liuhuacyhanzidict.insert({ "六画","异" });
	liuhuacyhanzidict.insert({ "六画","孙" });

	liuhuacyhanzidict.insert({ "六画","阵" });
	liuhuacyhanzidict.insert({ "六画","阳" });
	liuhuacyhanzidict.insert({ "六画","收" });
	liuhuacyhanzidict.insert({ "六画","价" });
	liuhuacyhanzidict.insert({ "六画","阴" });

	liuhuacyhanzidict.insert({ "六画","防" });
	liuhuacyhanzidict.insert({ "六画","奸" });
	liuhuacyhanzidict.insert({ "六画","如" });
	liuhuacyhanzidict.insert({ "六画","妇" });
	liuhuacyhanzidict.insert({ "六画","好" });

	liuhuacyhanzidict.insert({ "六画","她" });
	liuhuacyhanzidict.insert({ "六画","妈" });
	liuhuacyhanzidict.insert({ "六画","戏" });
	liuhuacyhanzidict.insert({ "六画","羽" });
	liuhuacyhanzidict.insert({ "六画","观" });

	liuhuacyhanzidict.insert({ "六画","欢" });
	liuhuacyhanzidict.insert({ "六画","买" });
	liuhuacyhanzidict.insert({ "六画","红" });
	liuhuacyhanzidict.insert({ "六画","纤" });
	liuhuacyhanzidict.insert({ "六画","级" });

	liuhuacyhanzidict.insert({ "六画","约" });
	liuhuacyhanzidict.insert({ "六画","纪" });
	liuhuacyhanzidict.insert({ "六画","驰" });
	liuhuacyhanzidict.insert({ "六画","巡" });


	ofstream file("六画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : liuhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "六画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "六画常用汉字初始化失败" << endl;
	}

}

//七画

void 七画常用汉字() {
	multimap<string, string>qihuacyhanzidict;
	qihuacyhanzidict.insert({ "七画","寿" });
	qihuacyhanzidict.insert({ "七画","弄" });
	qihuacyhanzidict.insert({ "七画","麦" });
	qihuacyhanzidict.insert({ "七画","形" });
	qihuacyhanzidict.insert({ "七画","进" });

	qihuacyhanzidict.insert({ "七画","戒" });
	qihuacyhanzidict.insert({ "七画","吞" });
	qihuacyhanzidict.insert({ "七画","远" });
	qihuacyhanzidict.insert({ "七画","违" });
	qihuacyhanzidict.insert({ "七画","运" });

	qihuacyhanzidict.insert({ "七画","扶" });
	qihuacyhanzidict.insert({ "七画","抚" });
	qihuacyhanzidict.insert({ "七画","坛" });
	qihuacyhanzidict.insert({ "七画","技" });
	qihuacyhanzidict.insert({ "七画","坏" });


	qihuacyhanzidict.insert({ "七画","扰" });
	qihuacyhanzidict.insert({ "七画","拒" });
	qihuacyhanzidict.insert({ "七画","找" });
	qihuacyhanzidict.insert({ "七画","批" });
	qihuacyhanzidict.insert({ "七画","扯" });

	qihuacyhanzidict.insert({ "七画","址" });
	qihuacyhanzidict.insert({ "七画","走" });
	qihuacyhanzidict.insert({ "七画","抄" });
	qihuacyhanzidict.insert({ "七画","坝" });
	qihuacyhanzidict.insert({ "七画","贡" });

	qihuacyhanzidict.insert({ "七画","攻" });
	qihuacyhanzidict.insert({ "七画","赤" });
	qihuacyhanzidict.insert({ "七画","折" });
	qihuacyhanzidict.insert({ "七画","抓" });
	qihuacyhanzidict.insert({ "七画","扮" });

	qihuacyhanzidict.insert({ "七画","抢" });
	qihuacyhanzidict.insert({ "七画","孝" });
	qihuacyhanzidict.insert({ "七画","均" });
	qihuacyhanzidict.insert({ "七画","抛" });
	qihuacyhanzidict.insert({ "七画","投" });

	qihuacyhanzidict.insert({ "七画","坟" });
	qihuacyhanzidict.insert({ "七画","抗" });
	qihuacyhanzidict.insert({ "七画","坑" });
	qihuacyhanzidict.insert({ "七画","坊" });
	qihuacyhanzidict.insert({ "七画","抖" });

	qihuacyhanzidict.insert({ "七画","护" });
	qihuacyhanzidict.insert({ "七画","壳" });
	qihuacyhanzidict.insert({ "七画","志" });
	qihuacyhanzidict.insert({ "七画","扭" });
	qihuacyhanzidict.insert({ "七画","块" });


	qihuacyhanzidict.insert({ "七画","声" });
	qihuacyhanzidict.insert({ "七画","把" });
	qihuacyhanzidict.insert({ "七画","报" });
	qihuacyhanzidict.insert({ "七画","却" });
	qihuacyhanzidict.insert({ "七画","劫" });

	qihuacyhanzidict.insert({ "七画","芽" });
	qihuacyhanzidict.insert({ "七画","花" });
	qihuacyhanzidict.insert({ "七画","芹" });
	qihuacyhanzidict.insert({ "七画","芬" });
	qihuacyhanzidict.insert({ "七画","苍" });

	qihuacyhanzidict.insert({ "七画","芳" });
	qihuacyhanzidict.insert({ "七画","严" });
	qihuacyhanzidict.insert({ "七画","芦" });
	qihuacyhanzidict.insert({ "七画","劳" });
	qihuacyhanzidict.insert({ "七画","克" });

	qihuacyhanzidict.insert({ "七画","苏" });
	qihuacyhanzidict.insert({ "七画","杆" });
	qihuacyhanzidict.insert({ "七画","杠" });
	qihuacyhanzidict.insert({ "七画","杜" });
	qihuacyhanzidict.insert({ "七画","材" });
	qihuacyhanzidict.insert({ "七画","村" });

	qihuacyhanzidict.insert({ "七画","杏" });
	qihuacyhanzidict.insert({ "七画","极" });
	qihuacyhanzidict.insert({ "七画","李" });
	qihuacyhanzidict.insert({ "七画","杨" });

	qihuacyhanzidict.insert({ "七画","求" });
	qihuacyhanzidict.insert({ "七画","更" });
	qihuacyhanzidict.insert({ "七画","束" });
	qihuacyhanzidict.insert({ "七画","豆" });
	qihuacyhanzidict.insert({ "七画","两" });

	qihuacyhanzidict.insert({ "七画","丽" });
	qihuacyhanzidict.insert({ "七画","医" });
	qihuacyhanzidict.insert({ "七画","辰" });
	qihuacyhanzidict.insert({ "七画","励" });
	qihuacyhanzidict.insert({ "七画","否" });

	qihuacyhanzidict.insert({ "七画","还" });
	qihuacyhanzidict.insert({ "七画","歼" });
	qihuacyhanzidict.insert({ "七画","来" });
	qihuacyhanzidict.insert({ "七画","连" });
	qihuacyhanzidict.insert({ "七画","步" });

	qihuacyhanzidict.insert({ "七画","坚" });
	qihuacyhanzidict.insert({ "七画","旱" });
	qihuacyhanzidict.insert({ "七画","盯" });
	qihuacyhanzidict.insert({ "七画","呈" });
	qihuacyhanzidict.insert({ "七画","时" });

	qihuacyhanzidict.insert({ "七画","吴" });
	qihuacyhanzidict.insert({ "七画","助" });
	qihuacyhanzidict.insert({ "七画","县" });
	qihuacyhanzidict.insert({ "七画","里" });
	qihuacyhanzidict.insert({ "七画","呆" });

	qihuacyhanzidict.insert({ "七画","园" });
	qihuacyhanzidict.insert({ "七画","旷" });
	qihuacyhanzidict.insert({ "七画","围" });
	qihuacyhanzidict.insert({ "七画","呀" });
	qihuacyhanzidict.insert({ "七画","吨" });

	qihuacyhanzidict.insert({ "七画","足" });
	qihuacyhanzidict.insert({ "七画","邮" });
	qihuacyhanzidict.insert({ "七画","男" });
	qihuacyhanzidict.insert({ "七画","困" });
	qihuacyhanzidict.insert({ "七画","吵" });

	qihuacyhanzidict.insert({ "七画","串" });
	qihuacyhanzidict.insert({ "七画","员" });
	qihuacyhanzidict.insert({ "七画","听" });
	qihuacyhanzidict.insert({ "七画","吩" });
	qihuacyhanzidict.insert({ "七画","吹" });

	qihuacyhanzidict.insert({ "七画","呜" });
	qihuacyhanzidict.insert({ "七画","吧" });
	qihuacyhanzidict.insert({ "七画","吼" });
	qihuacyhanzidict.insert({ "七画","别" });
	qihuacyhanzidict.insert({ "七画","岗" });

	qihuacyhanzidict.insert({ "七画","帐" });
	qihuacyhanzidict.insert({ "七画","财" });
	qihuacyhanzidict.insert({ "七画","针" });
	qihuacyhanzidict.insert({ "七画","钉" });
	qihuacyhanzidict.insert({ "七画","告" });

	qihuacyhanzidict.insert({ "七画","我" });
	qihuacyhanzidict.insert({ "七画","乱" });
	qihuacyhanzidict.insert({ "七画","利" });
	qihuacyhanzidict.insert({ "七画","秃" });
	qihuacyhanzidict.insert({ "七画","秀" });


	qihuacyhanzidict.insert({ "七画","私" });
	qihuacyhanzidict.insert({ "七画","每" });
	qihuacyhanzidict.insert({ "七画","兵" });
	qihuacyhanzidict.insert({ "七画","估" });
	qihuacyhanzidict.insert({ "七画","体" });

	qihuacyhanzidict.insert({ "七画","何" });
	qihuacyhanzidict.insert({ "七画","但" });
	qihuacyhanzidict.insert({ "七画","伸" });
	qihuacyhanzidict.insert({ "七画","作" });
	qihuacyhanzidict.insert({ "七画","伯" });

	qihuacyhanzidict.insert({ "七画","伶" });
	qihuacyhanzidict.insert({ "七画","佣" });
	qihuacyhanzidict.insert({ "七画","低" });
	qihuacyhanzidict.insert({ "七画","你" });
	qihuacyhanzidict.insert({ "七画","住" });

	qihuacyhanzidict.insert({ "七画","位" });
	qihuacyhanzidict.insert({ "七画","伴" });
	qihuacyhanzidict.insert({ "七画","身" });
	qihuacyhanzidict.insert({ "七画","皂" });
	qihuacyhanzidict.insert({ "七画","佛" });

	qihuacyhanzidict.insert({ "七画","近" });
	qihuacyhanzidict.insert({ "七画","彻" });
	qihuacyhanzidict.insert({ "七画","役" });
	qihuacyhanzidict.insert({ "七画","返" });
	qihuacyhanzidict.insert({ "七画","余" });

	qihuacyhanzidict.insert({ "七画","希" });
	qihuacyhanzidict.insert({ "七画","坐" });
	qihuacyhanzidict.insert({ "七画","谷" });
	qihuacyhanzidict.insert({ "七画","妥" });
	qihuacyhanzidict.insert({ "七画","含" });

	qihuacyhanzidict.insert({ "七画","邻" });
	qihuacyhanzidict.insert({ "七画","岔" });
	qihuacyhanzidict.insert({ "七画","肝" });
	qihuacyhanzidict.insert({ "七画","肚" });
	qihuacyhanzidict.insert({ "七画","肠" });

	qihuacyhanzidict.insert({ "七画","龟" });
	qihuacyhanzidict.insert({ "七画","免" });
	qihuacyhanzidict.insert({ "七画","狂" });
	qihuacyhanzidict.insert({ "七画","犹" });
	qihuacyhanzidict.insert({ "七画","角" });

	qihuacyhanzidict.insert({ "七画","删" });
	qihuacyhanzidict.insert({ "七画","条" });
	qihuacyhanzidict.insert({ "七画","卵" });
	qihuacyhanzidict.insert({ "七画","岛" });
	qihuacyhanzidict.insert({ "七画","迎" });

	qihuacyhanzidict.insert({ "七画","饭" });
	qihuacyhanzidict.insert({ "七画","饮" });
	qihuacyhanzidict.insert({ "七画","系" });
	qihuacyhanzidict.insert({ "七画","言" });
	qihuacyhanzidict.insert({ "七画","冻" });

	qihuacyhanzidict.insert({ "七画","状" });
	qihuacyhanzidict.insert({ "七画","亩" });
	qihuacyhanzidict.insert({ "七画","况" });
	qihuacyhanzidict.insert({ "七画","床" });
	qihuacyhanzidict.insert({ "七画","疗" });

	qihuacyhanzidict.insert({ "七画","应" });
	qihuacyhanzidict.insert({ "七画","冷" });
	qihuacyhanzidict.insert({ "七画","这" });
	qihuacyhanzidict.insert({ "七画","序" });
	qihuacyhanzidict.insert({ "七画","辛" });

	qihuacyhanzidict.insert({ "七画","弃" });
	qihuacyhanzidict.insert({ "七画","冶" });
	qihuacyhanzidict.insert({ "七画","忘" });
	qihuacyhanzidict.insert({ "七画","闲" });
	qihuacyhanzidict.insert({ "七画","间" });

	qihuacyhanzidict.insert({ "七画","闷" });
	qihuacyhanzidict.insert({ "七画","判" });
	qihuacyhanzidict.insert({ "七画","灶" });
	qihuacyhanzidict.insert({ "七画","灿" });
	qihuacyhanzidict.insert({ "七画","弟" });

	qihuacyhanzidict.insert({ "七画","汪" });
	qihuacyhanzidict.insert({ "七画","沙" });
	qihuacyhanzidict.insert({ "七画","汽" });
	qihuacyhanzidict.insert({ "七画","沃" });
	qihuacyhanzidict.insert({ "七画","泛" });

	qihuacyhanzidict.insert({ "七画","沟" });
	qihuacyhanzidict.insert({ "七画","没" });
	qihuacyhanzidict.insert({ "七画","沈" });
	qihuacyhanzidict.insert({ "七画","沉" });
	qihuacyhanzidict.insert({ "七画","怀" });

	qihuacyhanzidict.insert({ "七画","忧" });
	qihuacyhanzidict.insert({ "七画","快" });
	qihuacyhanzidict.insert({ "七画","完" });
	qihuacyhanzidict.insert({ "七画","宋" });
	qihuacyhanzidict.insert({ "七画","宏" });

	qihuacyhanzidict.insert({ "七画","牢" });
	qihuacyhanzidict.insert({ "七画","究" });
	qihuacyhanzidict.insert({ "七画","穷" });
	qihuacyhanzidict.insert({ "七画","灾" });
	qihuacyhanzidict.insert({ "七画","良" });

	qihuacyhanzidict.insert({ "七画","证" });
	qihuacyhanzidict.insert({ "七画","启" });
	qihuacyhanzidict.insert({ "七画","评" });
	qihuacyhanzidict.insert({ "七画","补" });
	qihuacyhanzidict.insert({ "七画","初" });
	qihuacyhanzidict.insert({ "七画","社" });

	qihuacyhanzidict.insert({ "七画","识" });
	qihuacyhanzidict.insert({ "七画","诉" });
	qihuacyhanzidict.insert({ "七画","诊" });
	qihuacyhanzidict.insert({ "七画","词" });
	qihuacyhanzidict.insert({ "七画","译" });

	qihuacyhanzidict.insert({ "七画","君" });
	qihuacyhanzidict.insert({ "七画","灵" });
	qihuacyhanzidict.insert({ "七画","即" });
	qihuacyhanzidict.insert({ "七画","层" });
	qihuacyhanzidict.insert({ "七画","尿" });
	qihuacyhanzidict.insert({ "七画","尾" });

	qihuacyhanzidict.insert({ "七画","迟" });
	qihuacyhanzidict.insert({ "七画","局" });
	qihuacyhanzidict.insert({ "七画","改" });
	qihuacyhanzidict.insert({ "七画","张" });
	qihuacyhanzidict.insert({ "七画","忌" });

	qihuacyhanzidict.insert({ "七画","际" });
	qihuacyhanzidict.insert({ "七画","陆" });
	qihuacyhanzidict.insert({ "七画","阿" });
	qihuacyhanzidict.insert({ "七画","陈" });
	qihuacyhanzidict.insert({ "七画","阻" });
	qihuacyhanzidict.insert({ "七画","附" });

	qihuacyhanzidict.insert({ "七画","妙" });
	qihuacyhanzidict.insert({ "七画","妖" });
	qihuacyhanzidict.insert({ "七画","妨" });
	qihuacyhanzidict.insert({ "七画","努" });
	qihuacyhanzidict.insert({ "七画","忍" });

	qihuacyhanzidict.insert({ "七画","劲" });
	qihuacyhanzidict.insert({ "七画","鸡" });
	qihuacyhanzidict.insert({ "七画","驱" });
	qihuacyhanzidict.insert({ "七画","纯" });
	qihuacyhanzidict.insert({ "七画","纱" });

	qihuacyhanzidict.insert({ "七画","纳" });
	qihuacyhanzidict.insert({ "七画","纲" });
	qihuacyhanzidict.insert({ "七画","驳" });
	qihuacyhanzidict.insert({ "七画","纵" });
	qihuacyhanzidict.insert({ "七画","纷" });
	qihuacyhanzidict.insert({ "七画","纸" });
	qihuacyhanzidict.insert({ "七画","纹" });
	qihuacyhanzidict.insert({ "七画","纺" });
	qihuacyhanzidict.insert({ "七画","驴" });
	qihuacyhanzidict.insert({ "七画","纽" });

	ofstream file("七画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : qihuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "七画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "七画常用汉字初始化失败" << endl;
	}


}

//八画
void 八画常用汉字() {
	multimap<string, string>bahuacyhanzidict;
	bahuacyhanzidict.insert({ "八画","奉" });
	bahuacyhanzidict.insert({ "八画","玩" });
	bahuacyhanzidict.insert({ "八画","环" });
	bahuacyhanzidict.insert({ "八画","武" });
	bahuacyhanzidict.insert({ "八画","青" });
	bahuacyhanzidict.insert({ "八画","责" });
	bahuacyhanzidict.insert({ "八画","现" });
	bahuacyhanzidict.insert({ "八画","表" });
	bahuacyhanzidict.insert({ "八画","规" });
	bahuacyhanzidict.insert({ "八画","抹" });
	bahuacyhanzidict.insert({ "八画","拢" });
	bahuacyhanzidict.insert({ "八画","拔" });
	bahuacyhanzidict.insert({ "八画","拣" });
	bahuacyhanzidict.insert({ "八画","担" });
	bahuacyhanzidict.insert({ "八画","坦" });
	bahuacyhanzidict.insert({ "八画","押" });
	bahuacyhanzidict.insert({ "八画","抽" });
	bahuacyhanzidict.insert({ "八画","拐" });
	bahuacyhanzidict.insert({ "八画","拖" });
	bahuacyhanzidict.insert({ "八画","拍" });
	bahuacyhanzidict.insert({ "八画","者" });
	bahuacyhanzidict.insert({ "八画","顶" });
	bahuacyhanzidict.insert({ "八画","拆" });
	bahuacyhanzidict.insert({ "八画","拥" });
	bahuacyhanzidict.insert({ "八画","抵" });
	bahuacyhanzidict.insert({ "八画","拘" });
	bahuacyhanzidict.insert({ "八画","势" });
	bahuacyhanzidict.insert({ "八画","抱" });
	bahuacyhanzidict.insert({ "八画","垃" });
	bahuacyhanzidict.insert({ "八画","拉" });
	bahuacyhanzidict.insert({ "八画","拦" });
	bahuacyhanzidict.insert({ "八画","拌" });
	bahuacyhanzidict.insert({ "八画","幸" });
	bahuacyhanzidict.insert({ "八画","招" });
	bahuacyhanzidict.insert({ "八画","坡" });
	bahuacyhanzidict.insert({ "八画","披" });
	bahuacyhanzidict.insert({ "八画","拨" });
	bahuacyhanzidict.insert({ "八画","择" });
	bahuacyhanzidict.insert({ "八画","抬" });
	bahuacyhanzidict.insert({ "八画","其" });
	bahuacyhanzidict.insert({ "八画","取" });
	bahuacyhanzidict.insert({ "八画","苦" });
	bahuacyhanzidict.insert({ "八画","若" });
	bahuacyhanzidict.insert({ "八画","茂" });
	bahuacyhanzidict.insert({ "八画","苹" });
	bahuacyhanzidict.insert({ "八画","苗" });
	bahuacyhanzidict.insert({ "八画","英" });
	bahuacyhanzidict.insert({ "八画","范" });
	bahuacyhanzidict.insert({ "八画","直" });
	bahuacyhanzidict.insert({ "八画","茄" });
	bahuacyhanzidict.insert({ "八画","茎" });
	bahuacyhanzidict.insert({ "八画","茅" });
	bahuacyhanzidict.insert({ "八画","林" });
	bahuacyhanzidict.insert({ "八画","枝" });
	bahuacyhanzidict.insert({ "八画","杯" });
	bahuacyhanzidict.insert({ "八画","柜" });
	bahuacyhanzidict.insert({ "八画","析" });
	bahuacyhanzidict.insert({ "八画","板" });
	bahuacyhanzidict.insert({ "八画","松" });
	bahuacyhanzidict.insert({ "八画","枪" });
	bahuacyhanzidict.insert({ "八画","构" });
	bahuacyhanzidict.insert({ "八画","杰" });
	bahuacyhanzidict.insert({ "八画","述" });
	bahuacyhanzidict.insert({ "八画","枕" });
	bahuacyhanzidict.insert({ "八画","丧" });
	bahuacyhanzidict.insert({ "八画","或" });
	bahuacyhanzidict.insert({ "八画","画" });
	bahuacyhanzidict.insert({ "八画","卧" });
	bahuacyhanzidict.insert({ "八画","事" });
	bahuacyhanzidict.insert({ "八画","刺" });
	bahuacyhanzidict.insert({ "八画","枣" });
	bahuacyhanzidict.insert({ "八画","雨" });
	bahuacyhanzidict.insert({ "八画","卖" });
	bahuacyhanzidict.insert({ "八画","矿" });
	bahuacyhanzidict.insert({ "八画","码" });
	bahuacyhanzidict.insert({ "八画","厕" });
	bahuacyhanzidict.insert({ "八画","奔" });
	bahuacyhanzidict.insert({ "八画","奇" });
	bahuacyhanzidict.insert({ "八画","奋" });
	bahuacyhanzidict.insert({ "八画","态" });
	bahuacyhanzidict.insert({ "八画","欧" });
	bahuacyhanzidict.insert({ "八画","垄" });
	bahuacyhanzidict.insert({ "八画","妻" });
	bahuacyhanzidict.insert({ "八画","轰" });
	bahuacyhanzidict.insert({ "八画","顷" });
	bahuacyhanzidict.insert({ "八画","转" });
	bahuacyhanzidict.insert({ "八画","斩" });
	bahuacyhanzidict.insert({ "八画","轮" });
	bahuacyhanzidict.insert({ "八画","软" });
	bahuacyhanzidict.insert({ "八画","到" });
	bahuacyhanzidict.insert({ "八画","非" });
	bahuacyhanzidict.insert({ "八画","叔" });
	bahuacyhanzidict.insert({ "八画","肯" });
	bahuacyhanzidict.insert({ "八画","齿" });
	bahuacyhanzidict.insert({ "八画","些" });
	bahuacyhanzidict.insert({ "八画","虎" });
	bahuacyhanzidict.insert({ "八画","虏" });
	bahuacyhanzidict.insert({ "八画","肾" });
	bahuacyhanzidict.insert({ "八画","贤" });
	bahuacyhanzidict.insert({ "八画","尚" });
	bahuacyhanzidict.insert({ "八画","旺" });
	bahuacyhanzidict.insert({ "八画","具" });
	bahuacyhanzidict.insert({ "八画","果" });
	bahuacyhanzidict.insert({ "八画","味" });
	bahuacyhanzidict.insert({ "八画","昆" });
	bahuacyhanzidict.insert({ "八画","国" });
	bahuacyhanzidict.insert({ "八画","昌" });
	bahuacyhanzidict.insert({ "八画","畅" });
	bahuacyhanzidict.insert({ "八画","明" });
	bahuacyhanzidict.insert({ "八画","易" });
	bahuacyhanzidict.insert({ "八画","昂" });
	bahuacyhanzidict.insert({ "八画","典" });
	bahuacyhanzidict.insert({ "八画","固" });
	bahuacyhanzidict.insert({ "八画","忠" });
	bahuacyhanzidict.insert({ "八画","咐" });
	bahuacyhanzidict.insert({ "八画","呼" });
	bahuacyhanzidict.insert({ "八画","鸣" });
	bahuacyhanzidict.insert({ "八画","咏" });
	bahuacyhanzidict.insert({ "八画","呢" });
	bahuacyhanzidict.insert({ "八画","岸" });
	bahuacyhanzidict.insert({ "八画","岩" });
	bahuacyhanzidict.insert({ "八画","帖" });
	bahuacyhanzidict.insert({ "八画","罗" });
	bahuacyhanzidict.insert({ "八画","帜" });
	bahuacyhanzidict.insert({ "八画","岭" });
	bahuacyhanzidict.insert({ "八画","凯" });
	bahuacyhanzidict.insert({ "八画","败" });
	bahuacyhanzidict.insert({ "八画","贩" });
	bahuacyhanzidict.insert({ "八画","购" });
	bahuacyhanzidict.insert({ "八画","图" });
	bahuacyhanzidict.insert({ "八画","钓" });
	bahuacyhanzidict.insert({ "八画","制" });
	bahuacyhanzidict.insert({ "八画","知" });
	bahuacyhanzidict.insert({ "八画","垂" });
	bahuacyhanzidict.insert({ "八画","牧" });
	bahuacyhanzidict.insert({ "八画","物" });
	bahuacyhanzidict.insert({ "八画","乖" });
	bahuacyhanzidict.insert({ "八画","刮" });
	bahuacyhanzidict.insert({ "八画","秆" });
	bahuacyhanzidict.insert({ "八画","和" });
	bahuacyhanzidict.insert({ "八画","季" });
	bahuacyhanzidict.insert({ "八画","委" });
	bahuacyhanzidict.insert({ "八画","佳" });
	bahuacyhanzidict.insert({ "八画","侍" });
	bahuacyhanzidict.insert({ "八画","供" });
	bahuacyhanzidict.insert({ "八画","使" });
	bahuacyhanzidict.insert({ "八画","例" });
	bahuacyhanzidict.insert({ "八画","版" });
	bahuacyhanzidict.insert({ "八画","侄" });
	bahuacyhanzidict.insert({ "八画","侦" });
	bahuacyhanzidict.insert({ "八画","侧" });
	bahuacyhanzidict.insert({ "八画","凭" });
	bahuacyhanzidict.insert({ "八画","侨" });
	bahuacyhanzidict.insert({ "八画","佩" });
	bahuacyhanzidict.insert({ "八画","货" });
	bahuacyhanzidict.insert({ "八画","依" });
	bahuacyhanzidict.insert({ "八画","的" });
	bahuacyhanzidict.insert({ "八画","迫" });
	bahuacyhanzidict.insert({ "八画","质" });
	bahuacyhanzidict.insert({ "八画","欣" });
	bahuacyhanzidict.insert({ "八画","征" });
	bahuacyhanzidict.insert({ "八画","往" });
	bahuacyhanzidict.insert({ "八画","爬" });
	bahuacyhanzidict.insert({ "八画","彼" });
	bahuacyhanzidict.insert({ "八画","径" });
	bahuacyhanzidict.insert({ "八画","所" });
	bahuacyhanzidict.insert({ "八画","舍" });
	bahuacyhanzidict.insert({ "八画","金" });
	bahuacyhanzidict.insert({ "八画","命" });
	bahuacyhanzidict.insert({ "八画","斧" });
	bahuacyhanzidict.insert({ "八画","爸" });
	bahuacyhanzidict.insert({ "八画","采" });
	bahuacyhanzidict.insert({ "八画","受" });
	bahuacyhanzidict.insert({ "八画","乳" });
	bahuacyhanzidict.insert({ "八画","贪" });
	bahuacyhanzidict.insert({ "八画","念" });
	bahuacyhanzidict.insert({ "八画","贫" });
	bahuacyhanzidict.insert({ "八画","肤" });

	bahuacyhanzidict.insert({ "八画","肺" });
	bahuacyhanzidict.insert({ "八画","肢" });
	bahuacyhanzidict.insert({ "八画","肿" });
	bahuacyhanzidict.insert({ "八画","胀" });
	bahuacyhanzidict.insert({ "八画","朋" });
	bahuacyhanzidict.insert({ "八画","股" });
	bahuacyhanzidict.insert({ "八画","肥" });
	bahuacyhanzidict.insert({ "八画","服" });
	bahuacyhanzidict.insert({ "八画","胁" });
	bahuacyhanzidict.insert({ "八画","周" });
	bahuacyhanzidict.insert({ "八画","昏" });
	bahuacyhanzidict.insert({ "八画","鱼" });
	bahuacyhanzidict.insert({ "八画","兔" });
	bahuacyhanzidict.insert({ "八画","狐" });
	bahuacyhanzidict.insert({ "八画","忽" });
	bahuacyhanzidict.insert({ "八画","狗" });
	bahuacyhanzidict.insert({ "八画","备" });
	bahuacyhanzidict.insert({ "八画","饰" });
	bahuacyhanzidict.insert({ "八画","饱" });
	bahuacyhanzidict.insert({ "八画","饲" });
	bahuacyhanzidict.insert({ "八画","变" });
	bahuacyhanzidict.insert({ "八画","京" });
	bahuacyhanzidict.insert({ "八画","享" });
	bahuacyhanzidict.insert({ "八画","店" });
	bahuacyhanzidict.insert({ "八画","夜" });
	bahuacyhanzidict.insert({ "八画","庙" });
	bahuacyhanzidict.insert({ "八画","府" });
	bahuacyhanzidict.insert({ "八画","底" });
	bahuacyhanzidict.insert({ "八画","剂" });
	bahuacyhanzidict.insert({ "八画","郊" });
	bahuacyhanzidict.insert({ "八画","废" });
	bahuacyhanzidict.insert({ "八画","净" });
	bahuacyhanzidict.insert({ "八画","盲" });
	bahuacyhanzidict.insert({ "八画","放" });
	bahuacyhanzidict.insert({ "八画","刻" });
	bahuacyhanzidict.insert({ "八画","育" });
	bahuacyhanzidict.insert({ "八画","闸" });
	bahuacyhanzidict.insert({ "八画","闹" });
	bahuacyhanzidict.insert({ "八画","郑" });
	bahuacyhanzidict.insert({ "八画","券" });
	bahuacyhanzidict.insert({ "八画","卷" });
	bahuacyhanzidict.insert({ "八画","单" });
	bahuacyhanzidict.insert({ "八画","炒" });
	bahuacyhanzidict.insert({ "八画","炊" });
	bahuacyhanzidict.insert({ "八画","炕" });
	bahuacyhanzidict.insert({ "八画","炎" });
	bahuacyhanzidict.insert({ "八画","炉" });
	bahuacyhanzidict.insert({ "八画","沫" });
	bahuacyhanzidict.insert({ "八画","浅" });
	bahuacyhanzidict.insert({ "八画","法" });
	bahuacyhanzidict.insert({ "八画","泄" });
	bahuacyhanzidict.insert({ "八画","河" });
	bahuacyhanzidict.insert({ "八画","沾" });
	bahuacyhanzidict.insert({ "八画","泪" });
	bahuacyhanzidict.insert({ "八画","油" });
	bahuacyhanzidict.insert({ "八画","泊" });
	bahuacyhanzidict.insert({ "八画","沿" });
	bahuacyhanzidict.insert({ "八画","泡" });
	bahuacyhanzidict.insert({ "八画","注" });
	bahuacyhanzidict.insert({ "八画","泻" });
	bahuacyhanzidict.insert({ "八画","泳" });
	bahuacyhanzidict.insert({ "八画","泥" });
	bahuacyhanzidict.insert({ "八画","沸" });
	bahuacyhanzidict.insert({ "八画","波" });
	bahuacyhanzidict.insert({ "八画","泼" });
	bahuacyhanzidict.insert({ "八画","泽" });
	bahuacyhanzidict.insert({ "八画","治" });
	bahuacyhanzidict.insert({ "八画","怖" });
	bahuacyhanzidict.insert({ "八画","性" });
	bahuacyhanzidict.insert({ "八画","怕" });
	bahuacyhanzidict.insert({ "八画","怜" });
	bahuacyhanzidict.insert({ "八画","怪" });
	bahuacyhanzidict.insert({ "八画","学" });
	bahuacyhanzidict.insert({ "八画","宝" });
	bahuacyhanzidict.insert({ "八画","宗" });
	bahuacyhanzidict.insert({ "八画","定" });
	bahuacyhanzidict.insert({ "八画","宜" });
	bahuacyhanzidict.insert({ "八画","审" });
	bahuacyhanzidict.insert({ "八画","宙" });
	bahuacyhanzidict.insert({ "八画","官" });
	bahuacyhanzidict.insert({ "八画","空" });
	bahuacyhanzidict.insert({ "八画","帘" });
	bahuacyhanzidict.insert({ "八画","实" });
	bahuacyhanzidict.insert({ "八画","试" });
	bahuacyhanzidict.insert({ "八画","郎" });
	bahuacyhanzidict.insert({ "八画","诗" });
	bahuacyhanzidict.insert({ "八画","肩" });
	bahuacyhanzidict.insert({ "八画","房" });
	bahuacyhanzidict.insert({ "八画","诚" });
	bahuacyhanzidict.insert({ "八画","衬" });
	bahuacyhanzidict.insert({ "八画","衫" });
	bahuacyhanzidict.insert({ "八画","视" });
	bahuacyhanzidict.insert({ "八画","话" });
	bahuacyhanzidict.insert({ "八画","诞" });
	bahuacyhanzidict.insert({ "八画","询" });
	bahuacyhanzidict.insert({ "八画","该" });
	bahuacyhanzidict.insert({ "八画","详" });
	bahuacyhanzidict.insert({ "八画","建" });
	bahuacyhanzidict.insert({ "八画","肃" });
	bahuacyhanzidict.insert({ "八画","录" });
	bahuacyhanzidict.insert({ "八画","隶" });
	bahuacyhanzidict.insert({ "八画","居" });
	bahuacyhanzidict.insert({ "八画","届" });
	bahuacyhanzidict.insert({ "八画","刷" });
	bahuacyhanzidict.insert({ "八画","屈" });
	bahuacyhanzidict.insert({ "八画","弦" });
	bahuacyhanzidict.insert({ "八画","承" });
	bahuacyhanzidict.insert({ "八画","孟" });
	bahuacyhanzidict.insert({ "八画","孤" });
	bahuacyhanzidict.insert({ "八画","陕" });
	bahuacyhanzidict.insert({ "八画","降" });
	bahuacyhanzidict.insert({ "八画","限" });
	bahuacyhanzidict.insert({ "八画","妹" });
	bahuacyhanzidict.insert({ "八画","姑" });
	bahuacyhanzidict.insert({ "八画","姐" });
	bahuacyhanzidict.insert({ "八画","姓" });
	bahuacyhanzidict.insert({ "八画","始" });
	bahuacyhanzidict.insert({ "八画","驾" });
	bahuacyhanzidict.insert({ "八画","参" });
	bahuacyhanzidict.insert({ "八画","艰" });
	bahuacyhanzidict.insert({ "八画","线" });
	bahuacyhanzidict.insert({ "八画","练" });
	bahuacyhanzidict.insert({ "八画","组" });
	bahuacyhanzidict.insert({ "八画","细" });
	bahuacyhanzidict.insert({ "八画","驶" });
	bahuacyhanzidict.insert({ "八画","织" });
	bahuacyhanzidict.insert({ "八画","终" });
	bahuacyhanzidict.insert({ "八画","驻" });
	bahuacyhanzidict.insert({ "八画","驼" });
	bahuacyhanzidict.insert({ "八画","绍" });
	bahuacyhanzidict.insert({ "八画","经" });
	bahuacyhanzidict.insert({ "八画","贯" });


	ofstream file("八画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : bahuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "八画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "八画常用汉字初始化失败" << endl;
	}


}

//九画

void 九画常用汉字() {
	multimap<string, string>jiuhuacyhanzidict;
	jiuhuacyhanzidict.insert({ "九画","奏" });
	jiuhuacyhanzidict.insert({ "九画","春" });
	jiuhuacyhanzidict.insert({ "九画","帮" });
	jiuhuacyhanzidict.insert({ "九画","珍" });
	jiuhuacyhanzidict.insert({ "九画","玻" });
	jiuhuacyhanzidict.insert({ "九画","毒" });
	jiuhuacyhanzidict.insert({ "九画","型" });
	jiuhuacyhanzidict.insert({ "九画","挂" });
	jiuhuacyhanzidict.insert({ "九画","封" });
	jiuhuacyhanzidict.insert({ "九画","持" });
	jiuhuacyhanzidict.insert({ "九画","项" });
	jiuhuacyhanzidict.insert({ "九画","垮" });
	jiuhuacyhanzidict.insert({ "九画","挎" });
	jiuhuacyhanzidict.insert({ "九画","城" });
	jiuhuacyhanzidict.insert({ "九画","挠" });
	jiuhuacyhanzidict.insert({ "九画","政" });
	jiuhuacyhanzidict.insert({ "九画","赴" });
	jiuhuacyhanzidict.insert({ "九画","赵" });
	jiuhuacyhanzidict.insert({ "九画","挡" });
	jiuhuacyhanzidict.insert({ "九画","挺" });
	jiuhuacyhanzidict.insert({ "九画","括" });
	jiuhuacyhanzidict.insert({ "九画","拴" });
	jiuhuacyhanzidict.insert({ "九画","拾" });
	jiuhuacyhanzidict.insert({ "九画","挑" });
	jiuhuacyhanzidict.insert({ "九画","指" });
	jiuhuacyhanzidict.insert({ "九画","垫" });
	jiuhuacyhanzidict.insert({ "九画","挣" });
	jiuhuacyhanzidict.insert({ "九画","挤" });
	jiuhuacyhanzidict.insert({ "九画","拼" });
	jiuhuacyhanzidict.insert({ "九画","挖" });
	jiuhuacyhanzidict.insert({ "九画","按" });
	jiuhuacyhanzidict.insert({ "九画","挥" });
	jiuhuacyhanzidict.insert({ "九画","挪" });
	jiuhuacyhanzidict.insert({ "九画","某" });
	jiuhuacyhanzidict.insert({ "九画","甚" });
	jiuhuacyhanzidict.insert({ "九画","革" });
	jiuhuacyhanzidict.insert({ "九画","荐" });
	jiuhuacyhanzidict.insert({ "九画","巷" });
	jiuhuacyhanzidict.insert({ "九画","带" });
	jiuhuacyhanzidict.insert({ "九画","草" });
	jiuhuacyhanzidict.insert({ "九画","茧" });
	jiuhuacyhanzidict.insert({ "九画","茶" });
	jiuhuacyhanzidict.insert({ "九画","荒" });
	jiuhuacyhanzidict.insert({ "九画","茫" });
	jiuhuacyhanzidict.insert({ "九画","荡" });
	jiuhuacyhanzidict.insert({ "九画","荣" });
	jiuhuacyhanzidict.insert({ "九画","故" });
	jiuhuacyhanzidict.insert({ "九画","胡" });
	jiuhuacyhanzidict.insert({ "九画","南" });
	jiuhuacyhanzidict.insert({ "九画","药" });
	jiuhuacyhanzidict.insert({ "九画","标" });
	jiuhuacyhanzidict.insert({ "九画","枯" });
	jiuhuacyhanzidict.insert({ "九画","柄" });
	jiuhuacyhanzidict.insert({ "九画","栋" });
	jiuhuacyhanzidict.insert({ "九画","相" });
	jiuhuacyhanzidict.insert({ "九画","查" });
	jiuhuacyhanzidict.insert({ "九画","柏" });
	jiuhuacyhanzidict.insert({ "九画","柳" });
	jiuhuacyhanzidict.insert({ "九画","柱" });
	jiuhuacyhanzidict.insert({ "九画","柿" });
	jiuhuacyhanzidict.insert({ "九画","栏" });
	jiuhuacyhanzidict.insert({ "九画","树" });
	jiuhuacyhanzidict.insert({ "九画","要" });
	jiuhuacyhanzidict.insert({ "九画","咸" });
	jiuhuacyhanzidict.insert({ "九画","威" });
	jiuhuacyhanzidict.insert({ "九画","歪" });
	jiuhuacyhanzidict.insert({ "九画","研" });
	jiuhuacyhanzidict.insert({ "九画","砖" });
	jiuhuacyhanzidict.insert({ "九画","厘" });
	jiuhuacyhanzidict.insert({ "九画","厚" });
	jiuhuacyhanzidict.insert({ "九画","砌" });
	jiuhuacyhanzidict.insert({ "九画","砍" });
	jiuhuacyhanzidict.insert({ "九画","面" });
	jiuhuacyhanzidict.insert({ "九画","耐" });
	jiuhuacyhanzidict.insert({ "九画","耍" });
	jiuhuacyhanzidict.insert({ "九画","牵" });
	jiuhuacyhanzidict.insert({ "九画","残" });
	jiuhuacyhanzidict.insert({ "九画","殃" });
	jiuhuacyhanzidict.insert({ "九画","轻" });
	jiuhuacyhanzidict.insert({ "九画","鸦" });
	jiuhuacyhanzidict.insert({ "九画","皆" });
	jiuhuacyhanzidict.insert({ "九画","背" });
	jiuhuacyhanzidict.insert({ "九画","战" });
	jiuhuacyhanzidict.insert({ "九画","点" });
	jiuhuacyhanzidict.insert({ "九画","临" });
	jiuhuacyhanzidict.insert({ "九画","览" });
	jiuhuacyhanzidict.insert({ "九画","竖" });
	jiuhuacyhanzidict.insert({ "九画","省" });
	jiuhuacyhanzidict.insert({ "九画","削" });
	jiuhuacyhanzidict.insert({ "九画","尝" });
	jiuhuacyhanzidict.insert({ "九画","是" });
	jiuhuacyhanzidict.insert({ "九画","盼" });
	jiuhuacyhanzidict.insert({ "九画","眨" });
	jiuhuacyhanzidict.insert({ "九画","哄" });
	jiuhuacyhanzidict.insert({ "九画","显" });
	jiuhuacyhanzidict.insert({ "九画","哑" });
	jiuhuacyhanzidict.insert({ "九画","冒" });
	jiuhuacyhanzidict.insert({ "九画","映" });
	jiuhuacyhanzidict.insert({ "九画","星" });
	jiuhuacyhanzidict.insert({ "九画","昨" });
	jiuhuacyhanzidict.insert({ "九画","畏" });
	jiuhuacyhanzidict.insert({ "九画","趴" });
	jiuhuacyhanzidict.insert({ "九画","胃" });
	jiuhuacyhanzidict.insert({ "九画","贵" });
	jiuhuacyhanzidict.insert({ "九画","界" });
	jiuhuacyhanzidict.insert({ "九画","虹" });
	jiuhuacyhanzidict.insert({ "九画","虾" });
	jiuhuacyhanzidict.insert({ "九画","蚁" });
	jiuhuacyhanzidict.insert({ "九画","思" });
	jiuhuacyhanzidict.insert({ "九画","蚂" });
	jiuhuacyhanzidict.insert({ "九画","虽" });
	jiuhuacyhanzidict.insert({ "九画","品" });
	jiuhuacyhanzidict.insert({ "九画","咽" });
	jiuhuacyhanzidict.insert({ "九画","骂" });
	jiuhuacyhanzidict.insert({ "九画","哗" });
	jiuhuacyhanzidict.insert({ "九画","咱" });
	jiuhuacyhanzidict.insert({ "九画","响" });
	jiuhuacyhanzidict.insert({ "九画","哈" });
	jiuhuacyhanzidict.insert({ "九画","咬" });
	jiuhuacyhanzidict.insert({ "九画","咳" });
	jiuhuacyhanzidict.insert({ "九画","哪" });
	jiuhuacyhanzidict.insert({ "九画","炭" });
	jiuhuacyhanzidict.insert({ "九画","峡" });
	jiuhuacyhanzidict.insert({ "九画","罚" });
	jiuhuacyhanzidict.insert({ "九画","贱" });
	jiuhuacyhanzidict.insert({ "九画","贴" });
	jiuhuacyhanzidict.insert({ "九画","骨" });
	jiuhuacyhanzidict.insert({ "九画","钞" });
	jiuhuacyhanzidict.insert({ "九画","钟" });
	jiuhuacyhanzidict.insert({ "九画","钢" });
	jiuhuacyhanzidict.insert({ "九画","钥" });
	jiuhuacyhanzidict.insert({ "九画","钩" });
	jiuhuacyhanzidict.insert({ "九画","卸" });
	jiuhuacyhanzidict.insert({ "九画","缸" });
	jiuhuacyhanzidict.insert({ "九画","拜" });
	jiuhuacyhanzidict.insert({ "九画","看" });
	jiuhuacyhanzidict.insert({ "九画","矩" });
	jiuhuacyhanzidict.insert({ "九画","怎" });
	jiuhuacyhanzidict.insert({ "九画","牲" });
	jiuhuacyhanzidict.insert({ "九画","选" });
	jiuhuacyhanzidict.insert({ "九画","适" });
	jiuhuacyhanzidict.insert({ "九画","秒" });
	jiuhuacyhanzidict.insert({ "九画","香" });
	jiuhuacyhanzidict.insert({ "九画","种" });
	jiuhuacyhanzidict.insert({ "九画","秋" });
	jiuhuacyhanzidict.insert({ "九画","科" });
	jiuhuacyhanzidict.insert({ "九画","重" });
	jiuhuacyhanzidict.insert({ "九画","复" });
	jiuhuacyhanzidict.insert({ "九画","竿" });
	jiuhuacyhanzidict.insert({ "九画","段" });
	jiuhuacyhanzidict.insert({ "九画","便" });
	jiuhuacyhanzidict.insert({ "九画","俩" });
	jiuhuacyhanzidict.insert({ "九画","贷" });
	jiuhuacyhanzidict.insert({ "九画","顺" });
	jiuhuacyhanzidict.insert({ "九画","修" });
	jiuhuacyhanzidict.insert({ "九画","保" });
	jiuhuacyhanzidict.insert({ "九画","促" });
	jiuhuacyhanzidict.insert({ "九画","侮" });
	jiuhuacyhanzidict.insert({ "九画","俭" });
	jiuhuacyhanzidict.insert({ "九画","俗" });
	jiuhuacyhanzidict.insert({ "九画","俘" });
	jiuhuacyhanzidict.insert({ "九画","信" });
	jiuhuacyhanzidict.insert({ "九画","皇" });


	jiuhuacyhanzidict.insert({ "九画","泉" });
	jiuhuacyhanzidict.insert({ "九画","鬼" });
	jiuhuacyhanzidict.insert({ "九画","侵" });
	jiuhuacyhanzidict.insert({ "九画","追" });
	jiuhuacyhanzidict.insert({ "九画","俊" });
	jiuhuacyhanzidict.insert({ "九画","盾" });
	jiuhuacyhanzidict.insert({ "九画","待" });
	jiuhuacyhanzidict.insert({ "九画","律" });
	jiuhuacyhanzidict.insert({ "九画","很" });
	jiuhuacyhanzidict.insert({ "九画","须" });
	jiuhuacyhanzidict.insert({ "九画","叙" });
	jiuhuacyhanzidict.insert({ "九画","剑" });
	jiuhuacyhanzidict.insert({ "九画","逃" });
	jiuhuacyhanzidict.insert({ "九画","食" });
	jiuhuacyhanzidict.insert({ "九画","盆" });
	jiuhuacyhanzidict.insert({ "九画","胆" });
	jiuhuacyhanzidict.insert({ "九画","胜" });
	jiuhuacyhanzidict.insert({ "九画","胞" });
	jiuhuacyhanzidict.insert({ "九画","胖" });
	jiuhuacyhanzidict.insert({ "九画","脉" });
	jiuhuacyhanzidict.insert({ "九画","勉" });
	jiuhuacyhanzidict.insert({ "九画","狭" });
	jiuhuacyhanzidict.insert({ "九画","狮" });
	jiuhuacyhanzidict.insert({ "九画","独" });
	jiuhuacyhanzidict.insert({ "九画","狡" });
	jiuhuacyhanzidict.insert({ "九画","狱" });
	jiuhuacyhanzidict.insert({ "九画","狠" });
	jiuhuacyhanzidict.insert({ "九画","贸" });
	jiuhuacyhanzidict.insert({ "九画","怨" });
	jiuhuacyhanzidict.insert({ "九画","急" });
	jiuhuacyhanzidict.insert({ "九画","饶" });
	jiuhuacyhanzidict.insert({ "九画","蚀" });
	jiuhuacyhanzidict.insert({ "九画","饺" });
	jiuhuacyhanzidict.insert({ "九画","饼" });
	jiuhuacyhanzidict.insert({ "九画","弯" });
	jiuhuacyhanzidict.insert({ "九画","将" });
	jiuhuacyhanzidict.insert({ "九画","奖" });
	jiuhuacyhanzidict.insert({ "九画","哀" });
	jiuhuacyhanzidict.insert({ "九画","亭" });
	jiuhuacyhanzidict.insert({ "九画","亮" });
	jiuhuacyhanzidict.insert({ "九画","度" });
	jiuhuacyhanzidict.insert({ "九画","迹" });
	jiuhuacyhanzidict.insert({ "九画","庭" });
	jiuhuacyhanzidict.insert({ "九画","疮" });
	jiuhuacyhanzidict.insert({ "九画","疯" });
	jiuhuacyhanzidict.insert({ "九画","疫" });
	jiuhuacyhanzidict.insert({ "九画","疤" });
	jiuhuacyhanzidict.insert({ "九画","姿" });
	jiuhuacyhanzidict.insert({ "九画","亲" });
	jiuhuacyhanzidict.insert({ "九画","音" });
	jiuhuacyhanzidict.insert({ "九画","帝" });
	jiuhuacyhanzidict.insert({ "九画","施" });
	jiuhuacyhanzidict.insert({ "九画","闻" });
	jiuhuacyhanzidict.insert({ "九画","阀" });
	jiuhuacyhanzidict.insert({ "九画","阁" });
	jiuhuacyhanzidict.insert({ "九画","差" });
	jiuhuacyhanzidict.insert({ "九画","养" });
	jiuhuacyhanzidict.insert({ "九画","美" });
	jiuhuacyhanzidict.insert({ "九画","姜" });
	jiuhuacyhanzidict.insert({ "九画","叛" });
	jiuhuacyhanzidict.insert({ "九画","送" });
	jiuhuacyhanzidict.insert({ "九画","类" });
	jiuhuacyhanzidict.insert({ "九画","迷" });
	jiuhuacyhanzidict.insert({ "九画","前" });
	jiuhuacyhanzidict.insert({ "九画","首" });
	jiuhuacyhanzidict.insert({ "九画","逆" });
	jiuhuacyhanzidict.insert({ "九画","总" });
	jiuhuacyhanzidict.insert({ "九画","炼" });
	jiuhuacyhanzidict.insert({ "九画","炸" });
	jiuhuacyhanzidict.insert({ "九画","炮" });
	jiuhuacyhanzidict.insert({ "九画","烂" });
	jiuhuacyhanzidict.insert({ "九画","剃" });
	jiuhuacyhanzidict.insert({ "九画","洁" });
	jiuhuacyhanzidict.insert({ "九画","洪" });
	jiuhuacyhanzidict.insert({ "九画","洒" });
	jiuhuacyhanzidict.insert({ "九画","浇" });
	jiuhuacyhanzidict.insert({ "九画","浊" });
	jiuhuacyhanzidict.insert({ "九画","洞" });
	jiuhuacyhanzidict.insert({ "九画","测" });
	jiuhuacyhanzidict.insert({ "九画","洗" });
	jiuhuacyhanzidict.insert({ "九画","活" });
	jiuhuacyhanzidict.insert({ "九画","派" });
	jiuhuacyhanzidict.insert({ "九画","洽" });
	jiuhuacyhanzidict.insert({ "九画","染" });
	jiuhuacyhanzidict.insert({ "九画","济" });
	jiuhuacyhanzidict.insert({ "九画","洋" });
	jiuhuacyhanzidict.insert({ "九画","洲" });
	jiuhuacyhanzidict.insert({ "九画","浑" });
	jiuhuacyhanzidict.insert({ "九画","浓" });
	jiuhuacyhanzidict.insert({ "九画","津" });
	jiuhuacyhanzidict.insert({ "九画","恒" });
	jiuhuacyhanzidict.insert({ "九画","恢" });
	jiuhuacyhanzidict.insert({ "九画","恰" });
	jiuhuacyhanzidict.insert({ "九画","恼" });
	jiuhuacyhanzidict.insert({ "九画","恨" });
	jiuhuacyhanzidict.insert({ "九画","举" });
	jiuhuacyhanzidict.insert({ "九画","觉" });
	jiuhuacyhanzidict.insert({ "九画","宣" });
	jiuhuacyhanzidict.insert({ "九画","室" });
	jiuhuacyhanzidict.insert({ "九画","宫" });
	jiuhuacyhanzidict.insert({ "九画","宪" });
	jiuhuacyhanzidict.insert({ "九画","突" });
	jiuhuacyhanzidict.insert({ "九画","穿" });
	jiuhuacyhanzidict.insert({ "九画","窃" });
	jiuhuacyhanzidict.insert({ "九画","客" });
	jiuhuacyhanzidict.insert({ "九画","冠" });
	jiuhuacyhanzidict.insert({ "九画","语" });
	jiuhuacyhanzidict.insert({ "九画","扁" });
	jiuhuacyhanzidict.insert({ "九画","袄" });
	jiuhuacyhanzidict.insert({ "九画","祖" });
	jiuhuacyhanzidict.insert({ "九画","神" });
	jiuhuacyhanzidict.insert({ "九画","祝" });
	jiuhuacyhanzidict.insert({ "九画","误" });
	jiuhuacyhanzidict.insert({ "九画","诱" });
	jiuhuacyhanzidict.insert({ "九画","说" });
	jiuhuacyhanzidict.insert({ "九画","诵" });
	jiuhuacyhanzidict.insert({ "九画","垦" });
	jiuhuacyhanzidict.insert({ "九画","退" });
	jiuhuacyhanzidict.insert({ "九画","既" });
	jiuhuacyhanzidict.insert({ "九画","屋" });
	jiuhuacyhanzidict.insert({ "九画","昼" });
	jiuhuacyhanzidict.insert({ "九画","费" });
	jiuhuacyhanzidict.insert({ "九画","陡" });
	jiuhuacyhanzidict.insert({ "九画","眉" });
	jiuhuacyhanzidict.insert({ "九画","孩" });
	jiuhuacyhanzidict.insert({ "九画","除" });
	jiuhuacyhanzidict.insert({ "九画","险" });
	jiuhuacyhanzidict.insert({ "九画","院" });
	jiuhuacyhanzidict.insert({ "九画","娃" });
	jiuhuacyhanzidict.insert({ "九画","姥" });
	jiuhuacyhanzidict.insert({ "九画","姨" });
	jiuhuacyhanzidict.insert({ "九画","姻" });
	jiuhuacyhanzidict.insert({ "九画","娇" });
	jiuhuacyhanzidict.insert({ "九画","怒" });
	jiuhuacyhanzidict.insert({ "九画","架" });
	jiuhuacyhanzidict.insert({ "九画","贺" });
	jiuhuacyhanzidict.insert({ "九画","盈" });
	jiuhuacyhanzidict.insert({ "九画","勇" });
	jiuhuacyhanzidict.insert({ "九画","怠" });
	jiuhuacyhanzidict.insert({ "九画","柔" });
	jiuhuacyhanzidict.insert({ "九画","垒" });
	jiuhuacyhanzidict.insert({ "九画","绑" });
	jiuhuacyhanzidict.insert({ "九画","绒" });
	jiuhuacyhanzidict.insert({ "九画","结" });
	jiuhuacyhanzidict.insert({ "九画","绕" });
	jiuhuacyhanzidict.insert({ "九画","骄" });
	jiuhuacyhanzidict.insert({ "九画","绘" });
	jiuhuacyhanzidict.insert({ "九画","给" });
	jiuhuacyhanzidict.insert({ "九画","络" });
	jiuhuacyhanzidict.insert({ "九画","骆" });
	jiuhuacyhanzidict.insert({ "九画","绝" });
	jiuhuacyhanzidict.insert({ "九画","绞" });
	jiuhuacyhanzidict.insert({ "九画","统" });

	ofstream file("九画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : jiuhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "九画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "九画常用汉字初始化失败" << endl;
	}


}


//十画
void 十画常用汉字() {
	multimap<string, string>shihuacyhanzidict;
	shihuacyhanzidict.insert({ "十画","耕" });
	shihuacyhanzidict.insert({ "十画","耗" });
	shihuacyhanzidict.insert({ "十画","艳" });
	shihuacyhanzidict.insert({ "十画","泰" });
	shihuacyhanzidict.insert({ "十画","珠" });
	shihuacyhanzidict.insert({ "十画","班" });
	shihuacyhanzidict.insert({ "十画","素" });
	shihuacyhanzidict.insert({ "十画","蚕" });
	shihuacyhanzidict.insert({ "十画","顽" });
	shihuacyhanzidict.insert({ "十画","盏" });
	shihuacyhanzidict.insert({ "十画","匪" });
	shihuacyhanzidict.insert({ "十画","捞" });
	shihuacyhanzidict.insert({ "十画","栽" });
	shihuacyhanzidict.insert({ "十画","捕" });
	shihuacyhanzidict.insert({ "十画","振" });
	shihuacyhanzidict.insert({ "十画","载" });
	shihuacyhanzidict.insert({ "十画","赶" });
	shihuacyhanzidict.insert({ "十画","起" });
	shihuacyhanzidict.insert({ "十画","盐" });
	shihuacyhanzidict.insert({ "十画","捎" });
	shihuacyhanzidict.insert({ "十画","捏" });
	shihuacyhanzidict.insert({ "十画","埋" });
	shihuacyhanzidict.insert({ "十画","捉" });
	shihuacyhanzidict.insert({ "十画","捆" });
	shihuacyhanzidict.insert({ "十画","捐" });
	shihuacyhanzidict.insert({ "十画","损" });
	shihuacyhanzidict.insert({ "十画","都" });
	shihuacyhanzidict.insert({ "十画","哲" });
	shihuacyhanzidict.insert({ "十画","逝" });
	shihuacyhanzidict.insert({ "十画","捡" });
	shihuacyhanzidict.insert({ "十画","换" });
	shihuacyhanzidict.insert({ "十画","挽" });
	shihuacyhanzidict.insert({ "十画","热" });
	shihuacyhanzidict.insert({ "十画","恐" });
	shihuacyhanzidict.insert({ "十画","壶" });
	shihuacyhanzidict.insert({ "十画","挨" });
	shihuacyhanzidict.insert({ "十画","耻" });
	shihuacyhanzidict.insert({ "十画","耽" });
	shihuacyhanzidict.insert({ "十画","恭" });
	shihuacyhanzidict.insert({ "十画","莲" });
	shihuacyhanzidict.insert({ "十画","莫" });
	shihuacyhanzidict.insert({ "十画","荷" });
	shihuacyhanzidict.insert({ "十画","获" });
	shihuacyhanzidict.insert({ "十画","晋" });
	shihuacyhanzidict.insert({ "十画","恶" });
	shihuacyhanzidict.insert({ "十画","真" });
	shihuacyhanzidict.insert({ "十画","框" });
	shihuacyhanzidict.insert({ "十画","桂" });
	shihuacyhanzidict.insert({ "十画","档" });
	shihuacyhanzidict.insert({ "十画","桐" });
	shihuacyhanzidict.insert({ "十画","株" });
	shihuacyhanzidict.insert({ "十画","桥" });
	shihuacyhanzidict.insert({ "十画","桃" });
	shihuacyhanzidict.insert({ "十画","格" });
	shihuacyhanzidict.insert({ "十画","校" });
	shihuacyhanzidict.insert({ "十画","核" });
	shihuacyhanzidict.insert({ "十画","样" });
	shihuacyhanzidict.insert({ "十画","根" });
	shihuacyhanzidict.insert({ "十画","索" });
	shihuacyhanzidict.insert({ "十画","哥" });
	shihuacyhanzidict.insert({ "十画","速" });
	shihuacyhanzidict.insert({ "十画","逗" });
	shihuacyhanzidict.insert({ "十画","栗" });
	shihuacyhanzidict.insert({ "十画","配" });
	shihuacyhanzidict.insert({ "十画","翅" });
	shihuacyhanzidict.insert({ "十画","辱" });
	shihuacyhanzidict.insert({ "十画","唇" });
	shihuacyhanzidict.insert({ "十画","夏" });
	shihuacyhanzidict.insert({ "十画","础" });
	shihuacyhanzidict.insert({ "十画","破" });
	shihuacyhanzidict.insert({ "十画","原" });
	shihuacyhanzidict.insert({ "十画","套" });
	shihuacyhanzidict.insert({ "十画","逐" });
	shihuacyhanzidict.insert({ "十画","烈" });
	shihuacyhanzidict.insert({ "十画","殊" });
	shihuacyhanzidict.insert({ "十画","顾" });
	shihuacyhanzidict.insert({ "十画","轿" });
	shihuacyhanzidict.insert({ "十画","较" });
	shihuacyhanzidict.insert({ "十画","顿" });
	shihuacyhanzidict.insert({ "十画","毙" });
	shihuacyhanzidict.insert({ "十画","致" });
	shihuacyhanzidict.insert({ "十画","柴" });
	shihuacyhanzidict.insert({ "十画","桌" });
	shihuacyhanzidict.insert({ "十画","虑" });
	shihuacyhanzidict.insert({ "十画","监" });
	shihuacyhanzidict.insert({ "十画","紧" });
	shihuacyhanzidict.insert({ "十画","党" });
	shihuacyhanzidict.insert({ "十画","晒" });
	shihuacyhanzidict.insert({ "十画","眠" });
	shihuacyhanzidict.insert({ "十画","晓" });
	shihuacyhanzidict.insert({ "十画","鸭" });
	shihuacyhanzidict.insert({ "十画","晃" });
	shihuacyhanzidict.insert({ "十画","晌" });
	shihuacyhanzidict.insert({ "十画","晕" });
	shihuacyhanzidict.insert({ "十画","蚊" });
	shihuacyhanzidict.insert({ "十画","哨" });
	shihuacyhanzidict.insert({ "十画","哭" });
	shihuacyhanzidict.insert({ "十画","恩" });
	shihuacyhanzidict.insert({ "十画","唤" });
	shihuacyhanzidict.insert({ "十画","啊" });
	shihuacyhanzidict.insert({ "十画","唉" });
	shihuacyhanzidict.insert({ "十画","罢" });
	shihuacyhanzidict.insert({ "十画","峰" });
	shihuacyhanzidict.insert({ "十画","圆" });
	shihuacyhanzidict.insert({ "十画","贼" });
	shihuacyhanzidict.insert({ "十画","贿" });
	shihuacyhanzidict.insert({ "十画","钱" });
	shihuacyhanzidict.insert({ "十画","钳" });
	shihuacyhanzidict.insert({ "十画","钻" });
	shihuacyhanzidict.insert({ "十画","铁" });
	shihuacyhanzidict.insert({ "十画","铃" });
	shihuacyhanzidict.insert({ "十画","铅" });
	shihuacyhanzidict.insert({ "十画","缺" });
	shihuacyhanzidict.insert({ "十画","氧" });
	shihuacyhanzidict.insert({ "十画","特" });
	shihuacyhanzidict.insert({ "十画","牺" });
	shihuacyhanzidict.insert({ "十画","造" });
	shihuacyhanzidict.insert({ "十画","乘" });
	shihuacyhanzidict.insert({ "十画","敌" });
	shihuacyhanzidict.insert({ "十画","秤" });
	shihuacyhanzidict.insert({ "十画","租" });
	shihuacyhanzidict.insert({ "十画","积" });
	shihuacyhanzidict.insert({ "十画","秧" });
	shihuacyhanzidict.insert({ "十画","秩" });
	shihuacyhanzidict.insert({ "十画","称" });
	shihuacyhanzidict.insert({ "十画","秘" });
	shihuacyhanzidict.insert({ "十画","透" });
	shihuacyhanzidict.insert({ "十画","笔" });
	shihuacyhanzidict.insert({ "十画","笑" });
	shihuacyhanzidict.insert({ "十画","笋" });
	shihuacyhanzidict.insert({ "十画","债" });
	shihuacyhanzidict.insert({ "十画","借" });
	shihuacyhanzidict.insert({ "十画","值" });
	shihuacyhanzidict.insert({ "十画","倚" });
	shihuacyhanzidict.insert({ "十画","倾" });
	shihuacyhanzidict.insert({ "十画","倒" });
	shihuacyhanzidict.insert({ "十画","倘" });
	shihuacyhanzidict.insert({ "十画","俱" });
	shihuacyhanzidict.insert({ "十画","倡" });
	shihuacyhanzidict.insert({ "十画","候" });
	shihuacyhanzidict.insert({ "十画","俯" });
	shihuacyhanzidict.insert({ "十画","倍" });
	shihuacyhanzidict.insert({ "十画","倦" });
	shihuacyhanzidict.insert({ "十画","健" });
	shihuacyhanzidict.insert({ "十画","臭" });
	shihuacyhanzidict.insert({ "十画","射" });
	shihuacyhanzidict.insert({ "十画","躬" });
	shihuacyhanzidict.insert({ "十画","息" });
	shihuacyhanzidict.insert({ "十画","徒" });
	shihuacyhanzidict.insert({ "十画","徐" });
	shihuacyhanzidict.insert({ "十画","舰" });
	shihuacyhanzidict.insert({ "十画","舱" });
	shihuacyhanzidict.insert({ "十画","般" });
	shihuacyhanzidict.insert({ "十画","航" });
	shihuacyhanzidict.insert({ "十画","途" });
	shihuacyhanzidict.insert({ "十画","拿" });
	shihuacyhanzidict.insert({ "十画","爹" });
	shihuacyhanzidict.insert({ "十画","爱" });
	shihuacyhanzidict.insert({ "十画","颂" });
	shihuacyhanzidict.insert({ "十画","翁" });
	shihuacyhanzidict.insert({ "十画","脆" });
	shihuacyhanzidict.insert({ "十画","脂" });
	shihuacyhanzidict.insert({ "十画","胸" });
	shihuacyhanzidict.insert({ "十画","胳" });
	shihuacyhanzidict.insert({ "十画","脏" });
	shihuacyhanzidict.insert({ "十画","胶" });
	shihuacyhanzidict.insert({ "十画","脑" });
	shihuacyhanzidict.insert({ "十画","狸" });
	shihuacyhanzidict.insert({ "十画","狼" });
	shihuacyhanzidict.insert({ "十画","逢" });
	shihuacyhanzidict.insert({ "十画","留" });
	shihuacyhanzidict.insert({ "十画","皱" });
	shihuacyhanzidict.insert({ "十画","饿" });
	shihuacyhanzidict.insert({ "十画","恋" });
	shihuacyhanzidict.insert({ "十画","桨" });
	shihuacyhanzidict.insert({ "十画","浆" });
	shihuacyhanzidict.insert({ "十画","衰" });
	shihuacyhanzidict.insert({ "十画","高" });
	shihuacyhanzidict.insert({ "十画","席" });
	shihuacyhanzidict.insert({ "十画","准" });
	shihuacyhanzidict.insert({ "十画","座" });
	shihuacyhanzidict.insert({ "十画","脊" });
	shihuacyhanzidict.insert({ "十画","症" });
	shihuacyhanzidict.insert({ "十画","病" });
	shihuacyhanzidict.insert({ "十画","疾" });
	shihuacyhanzidict.insert({ "十画","疼" });

	shihuacyhanzidict.insert({ "十画","疲" });
	shihuacyhanzidict.insert({ "十画","效" });
	shihuacyhanzidict.insert({ "十画","离" });
	shihuacyhanzidict.insert({ "十画","唐" });
	shihuacyhanzidict.insert({ "十画","资" });
	shihuacyhanzidict.insert({ "十画","凉" });
	shihuacyhanzidict.insert({ "十画","站" });
	shihuacyhanzidict.insert({ "十画","剖" });
	shihuacyhanzidict.insert({ "十画","竞" });
	shihuacyhanzidict.insert({ "十画","部" });
	shihuacyhanzidict.insert({ "十画","旁" });
	shihuacyhanzidict.insert({ "十画","旅" });
	shihuacyhanzidict.insert({ "十画","畜" });
	shihuacyhanzidict.insert({ "十画","阅" });
	shihuacyhanzidict.insert({ "十画","羞" });
	shihuacyhanzidict.insert({ "十画","瓶" });
	shihuacyhanzidict.insert({ "十画","拳" });
	shihuacyhanzidict.insert({ "十画","粉" });
	shihuacyhanzidict.insert({ "十画","料" });
	shihuacyhanzidict.insert({ "十画","益" });
	shihuacyhanzidict.insert({ "十画","兼" });
	shihuacyhanzidict.insert({ "十画","烤" });
	shihuacyhanzidict.insert({ "十画","烘" });
	shihuacyhanzidict.insert({ "十画","烦" });
	shihuacyhanzidict.insert({ "十画","烧" });
	shihuacyhanzidict.insert({ "十画","烛" });
	shihuacyhanzidict.insert({ "十画","烟" });
	shihuacyhanzidict.insert({ "十画","递" });
	shihuacyhanzidict.insert({ "十画","涛" });
	shihuacyhanzidict.insert({ "十画","浙" });
	shihuacyhanzidict.insert({ "十画","涝" });
	shihuacyhanzidict.insert({ "十画","酒" });
	shihuacyhanzidict.insert({ "十画","涉" });
	shihuacyhanzidict.insert({ "十画","消" });
	shihuacyhanzidict.insert({ "十画","浩" });
	shihuacyhanzidict.insert({ "十画","海" });
	shihuacyhanzidict.insert({ "十画","涂" });
	shihuacyhanzidict.insert({ "十画","浴" });
	shihuacyhanzidict.insert({ "十画","浮" });
	shihuacyhanzidict.insert({ "十画","流" });
	shihuacyhanzidict.insert({ "十画","润" });
	shihuacyhanzidict.insert({ "十画","浪" });
	shihuacyhanzidict.insert({ "十画","浸" });
	shihuacyhanzidict.insert({ "十画","涨" });
	shihuacyhanzidict.insert({ "十画","烫" });
	shihuacyhanzidict.insert({ "十画","涌" });
	shihuacyhanzidict.insert({ "十画","悟" });
	shihuacyhanzidict.insert({ "十画","悄" });
	shihuacyhanzidict.insert({ "十画","悔" });
	shihuacyhanzidict.insert({ "十画","悦" });
	shihuacyhanzidict.insert({ "十画","害" });
	shihuacyhanzidict.insert({ "十画","宽" });
	shihuacyhanzidict.insert({ "十画","家" });
	shihuacyhanzidict.insert({ "十画","宵" });
	shihuacyhanzidict.insert({ "十画","宴" });
	shihuacyhanzidict.insert({ "十画","宾" });
	shihuacyhanzidict.insert({ "十画","窄" });
	shihuacyhanzidict.insert({ "十画","容" });
	shihuacyhanzidict.insert({ "十画","宰" });
	shihuacyhanzidict.insert({ "十画","案" });
	shihuacyhanzidict.insert({ "十画","请" });
	shihuacyhanzidict.insert({ "十画","朗" });
	shihuacyhanzidict.insert({ "十画","诸" });
	shihuacyhanzidict.insert({ "十画","读" });
	shihuacyhanzidict.insert({ "十画","扇" });
	shihuacyhanzidict.insert({ "十画","袜" });
	shihuacyhanzidict.insert({ "十画","袖" });
	shihuacyhanzidict.insert({ "十画","袍" });
	shihuacyhanzidict.insert({ "十画","被" });
	shihuacyhanzidict.insert({ "十画","祥" });
	shihuacyhanzidict.insert({ "十画","课" });
	shihuacyhanzidict.insert({ "十画","谁" });
	shihuacyhanzidict.insert({ "十画","调" });
	shihuacyhanzidict.insert({ "十画","冤" });
	shihuacyhanzidict.insert({ "十画","谅" });
	shihuacyhanzidict.insert({ "十画","谈" });
	shihuacyhanzidict.insert({ "十画","谊" });
	shihuacyhanzidict.insert({ "十画","剥" });
	shihuacyhanzidict.insert({ "十画","恳" });
	shihuacyhanzidict.insert({ "十画","展" });
	shihuacyhanzidict.insert({ "十画","剧" });
	shihuacyhanzidict.insert({ "十画","屑" });
	shihuacyhanzidict.insert({ "十画","弱" });
	shihuacyhanzidict.insert({ "十画","陵" });
	shihuacyhanzidict.insert({ "十画","陶" });
	shihuacyhanzidict.insert({ "十画","陷" });
	shihuacyhanzidict.insert({ "十画","陪" });
	shihuacyhanzidict.insert({ "十画","娱" });
	shihuacyhanzidict.insert({ "十画","娘" });
	shihuacyhanzidict.insert({ "十画","通" });
	shihuacyhanzidict.insert({ "十画","能" });
	shihuacyhanzidict.insert({ "十画","难" });
	shihuacyhanzidict.insert({ "十画","预" });
	shihuacyhanzidict.insert({ "十画","桑" });
	shihuacyhanzidict.insert({ "十画","绢" });
	shihuacyhanzidict.insert({ "十画","绣" });
	shihuacyhanzidict.insert({ "十画","验" });
	shihuacyhanzidict.insert({ "十画","继" });


	ofstream file("十画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shihuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十画常用汉字初始化失败" << endl;
	}


}

//十一画
void 十一画常用汉字() {
	multimap<string, string>shiyihuacyhanzidict;
	shiyihuacyhanzidict.insert({ "十一画","球" });
	shiyihuacyhanzidict.insert({ "十一画","理" });
	shiyihuacyhanzidict.insert({ "十一画","捧" });
	shiyihuacyhanzidict.insert({ "十一画","堵" });
	shiyihuacyhanzidict.insert({ "十一画","描" });
	shiyihuacyhanzidict.insert({ "十一画","域" });
	shiyihuacyhanzidict.insert({ "十一画","掩" });
	shiyihuacyhanzidict.insert({ "十一画","捷" });
	shiyihuacyhanzidict.insert({ "十一画","排" });
	shiyihuacyhanzidict.insert({ "十一画","掉" });
	shiyihuacyhanzidict.insert({ "十一画","堆" });
	shiyihuacyhanzidict.insert({ "十一画","推" });
	shiyihuacyhanzidict.insert({ "十一画","掀" });
	shiyihuacyhanzidict.insert({ "十一画","授" });
	shiyihuacyhanzidict.insert({ "十一画","教" });
	shiyihuacyhanzidict.insert({ "十一画","掏" });
	shiyihuacyhanzidict.insert({ "十一画","掠" });
	shiyihuacyhanzidict.insert({ "十一画","培" });
	shiyihuacyhanzidict.insert({ "十一画","接" });
	shiyihuacyhanzidict.insert({ "十一画","控" });
	shiyihuacyhanzidict.insert({ "十一画","探" });
	shiyihuacyhanzidict.insert({ "十一画","据" });
	shiyihuacyhanzidict.insert({ "十一画","掘" });
	shiyihuacyhanzidict.insert({ "十一画","职" });
	shiyihuacyhanzidict.insert({ "十一画","基" });
	shiyihuacyhanzidict.insert({ "十一画","著" });
	shiyihuacyhanzidict.insert({ "十一画","勒" });
	shiyihuacyhanzidict.insert({ "十一画","黄" });
	shiyihuacyhanzidict.insert({ "十一画","萌" });
	shiyihuacyhanzidict.insert({ "十一画","萝" });
	shiyihuacyhanzidict.insert({ "十一画","菌" });
	shiyihuacyhanzidict.insert({ "十一画","菜" });
	shiyihuacyhanzidict.insert({ "十一画","萄" });
	shiyihuacyhanzidict.insert({ "十一画","菊" });
	shiyihuacyhanzidict.insert({ "十一画","萍" });
	shiyihuacyhanzidict.insert({ "十一画","菠" });
	shiyihuacyhanzidict.insert({ "十一画","营" });
	shiyihuacyhanzidict.insert({ "十一画","械" });
	shiyihuacyhanzidict.insert({ "十一画","梦" });
	shiyihuacyhanzidict.insert({ "十一画","梢" });
	shiyihuacyhanzidict.insert({ "十一画","梅" });
	shiyihuacyhanzidict.insert({ "十一画","检" });
	shiyihuacyhanzidict.insert({ "十一画","梳" });
	shiyihuacyhanzidict.insert({ "十一画","梯" });
	shiyihuacyhanzidict.insert({ "十一画","桶" });
	shiyihuacyhanzidict.insert({ "十一画","救" });
	shiyihuacyhanzidict.insert({ "十一画","副" });
	shiyihuacyhanzidict.insert({ "十一画","票" });
	shiyihuacyhanzidict.insert({ "十一画","戚" });
	shiyihuacyhanzidict.insert({ "十一画","爽" });
	shiyihuacyhanzidict.insert({ "十一画","聋" });
	shiyihuacyhanzidict.insert({ "十一画","袭" });
	shiyihuacyhanzidict.insert({ "十一画","盛" });
	shiyihuacyhanzidict.insert({ "十一画","雪" });
	shiyihuacyhanzidict.insert({ "十一画","辅" });
	shiyihuacyhanzidict.insert({ "十一画","辆" });
	shiyihuacyhanzidict.insert({ "十一画","虚" });
	shiyihuacyhanzidict.insert({ "十一画","雀" });
	shiyihuacyhanzidict.insert({ "十一画","堂" });
	shiyihuacyhanzidict.insert({ "十一画","常" });
	shiyihuacyhanzidict.insert({ "十一画","匙" });
	shiyihuacyhanzidict.insert({ "十一画","晨" });
	shiyihuacyhanzidict.insert({ "十一画","睁" });
	shiyihuacyhanzidict.insert({ "十一画","眯" });
	shiyihuacyhanzidict.insert({ "十一画","眼" });
	shiyihuacyhanzidict.insert({ "十一画","悬" });
	shiyihuacyhanzidict.insert({ "十一画","野" });
	shiyihuacyhanzidict.insert({ "十一画","啦" });
	shiyihuacyhanzidict.insert({ "十一画","晚" });
	shiyihuacyhanzidict.insert({ "十一画","啄" });
	shiyihuacyhanzidict.insert({ "十一画","距" });
	shiyihuacyhanzidict.insert({ "十一画","跃" });
	shiyihuacyhanzidict.insert({ "十一画","略" });
	shiyihuacyhanzidict.insert({ "十一画","蛇" });
	shiyihuacyhanzidict.insert({ "十一画","累" });
	shiyihuacyhanzidict.insert({ "十一画","唱" });
	shiyihuacyhanzidict.insert({ "十一画","患" });
	shiyihuacyhanzidict.insert({ "十一画","唯" });
	shiyihuacyhanzidict.insert({ "十一画","崖" });
	shiyihuacyhanzidict.insert({ "十一画","崭" });
	shiyihuacyhanzidict.insert({ "十一画","崇" });
	shiyihuacyhanzidict.insert({ "十一画","圈" });
	shiyihuacyhanzidict.insert({ "十一画","铜" });
	shiyihuacyhanzidict.insert({ "十一画","铲" });
	shiyihuacyhanzidict.insert({ "十一画","银" });
	shiyihuacyhanzidict.insert({ "十一画","甜" });
	shiyihuacyhanzidict.insert({ "十一画","梨" });
	shiyihuacyhanzidict.insert({ "十一画","犁" });
	shiyihuacyhanzidict.insert({ "十一画","移" });
	shiyihuacyhanzidict.insert({ "十一画","笨" });
	shiyihuacyhanzidict.insert({ "十一画","笼" });
	shiyihuacyhanzidict.insert({ "十一画","笛" });
	shiyihuacyhanzidict.insert({ "十一画","符" });
	shiyihuacyhanzidict.insert({ "十一画","第" });
	shiyihuacyhanzidict.insert({ "十一画","敏" });
	shiyihuacyhanzidict.insert({ "十一画","做" });
	shiyihuacyhanzidict.insert({ "十一画","袋" });
	shiyihuacyhanzidict.insert({ "十一画","悠" });
	shiyihuacyhanzidict.insert({ "十一画","偿" });
	shiyihuacyhanzidict.insert({ "十一画","偶" });
	shiyihuacyhanzidict.insert({ "十一画","偷" });
	shiyihuacyhanzidict.insert({ "十一画","您" });
	shiyihuacyhanzidict.insert({ "十一画","售" });
	shiyihuacyhanzidict.insert({ "十一画","停" });
	shiyihuacyhanzidict.insert({ "十一画","偏" });
	shiyihuacyhanzidict.insert({ "十一画","假" });
	shiyihuacyhanzidict.insert({ "十一画","得" });
	shiyihuacyhanzidict.insert({ "十一画","衔" });
	shiyihuacyhanzidict.insert({ "十一画","盘" });
	shiyihuacyhanzidict.insert({ "十一画","船" });
	shiyihuacyhanzidict.insert({ "十一画","斜" });
	shiyihuacyhanzidict.insert({ "十一画","盒" });
	shiyihuacyhanzidict.insert({ "十一画","鸽" });
	shiyihuacyhanzidict.insert({ "十一画","悉" });
	shiyihuacyhanzidict.insert({ "十一画","欲" });
	shiyihuacyhanzidict.insert({ "十一画","彩" });
	shiyihuacyhanzidict.insert({ "十一画","领" });
	shiyihuacyhanzidict.insert({ "十一画","脚" });
	shiyihuacyhanzidict.insert({ "十一画","脖" });
	shiyihuacyhanzidict.insert({ "十一画","脸" });
	shiyihuacyhanzidict.insert({ "十一画","脱" });
	shiyihuacyhanzidict.insert({ "十一画","象" });
	shiyihuacyhanzidict.insert({ "十一画","够" });
	shiyihuacyhanzidict.insert({ "十一画","猜" });
	shiyihuacyhanzidict.insert({ "十一画","猪" });
	shiyihuacyhanzidict.insert({ "十一画","猎" });
	shiyihuacyhanzidict.insert({ "十一画","猫" });
	shiyihuacyhanzidict.insert({ "十一画","猛" });
	shiyihuacyhanzidict.insert({ "十一画","馅" });
	shiyihuacyhanzidict.insert({ "十一画","馆" });
	shiyihuacyhanzidict.insert({ "十一画","凑" });
	shiyihuacyhanzidict.insert({ "十一画","减" });
	shiyihuacyhanzidict.insert({ "十一画","毫" });
	shiyihuacyhanzidict.insert({ "十一画","麻" });
	shiyihuacyhanzidict.insert({ "十一画","痒" });
	shiyihuacyhanzidict.insert({ "十一画","痕" });
	shiyihuacyhanzidict.insert({ "十一画","廊" });
	shiyihuacyhanzidict.insert({ "十一画","康" });
	shiyihuacyhanzidict.insert({ "十一画","庸" });
	shiyihuacyhanzidict.insert({ "十一画","鹿" });
	shiyihuacyhanzidict.insert({ "十一画","盗" });
	shiyihuacyhanzidict.insert({ "十一画","章" });
	shiyihuacyhanzidict.insert({ "十一画","竟" });
	shiyihuacyhanzidict.insert({ "十一画","商" });
	shiyihuacyhanzidict.insert({ "十一画","族" });
	shiyihuacyhanzidict.insert({ "十一画","旋" });
	shiyihuacyhanzidict.insert({ "十一画","望" });
	shiyihuacyhanzidict.insert({ "十一画","率" });
	shiyihuacyhanzidict.insert({ "十一画","着" });
	shiyihuacyhanzidict.insert({ "十一画","盖" });
	shiyihuacyhanzidict.insert({ "十一画","粘" });
	shiyihuacyhanzidict.insert({ "十一画","粗" });
	shiyihuacyhanzidict.insert({ "十一画","粒" });
	shiyihuacyhanzidict.insert({ "十一画","断" });
	shiyihuacyhanzidict.insert({ "十一画","剪" });
	shiyihuacyhanzidict.insert({ "十一画","兽" });
	shiyihuacyhanzidict.insert({ "十一画","清" });
	shiyihuacyhanzidict.insert({ "十一画","添" });
	shiyihuacyhanzidict.insert({ "十一画","淋" });
	shiyihuacyhanzidict.insert({ "十一画","淹" });
	shiyihuacyhanzidict.insert({ "十一画","渠" });
	shiyihuacyhanzidict.insert({ "十一画","渐" });
	shiyihuacyhanzidict.insert({ "十一画","混" });
	shiyihuacyhanzidict.insert({ "十一画","渔" });
	shiyihuacyhanzidict.insert({ "十一画","淘" });
	shiyihuacyhanzidict.insert({ "十一画","液" });
	shiyihuacyhanzidict.insert({ "十一画","淡" });
	shiyihuacyhanzidict.insert({ "十一画","深" });
	shiyihuacyhanzidict.insert({ "十一画","婆" });
	shiyihuacyhanzidict.insert({ "十一画","梁" });
	shiyihuacyhanzidict.insert({ "十一画","渗" });
	shiyihuacyhanzidict.insert({ "十一画","情" });
	shiyihuacyhanzidict.insert({ "十一画","惜" });
	shiyihuacyhanzidict.insert({ "十一画","惭" });
	shiyihuacyhanzidict.insert({ "十一画","悼" });
	shiyihuacyhanzidict.insert({ "十一画","惧" });
	shiyihuacyhanzidict.insert({ "十一画","惕" });

	shiyihuacyhanzidict.insert({ "十一画","惊" });
	shiyihuacyhanzidict.insert({ "十一画","惨" });
	shiyihuacyhanzidict.insert({ "十一画","惯" });
	shiyihuacyhanzidict.insert({ "十一画","寇" });
	shiyihuacyhanzidict.insert({ "十一画","寄" });
	shiyihuacyhanzidict.insert({ "十一画","宿" });
	shiyihuacyhanzidict.insert({ "十一画","窑" });
	shiyihuacyhanzidict.insert({ "十一画","密" });
	shiyihuacyhanzidict.insert({ "十一画","谋" });
	shiyihuacyhanzidict.insert({ "十一画","谎" });
	shiyihuacyhanzidict.insert({ "十一画","祸" });
	shiyihuacyhanzidict.insert({ "十一画","谜" });
	shiyihuacyhanzidict.insert({ "十一画","逮" });
	shiyihuacyhanzidict.insert({ "十一画","敢" });
	shiyihuacyhanzidict.insert({ "十一画","屠" });
	shiyihuacyhanzidict.insert({ "十一画","弹" });
	shiyihuacyhanzidict.insert({ "十一画","随" });
	shiyihuacyhanzidict.insert({ "十一画","蛋" });
	shiyihuacyhanzidict.insert({ "十一画","隆" });
	shiyihuacyhanzidict.insert({ "十一画","隐" });
	shiyihuacyhanzidict.insert({ "十一画","婚" });
	shiyihuacyhanzidict.insert({ "十一画","婶" });
	shiyihuacyhanzidict.insert({ "十一画","颈" });
	shiyihuacyhanzidict.insert({ "十一画","绩" });
	shiyihuacyhanzidict.insert({ "十一画","绪" });
	shiyihuacyhanzidict.insert({ "十一画","续" });
	shiyihuacyhanzidict.insert({ "十一画","骑" });
	shiyihuacyhanzidict.insert({ "十一画","绳" });
	shiyihuacyhanzidict.insert({ "十一画","维" });
	shiyihuacyhanzidict.insert({ "十一画","绵" });
	shiyihuacyhanzidict.insert({ "十一画","绸" });
	shiyihuacyhanzidict.insert({ "十一画","绿" });


	ofstream file("十一画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shiyihuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十一画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十一画常用汉字初始化失败" << endl;
	}
}


//十二画

void 十二画常用汉字() {
	multimap<string, string>shierhuacyhanzidict;
	shierhuacyhanzidict.insert({ "十二画","琴" });
	shierhuacyhanzidict.insert({ "十二画","斑" });
	shierhuacyhanzidict.insert({ "十二画","替" });
	shierhuacyhanzidict.insert({ "十二画","款" });
	shierhuacyhanzidict.insert({ "十二画","堪" });
	shierhuacyhanzidict.insert({ "十二画","搭" });
	shierhuacyhanzidict.insert({ "十二画","塔" });
	shierhuacyhanzidict.insert({ "十二画","越" });
	shierhuacyhanzidict.insert({ "十二画","趁" });
	shierhuacyhanzidict.insert({ "十二画","趋" });
	shierhuacyhanzidict.insert({ "十二画","超" });
	shierhuacyhanzidict.insert({ "十二画","提" });
	shierhuacyhanzidict.insert({ "十二画","堤" });
	shierhuacyhanzidict.insert({ "十二画","博" });
	shierhuacyhanzidict.insert({ "十二画","揭" });
	shierhuacyhanzidict.insert({ "十二画","喜" });
	shierhuacyhanzidict.insert({ "十二画","插" });
	shierhuacyhanzidict.insert({ "十二画","揪" });
	shierhuacyhanzidict.insert({ "十二画","搜" });
	shierhuacyhanzidict.insert({ "十二画","煮" });
	shierhuacyhanzidict.insert({ "十二画","援" });
	shierhuacyhanzidict.insert({ "十二画","裁" });
	shierhuacyhanzidict.insert({ "十二画","搁" });
	shierhuacyhanzidict.insert({ "十二画","搂" });
	shierhuacyhanzidict.insert({ "十二画","搅" });
	shierhuacyhanzidict.insert({ "十二画","握" });
	shierhuacyhanzidict.insert({ "十二画","揉" });
	shierhuacyhanzidict.insert({ "十二画","斯" });
	shierhuacyhanzidict.insert({ "十二画","期" });
	shierhuacyhanzidict.insert({ "十二画","欺" });
	shierhuacyhanzidict.insert({ "十二画","联" });
	shierhuacyhanzidict.insert({ "十二画","散" });
	shierhuacyhanzidict.insert({ "十二画","惹" });
	shierhuacyhanzidict.insert({ "十二画","葬" });
	shierhuacyhanzidict.insert({ "十二画","葛" });
	shierhuacyhanzidict.insert({ "十二画","董" });
	shierhuacyhanzidict.insert({ "十二画","葡" });
	shierhuacyhanzidict.insert({ "十二画","敬" });
	shierhuacyhanzidict.insert({ "十二画","葱" });
	shierhuacyhanzidict.insert({ "十二画","落" });
	shierhuacyhanzidict.insert({ "十二画","朝" });
	shierhuacyhanzidict.insert({ "十二画","辜" });
	shierhuacyhanzidict.insert({ "十二画","葵" });
	shierhuacyhanzidict.insert({ "十二画","棒" });
	shierhuacyhanzidict.insert({ "十二画","棋" });
	shierhuacyhanzidict.insert({ "十二画","植" });
	shierhuacyhanzidict.insert({ "十二画","森" });
	shierhuacyhanzidict.insert({ "十二画","椅" });
	shierhuacyhanzidict.insert({ "十二画","椒" });
	shierhuacyhanzidict.insert({ "十二画","棵" });
	shierhuacyhanzidict.insert({ "十二画","棍" });
	shierhuacyhanzidict.insert({ "十二画","棉" });
	shierhuacyhanzidict.insert({ "十二画","棚" });
	shierhuacyhanzidict.insert({ "十二画","棕" });
	shierhuacyhanzidict.insert({ "十二画","惠" });
	shierhuacyhanzidict.insert({ "十二画","惑" });
	shierhuacyhanzidict.insert({ "十二画","逼" });
	shierhuacyhanzidict.insert({ "十二画","厨" });
	shierhuacyhanzidict.insert({ "十二画","厦" });
	shierhuacyhanzidict.insert({ "十二画","硬" });
	shierhuacyhanzidict.insert({ "十二画","确" });
	shierhuacyhanzidict.insert({ "十二画","雁" });
	shierhuacyhanzidict.insert({ "十二画","殖" });
	shierhuacyhanzidict.insert({ "十二画","裂" });
	shierhuacyhanzidict.insert({ "十二画","雄" });
	shierhuacyhanzidict.insert({ "十二画","暂" });
	shierhuacyhanzidict.insert({ "十二画","雅" });
	shierhuacyhanzidict.insert({ "十二画","辈" });
	shierhuacyhanzidict.insert({ "十二画","悲" });
	shierhuacyhanzidict.insert({ "十二画","紫" });
	shierhuacyhanzidict.insert({ "十二画","辉" });
	shierhuacyhanzidict.insert({ "十二画","敞" });
	shierhuacyhanzidict.insert({ "十二画","赏" });
	shierhuacyhanzidict.insert({ "十二画","掌" });
	shierhuacyhanzidict.insert({ "十二画","晴" });
	shierhuacyhanzidict.insert({ "十二画","暑" });
	shierhuacyhanzidict.insert({ "十二画","最" });
	shierhuacyhanzidict.insert({ "十二画","量" });
	shierhuacyhanzidict.insert({ "十二画","喷" });
	shierhuacyhanzidict.insert({ "十二画","晶" });
	shierhuacyhanzidict.insert({ "十二画","喇" });
	shierhuacyhanzidict.insert({ "十二画","遇" });
	shierhuacyhanzidict.insert({ "十二画","喊" });
	shierhuacyhanzidict.insert({ "十二画","景" });
	shierhuacyhanzidict.insert({ "十二画","践" });
	shierhuacyhanzidict.insert({ "十二画","跌" });
	shierhuacyhanzidict.insert({ "十二画","跑" });
	shierhuacyhanzidict.insert({ "十二画","遗" });
	shierhuacyhanzidict.insert({ "十二画","蛙" });
	shierhuacyhanzidict.insert({ "十二画","蛛" });
	shierhuacyhanzidict.insert({ "十二画","蜓" });
	shierhuacyhanzidict.insert({ "十二画","喝" });
	shierhuacyhanzidict.insert({ "十二画","喂" });
	shierhuacyhanzidict.insert({ "十二画","喘" });
	shierhuacyhanzidict.insert({ "十二画","喉" });
	shierhuacyhanzidict.insert({ "十二画","幅" });
	shierhuacyhanzidict.insert({ "十二画","帽" });
	shierhuacyhanzidict.insert({ "十二画","赌" });
	shierhuacyhanzidict.insert({ "十二画","赔" });
	shierhuacyhanzidict.insert({ "十二画","黑" });
	shierhuacyhanzidict.insert({ "十二画","铸" });
	shierhuacyhanzidict.insert({ "十二画","铺" });
	shierhuacyhanzidict.insert({ "十二画","链" });
	shierhuacyhanzidict.insert({ "十二画","销" });
	shierhuacyhanzidict.insert({ "十二画","锁" });
	shierhuacyhanzidict.insert({ "十二画","锄" });
	shierhuacyhanzidict.insert({ "十二画","锅" });
	shierhuacyhanzidict.insert({ "十二画","锈" });
	shierhuacyhanzidict.insert({ "十二画","锋" });
	shierhuacyhanzidict.insert({ "十二画","锐" });
	shierhuacyhanzidict.insert({ "十二画","短" });
	shierhuacyhanzidict.insert({ "十二画","智" });
	shierhuacyhanzidict.insert({ "十二画","毯" });
	shierhuacyhanzidict.insert({ "十二画","鹅" });
	shierhuacyhanzidict.insert({ "十二画","剩" });
	shierhuacyhanzidict.insert({ "十二画","稍" });
	shierhuacyhanzidict.insert({ "十二画","程" });
	shierhuacyhanzidict.insert({ "十二画","稀" });
	shierhuacyhanzidict.insert({ "十二画","税" });
	shierhuacyhanzidict.insert({ "十二画","筐" });
	shierhuacyhanzidict.insert({ "十二画","等" });
	shierhuacyhanzidict.insert({ "十二画","筑" });
	shierhuacyhanzidict.insert({ "十二画","策" });
	shierhuacyhanzidict.insert({ "十二画","筛" });
	shierhuacyhanzidict.insert({ "十二画","筒" });
	shierhuacyhanzidict.insert({ "十二画","答" });
	shierhuacyhanzidict.insert({ "十二画","筋" });
	shierhuacyhanzidict.insert({ "十二画","筝" });
	shierhuacyhanzidict.insert({ "十二画","傲" });
	shierhuacyhanzidict.insert({ "十二画","傅" });
	shierhuacyhanzidict.insert({ "十二画","牌" });
	shierhuacyhanzidict.insert({ "十二画","堡" });
	shierhuacyhanzidict.insert({ "十二画","集" });
	shierhuacyhanzidict.insert({ "十二画","焦" });
	shierhuacyhanzidict.insert({ "十二画","傍" });
	shierhuacyhanzidict.insert({ "十二画","储" });
	shierhuacyhanzidict.insert({ "十二画","奥" });
	shierhuacyhanzidict.insert({ "十二画","街" });
	shierhuacyhanzidict.insert({ "十二画","惩" });
	shierhuacyhanzidict.insert({ "十二画","御" });
	shierhuacyhanzidict.insert({ "十二画","循" });
	shierhuacyhanzidict.insert({ "十二画","艇" });
	shierhuacyhanzidict.insert({ "十二画","舒" });
	shierhuacyhanzidict.insert({ "十二画","番" });
	shierhuacyhanzidict.insert({ "十二画","释" });
	shierhuacyhanzidict.insert({ "十二画","禽" });
	shierhuacyhanzidict.insert({ "十二画","腊" });
	shierhuacyhanzidict.insert({ "十二画","脾" });
	shierhuacyhanzidict.insert({ "十二画","腔" });
	shierhuacyhanzidict.insert({ "十二画","鲁" });
	shierhuacyhanzidict.insert({ "十二画","猾" });
	shierhuacyhanzidict.insert({ "十二画","猴" });
	shierhuacyhanzidict.insert({ "十二画","然" });
	shierhuacyhanzidict.insert({ "十二画","馋" });
	shierhuacyhanzidict.insert({ "十二画","装" });
	shierhuacyhanzidict.insert({ "十二画","蛮" });
	shierhuacyhanzidict.insert({ "十二画","就" });
	shierhuacyhanzidict.insert({ "十二画","痛" });
	shierhuacyhanzidict.insert({ "十二画","童" });
	shierhuacyhanzidict.insert({ "十二画","阔" });
	shierhuacyhanzidict.insert({ "十二画","善" });
	shierhuacyhanzidict.insert({ "十二画","羡" });
	shierhuacyhanzidict.insert({ "十二画","普" });
	shierhuacyhanzidict.insert({ "十二画","粪" });
	shierhuacyhanzidict.insert({ "十二画","尊" });
	shierhuacyhanzidict.insert({ "十二画","道" });
	shierhuacyhanzidict.insert({ "十二画","曾" });
	shierhuacyhanzidict.insert({ "十二画","焰" });
	shierhuacyhanzidict.insert({ "十二画","港" });
	shierhuacyhanzidict.insert({ "十二画","湖" });


	shierhuacyhanzidict.insert({ "十二画","渣" });
	shierhuacyhanzidict.insert({ "十二画","湿" });
	shierhuacyhanzidict.insert({ "十二画","温" });
	shierhuacyhanzidict.insert({ "十二画","渴" });
	shierhuacyhanzidict.insert({ "十二画","滑" });
	shierhuacyhanzidict.insert({ "十二画","湾" });
	shierhuacyhanzidict.insert({ "十二画","渡" });
	shierhuacyhanzidict.insert({ "十二画","游" });
	shierhuacyhanzidict.insert({ "十二画","滋" });
	shierhuacyhanzidict.insert({ "十二画","溉" });
	shierhuacyhanzidict.insert({ "十二画","愤" });
	shierhuacyhanzidict.insert({ "十二画","慌" });
	shierhuacyhanzidict.insert({ "十二画","惰" });
	shierhuacyhanzidict.insert({ "十二画","愧" });
	shierhuacyhanzidict.insert({ "十二画","愉" });
	shierhuacyhanzidict.insert({ "十二画","慨" });
	shierhuacyhanzidict.insert({ "十二画","割" });
	shierhuacyhanzidict.insert({ "十二画","寒" });
	shierhuacyhanzidict.insert({ "十二画","富" });
	shierhuacyhanzidict.insert({ "十二画","窜" });
	shierhuacyhanzidict.insert({ "十二画","窝" });
	shierhuacyhanzidict.insert({ "十二画","窗" });
	shierhuacyhanzidict.insert({ "十二画","遍" });
	shierhuacyhanzidict.insert({ "十二画","裕" });
	shierhuacyhanzidict.insert({ "十二画","裤" });
	shierhuacyhanzidict.insert({ "十二画","裙" });
	shierhuacyhanzidict.insert({ "十二画","谢" });
	shierhuacyhanzidict.insert({ "十二画","谣" });
	shierhuacyhanzidict.insert({ "十二画","谦" });
	shierhuacyhanzidict.insert({ "十二画","属" });
	shierhuacyhanzidict.insert({ "十二画","屡" });
	shierhuacyhanzidict.insert({ "十二画","强" });
	shierhuacyhanzidict.insert({ "十二画","粥" });
	shierhuacyhanzidict.insert({ "十二画","疏" });
	shierhuacyhanzidict.insert({ "十二画","隔" });
	shierhuacyhanzidict.insert({ "十二画","隙" });
	shierhuacyhanzidict.insert({ "十二画","絮" });
	shierhuacyhanzidict.insert({ "十二画","嫂" });
	shierhuacyhanzidict.insert({ "十二画","登" });
	shierhuacyhanzidict.insert({ "十二画","缎" });
	shierhuacyhanzidict.insert({ "十二画","缓" });
	shierhuacyhanzidict.insert({ "十二画","编" });
	shierhuacyhanzidict.insert({ "十二画","骗" });
	shierhuacyhanzidict.insert({ "十二画","缘" });

	ofstream file("十二画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shierhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十二画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十二画常用汉字初始化失败" << endl;
	}


}

//十三画
void 十三画常用汉字() {
	multimap<string, string>shisanhuacyhanzidict;
	shisanhuacyhanzidict.insert({ "十三画","瑞" });

	shisanhuacyhanzidict.insert({ "十三画","魂" });
	shisanhuacyhanzidict.insert({ "十三画","肆" });
	shisanhuacyhanzidict.insert({ "十三画","摄" });
	shisanhuacyhanzidict.insert({ "十三画","摸" });
	shisanhuacyhanzidict.insert({ "十三画","填" });
	shisanhuacyhanzidict.insert({ "十三画","搏" });
	shisanhuacyhanzidict.insert({ "十三画","塌" });
	shisanhuacyhanzidict.insert({ "十三画","鼓" });
	shisanhuacyhanzidict.insert({ "十三画","摆" });
	shisanhuacyhanzidict.insert({ "十三画","携" });
	shisanhuacyhanzidict.insert({ "十三画","搬" });
	shisanhuacyhanzidict.insert({ "十三画","摇" });
	shisanhuacyhanzidict.insert({ "十三画","搞" });
	shisanhuacyhanzidict.insert({ "十三画","塘" });
	shisanhuacyhanzidict.insert({ "十三画","摊" });
	shisanhuacyhanzidict.insert({ "十三画","蒜" });
	shisanhuacyhanzidict.insert({ "十三画","勤" });
	shisanhuacyhanzidict.insert({ "十三画","鹊" });
	shisanhuacyhanzidict.insert({ "十三画","蓝" });
	shisanhuacyhanzidict.insert({ "十三画","墓" });
	shisanhuacyhanzidict.insert({ "十三画","幕" });
	shisanhuacyhanzidict.insert({ "十三画","蓬" });
	shisanhuacyhanzidict.insert({ "十三画","蓄" });
	shisanhuacyhanzidict.insert({ "十三画","蒙" });
	shisanhuacyhanzidict.insert({ "十三画","蒸" });
	shisanhuacyhanzidict.insert({ "十三画","献" });
	shisanhuacyhanzidict.insert({ "十三画","禁" });
	shisanhuacyhanzidict.insert({ "十三画","楚" });
	shisanhuacyhanzidict.insert({ "十三画","想" });
	shisanhuacyhanzidict.insert({ "十三画","槐" });
	shisanhuacyhanzidict.insert({ "十三画","榆" });
	shisanhuacyhanzidict.insert({ "十三画","楼" });
	shisanhuacyhanzidict.insert({ "十三画","概" });
	shisanhuacyhanzidict.insert({ "十三画","赖" });
	shisanhuacyhanzidict.insert({ "十三画","酬" });
	shisanhuacyhanzidict.insert({ "十三画","感" });
	shisanhuacyhanzidict.insert({ "十三画","碍" });
	shisanhuacyhanzidict.insert({ "十三画","碑" });
	shisanhuacyhanzidict.insert({ "十三画","碎" });
	shisanhuacyhanzidict.insert({ "十三画","碰" });
	shisanhuacyhanzidict.insert({ "十三画","碗" });
	shisanhuacyhanzidict.insert({ "十三画","碌" });
	shisanhuacyhanzidict.insert({ "十三画","雷" });
	shisanhuacyhanzidict.insert({ "十三画","零" });
	shisanhuacyhanzidict.insert({ "十三画","雾" });
	shisanhuacyhanzidict.insert({ "十三画","雹" });
	shisanhuacyhanzidict.insert({ "十三画","输" });
	shisanhuacyhanzidict.insert({ "十三画","督" });
	shisanhuacyhanzidict.insert({ "十三画","龄" });
	shisanhuacyhanzidict.insert({ "十三画","鉴" });
	shisanhuacyhanzidict.insert({ "十三画","睛" });
	shisanhuacyhanzidict.insert({ "十三画","睡" });
	shisanhuacyhanzidict.insert({ "十三画","睬" });
	shisanhuacyhanzidict.insert({ "十三画","鄙" });
	shisanhuacyhanzidict.insert({ "十三画","愚" });
	shisanhuacyhanzidict.insert({ "十三画","暖" });
	shisanhuacyhanzidict.insert({ "十三画","盟" });
	shisanhuacyhanzidict.insert({ "十三画","歇" });
	shisanhuacyhanzidict.insert({ "十三画","暗" });
	shisanhuacyhanzidict.insert({ "十三画","照" });
	shisanhuacyhanzidict.insert({ "十三画","跨" });
	shisanhuacyhanzidict.insert({ "十三画","跳" });
	shisanhuacyhanzidict.insert({ "十三画","跪" });
	shisanhuacyhanzidict.insert({ "十三画","路" });
	shisanhuacyhanzidict.insert({ "十三画","跟" });
	shisanhuacyhanzidict.insert({ "十三画","遣" });
	shisanhuacyhanzidict.insert({ "十三画","蛾" });
	shisanhuacyhanzidict.insert({ "十三画","蜂" });
	shisanhuacyhanzidict.insert({ "十三画","嗓" });
	shisanhuacyhanzidict.insert({ "十三画","置" });
	shisanhuacyhanzidict.insert({ "十三画","罪" });
	shisanhuacyhanzidict.insert({ "十三画","罩" });
	shisanhuacyhanzidict.insert({ "十三画","错" });
	shisanhuacyhanzidict.insert({ "十三画","锡" });
	shisanhuacyhanzidict.insert({ "十三画","锣" });
	shisanhuacyhanzidict.insert({ "十三画","锤" });
	shisanhuacyhanzidict.insert({ "十三画","锦" });
	shisanhuacyhanzidict.insert({ "十三画","键" });
	shisanhuacyhanzidict.insert({ "十三画","锯" });
	shisanhuacyhanzidict.insert({ "十三画","矮" });
	shisanhuacyhanzidict.insert({ "十三画","辞" });
	shisanhuacyhanzidict.insert({ "十三画","稠" });
	shisanhuacyhanzidict.insert({ "十三画","愁" });
	shisanhuacyhanzidict.insert({ "十三画","筹" });
	shisanhuacyhanzidict.insert({ "十三画","签" });
	shisanhuacyhanzidict.insert({ "十三画","简" });
	shisanhuacyhanzidict.insert({ "十三画","毁" });
	shisanhuacyhanzidict.insert({ "十三画","舅" });
	shisanhuacyhanzidict.insert({ "十三画","鼠" });
	shisanhuacyhanzidict.insert({ "十三画","催" });
	shisanhuacyhanzidict.insert({ "十三画","傻" });
	shisanhuacyhanzidict.insert({ "十三画","像" });
	shisanhuacyhanzidict.insert({ "十三画","躲" });
	shisanhuacyhanzidict.insert({ "十三画","微" });
	shisanhuacyhanzidict.insert({ "十三画","愈" });
	shisanhuacyhanzidict.insert({ "十三画","遥" });
	shisanhuacyhanzidict.insert({ "十三画","腰" });
	shisanhuacyhanzidict.insert({ "十三画","腥" });
	shisanhuacyhanzidict.insert({ "十三画","腹" });
	shisanhuacyhanzidict.insert({ "十三画","腾" });
	shisanhuacyhanzidict.insert({ "十三画","腿" });
	shisanhuacyhanzidict.insert({ "十三画","触" });
	shisanhuacyhanzidict.insert({ "十三画","解" });
	shisanhuacyhanzidict.insert({ "十三画","酱" });
	shisanhuacyhanzidict.insert({ "十三画","痰" });
	shisanhuacyhanzidict.insert({ "十三画","廉" });
	shisanhuacyhanzidict.insert({ "十三画","新" });
	shisanhuacyhanzidict.insert({ "十三画","韵" });
	shisanhuacyhanzidict.insert({ "十三画","意" });
	shisanhuacyhanzidict.insert({ "十三画","粮" });
	shisanhuacyhanzidict.insert({ "十三画","数" });
	shisanhuacyhanzidict.insert({ "十三画","煎" });
	shisanhuacyhanzidict.insert({ "十三画","塑" });
	shisanhuacyhanzidict.insert({ "十三画","慈" });
	shisanhuacyhanzidict.insert({ "十三画","煤" });
	shisanhuacyhanzidict.insert({ "十三画","煌" });
	shisanhuacyhanzidict.insert({ "十三画","满" });
	shisanhuacyhanzidict.insert({ "十三画","漠" });
	shisanhuacyhanzidict.insert({ "十三画","源" });
	shisanhuacyhanzidict.insert({ "十三画","滤" });
	shisanhuacyhanzidict.insert({ "十三画","滥" });
	shisanhuacyhanzidict.insert({ "十三画","滔" });
	shisanhuacyhanzidict.insert({ "十三画","溪" });
	shisanhuacyhanzidict.insert({ "十三画","溜" });
	shisanhuacyhanzidict.insert({ "十三画","滚" });
	shisanhuacyhanzidict.insert({ "十三画","滨" });
	shisanhuacyhanzidict.insert({ "十三画","粱" });
	shisanhuacyhanzidict.insert({ "十三画","滩" });
	shisanhuacyhanzidict.insert({ "十三画","慎" });
	shisanhuacyhanzidict.insert({ "十三画","誉" });
	shisanhuacyhanzidict.insert({ "十三画","塞" });
	shisanhuacyhanzidict.insert({ "十三画","谨" });
	shisanhuacyhanzidict.insert({ "十三画","福" });
	shisanhuacyhanzidict.insert({ "十三画","群" });
	shisanhuacyhanzidict.insert({ "十三画","殿" });
	shisanhuacyhanzidict.insert({ "十三画","辟" });
	shisanhuacyhanzidict.insert({ "十三画","障" });
	shisanhuacyhanzidict.insert({ "十三画","嫌" });
	shisanhuacyhanzidict.insert({ "十三画","嫁" });
	shisanhuacyhanzidict.insert({ "十三画","叠" });
	shisanhuacyhanzidict.insert({ "十三画","缝" });
	shisanhuacyhanzidict.insert({ "十三画","缠" });


	ofstream file("十三画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shisanhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十三画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十三画常用汉字初始化失败" << endl;
	}

}

//十四画
void 十四画常用汉字() {
	multimap<string, string>shisihuacyhanzidict;
	shisihuacyhanzidict.insert({ "十四画","静" });
	shisihuacyhanzidict.insert({ "十四画","碧" });
	shisihuacyhanzidict.insert({ "十四画","璃" });
	shisihuacyhanzidict.insert({ "十四画","墙" });
	shisihuacyhanzidict.insert({ "十四画","撇" });
	shisihuacyhanzidict.insert({ "十四画","嘉" });
	shisihuacyhanzidict.insert({ "十四画","摧" });
	shisihuacyhanzidict.insert({ "十四画","截" });
	shisihuacyhanzidict.insert({ "十四画","誓" });
	shisihuacyhanzidict.insert({ "十四画","境" });
	shisihuacyhanzidict.insert({ "十四画","摘" });
	shisihuacyhanzidict.insert({ "十四画","摔" });
	shisihuacyhanzidict.insert({ "十四画","聚" });
	shisihuacyhanzidict.insert({ "十四画","蔽" });
	shisihuacyhanzidict.insert({ "十四画","慕" });
	shisihuacyhanzidict.insert({ "十四画","暮" });
	shisihuacyhanzidict.insert({ "十四画","蔑" });
	shisihuacyhanzidict.insert({ "十四画","模" });
	shisihuacyhanzidict.insert({ "十四画","榴" });
	shisihuacyhanzidict.insert({ "十四画","榜" });
	shisihuacyhanzidict.insert({ "十四画","榨" });
	shisihuacyhanzidict.insert({ "十四画","歌" });
	shisihuacyhanzidict.insert({ "十四画","遭" });
	shisihuacyhanzidict.insert({ "十四画","酷" });
	shisihuacyhanzidict.insert({ "十四画","酿" });
	shisihuacyhanzidict.insert({ "十四画","酸" });
	shisihuacyhanzidict.insert({ "十四画","磁" });
	shisihuacyhanzidict.insert({ "十四画","愿" });
	shisihuacyhanzidict.insert({ "十四画","需" });
	shisihuacyhanzidict.insert({ "十四画","弊" });
	shisihuacyhanzidict.insert({ "十四画","裳" });
	shisihuacyhanzidict.insert({ "十四画","颗" });
	shisihuacyhanzidict.insert({ "十四画","嗽" });
	shisihuacyhanzidict.insert({ "十四画","蜻" });
	shisihuacyhanzidict.insert({ "十四画","蜡" });
	shisihuacyhanzidict.insert({ "十四画","蝇" });
	shisihuacyhanzidict.insert({ "十四画","蜘" });
	shisihuacyhanzidict.insert({ "十四画","赚" });
	shisihuacyhanzidict.insert({ "十四画","锹" });
	shisihuacyhanzidict.insert({ "十四画","锻" });
	shisihuacyhanzidict.insert({ "十四画","舞" });
	shisihuacyhanzidict.insert({ "十四画","稳" });
	shisihuacyhanzidict.insert({ "十四画","算" });
	shisihuacyhanzidict.insert({ "十四画","箩" });
	shisihuacyhanzidict.insert({ "十四画","管" });
	shisihuacyhanzidict.insert({ "十四画","僚" });
	shisihuacyhanzidict.insert({ "十四画","鼻" });
	shisihuacyhanzidict.insert({ "十四画","魄" });
	shisihuacyhanzidict.insert({ "十四画","貌" });
	shisihuacyhanzidict.insert({ "十四画","膜" });
	shisihuacyhanzidict.insert({ "十四画","膊" });
	shisihuacyhanzidict.insert({ "十四画","膀" });
	shisihuacyhanzidict.insert({ "十四画","鲜" });
	shisihuacyhanzidict.insert({ "十四画","疑" });
	shisihuacyhanzidict.insert({ "十四画","馒" });
	shisihuacyhanzidict.insert({ "十四画","裹" });
	shisihuacyhanzidict.insert({ "十四画","敲" });
	shisihuacyhanzidict.insert({ "十四画","豪" });
	shisihuacyhanzidict.insert({ "十四画","膏" });
	shisihuacyhanzidict.insert({ "十四画","遮" });
	shisihuacyhanzidict.insert({ "十四画","腐" });
	shisihuacyhanzidict.insert({ "十四画","瘦" });
	shisihuacyhanzidict.insert({ "十四画","辣" });
	shisihuacyhanzidict.insert({ "十四画","竭" });
	shisihuacyhanzidict.insert({ "十四画","端" });
	shisihuacyhanzidict.insert({ "十四画","旗" });
	shisihuacyhanzidict.insert({ "十四画","精" });
	shisihuacyhanzidict.insert({ "十四画","歉" });
	shisihuacyhanzidict.insert({ "十四画","熄" });
	shisihuacyhanzidict.insert({ "十四画","熔" });
	shisihuacyhanzidict.insert({ "十四画","漆" });
	shisihuacyhanzidict.insert({ "十四画","漂" });
	shisihuacyhanzidict.insert({ "十四画","漫" });
	shisihuacyhanzidict.insert({ "十四画","滴" });
	shisihuacyhanzidict.insert({ "十四画","演" });
	shisihuacyhanzidict.insert({ "十四画","漏" });
	shisihuacyhanzidict.insert({ "十四画","慢" });
	shisihuacyhanzidict.insert({ "十四画","寨" });
	shisihuacyhanzidict.insert({ "十四画","赛" });
	shisihuacyhanzidict.insert({ "十四画","察" });
	shisihuacyhanzidict.insert({ "十四画","蜜" });
	shisihuacyhanzidict.insert({ "十四画","谱" });
	shisihuacyhanzidict.insert({ "十四画","嫩" });
	shisihuacyhanzidict.insert({ "十四画","翠" });
	shisihuacyhanzidict.insert({ "十四画","熊" });
	shisihuacyhanzidict.insert({ "十四画","凳" });
	shisihuacyhanzidict.insert({ "十四画","骡" });
	shisihuacyhanzidict.insert({ "十四画","缩" });



	ofstream file("十四画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shisihuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十四画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十四画常用汉字初始化失败" << endl;
	}
}

//十五画
void 十五画常用汉字() {
	multimap<string, string>shiwuhuacyhanzidict;

	shiwuhuacyhanzidict.insert({ "十五画","慧" });
	shiwuhuacyhanzidict.insert({ "十五画","撕" });
	shiwuhuacyhanzidict.insert({ "十五画","撒" });
	shiwuhuacyhanzidict.insert({ "十五画","趣" });
	shiwuhuacyhanzidict.insert({ "十五画","趟" });
	shiwuhuacyhanzidict.insert({ "十五画","撑" });
	shiwuhuacyhanzidict.insert({ "十五画","播" });
	shiwuhuacyhanzidict.insert({ "十五画","撞" });
	shiwuhuacyhanzidict.insert({ "十五画","撤" });
	shiwuhuacyhanzidict.insert({ "十五画","增" });
	shiwuhuacyhanzidict.insert({ "十五画","聪" });
	shiwuhuacyhanzidict.insert({ "十五画","鞋" });
	shiwuhuacyhanzidict.insert({ "十五画","蕉" });
	shiwuhuacyhanzidict.insert({ "十五画","蔬" });
	shiwuhuacyhanzidict.insert({ "十五画","横" });
	shiwuhuacyhanzidict.insert({ "十五画","槽" });
	shiwuhuacyhanzidict.insert({ "十五画","樱" });
	shiwuhuacyhanzidict.insert({ "十五画","橡" });
	shiwuhuacyhanzidict.insert({ "十五画","飘" });
	shiwuhuacyhanzidict.insert({ "十五画","醋" });
	shiwuhuacyhanzidict.insert({ "十五画","醉" });
	shiwuhuacyhanzidict.insert({ "十五画","震" });
	shiwuhuacyhanzidict.insert({ "十五画","霉" });
	shiwuhuacyhanzidict.insert({ "十五画","瞒" });
	shiwuhuacyhanzidict.insert({ "十五画","题" });
	shiwuhuacyhanzidict.insert({ "十五画","暴" });
	shiwuhuacyhanzidict.insert({ "十五画","瞎" });
	shiwuhuacyhanzidict.insert({ "十五画","影" });
	shiwuhuacyhanzidict.insert({ "十五画","踢" });
	shiwuhuacyhanzidict.insert({ "十五画","踏" });
	shiwuhuacyhanzidict.insert({ "十五画","踩" });
	shiwuhuacyhanzidict.insert({ "十五画","踪" });
	shiwuhuacyhanzidict.insert({ "十五画","蝶" });
	shiwuhuacyhanzidict.insert({ "十五画","蝴" });
	shiwuhuacyhanzidict.insert({ "十五画","嘱" });
	shiwuhuacyhanzidict.insert({ "十五画","墨" });
	shiwuhuacyhanzidict.insert({ "十五画","镇" });
	shiwuhuacyhanzidict.insert({ "十五画","靠" });
	shiwuhuacyhanzidict.insert({ "十五画","稻" });
	shiwuhuacyhanzidict.insert({ "十五画","黎" });
	shiwuhuacyhanzidict.insert({ "十五画","稿" });
	shiwuhuacyhanzidict.insert({ "十五画","稼" });
	shiwuhuacyhanzidict.insert({ "十五画","箱" });
	shiwuhuacyhanzidict.insert({ "十五画","箭" });
	shiwuhuacyhanzidict.insert({ "十五画","篇" });
	shiwuhuacyhanzidict.insert({ "十五画","僵" });
	shiwuhuacyhanzidict.insert({ "十五画","躺" });
	shiwuhuacyhanzidict.insert({ "十五画","僻" });
	shiwuhuacyhanzidict.insert({ "十五画","德" });
	shiwuhuacyhanzidict.insert({ "十五画","艘" });
	shiwuhuacyhanzidict.insert({ "十五画","膝" });
	shiwuhuacyhanzidict.insert({ "十五画","膛" });
	shiwuhuacyhanzidict.insert({ "十五画","熟" });
	shiwuhuacyhanzidict.insert({ "十五画","摩" });
	shiwuhuacyhanzidict.insert({ "十五画","颜" });
	shiwuhuacyhanzidict.insert({ "十五画","毅" });
	shiwuhuacyhanzidict.insert({ "十五画","糊" });
	shiwuhuacyhanzidict.insert({ "十五画","遵" });
	shiwuhuacyhanzidict.insert({ "十五画","潜" });
	shiwuhuacyhanzidict.insert({ "十五画","潮" });
	shiwuhuacyhanzidict.insert({ "十五画","懂" });
	shiwuhuacyhanzidict.insert({ "十五画","额" });
	shiwuhuacyhanzidict.insert({ "十五画","慰" });
	shiwuhuacyhanzidict.insert({ "十五画","劈" });



	ofstream file("十五画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shiwuhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十五画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十五画常用汉字初始化失败" << endl;
	}
}

//十六画
void 十六画常用汉字() {
	multimap<string, string>shiliuhuacyhanzidict;

	shiliuhuacyhanzidict.insert({ "十六画","操" });
	shiliuhuacyhanzidict.insert({ "十六画","燕" });
	shiliuhuacyhanzidict.insert({ "十六画","薯" });
	shiliuhuacyhanzidict.insert({ "十六画","薪" });
	shiliuhuacyhanzidict.insert({ "十六画","薄" });
	shiliuhuacyhanzidict.insert({ "十六画","颠" });
	shiliuhuacyhanzidict.insert({ "十六画","橘" });
	shiliuhuacyhanzidict.insert({ "十六画","整" });
	shiliuhuacyhanzidict.insert({ "十六画","融" });
	shiliuhuacyhanzidict.insert({ "十六画","醒" });
	shiliuhuacyhanzidict.insert({ "十六画","餐" });
	shiliuhuacyhanzidict.insert({ "十六画","嘴" });
	shiliuhuacyhanzidict.insert({ "十六画","蹄" });
	shiliuhuacyhanzidict.insert({ "十六画","器" });
	shiliuhuacyhanzidict.insert({ "十六画","赠" });
	shiliuhuacyhanzidict.insert({ "十六画","默" });
	shiliuhuacyhanzidict.insert({ "十六画","镜" });
	shiliuhuacyhanzidict.insert({ "十六画","赞" });
	shiliuhuacyhanzidict.insert({ "十六画","篮" });
	shiliuhuacyhanzidict.insert({ "十六画","邀" });
	shiliuhuacyhanzidict.insert({ "十六画","衡" });
	shiliuhuacyhanzidict.insert({ "十六画","膨" });
	shiliuhuacyhanzidict.insert({ "十六画","雕" });
	shiliuhuacyhanzidict.insert({ "十六画","磨" });
	shiliuhuacyhanzidict.insert({ "十六画","凝" });
	shiliuhuacyhanzidict.insert({ "十六画","辨" });
	shiliuhuacyhanzidict.insert({ "十六画","辩" });
	shiliuhuacyhanzidict.insert({ "十六画","糖" });
	shiliuhuacyhanzidict.insert({ "十六画","糕" });
	shiliuhuacyhanzidict.insert({ "十六画","燃" });
	shiliuhuacyhanzidict.insert({ "十六画","澡" });
	shiliuhuacyhanzidict.insert({ "十六画","激" });
	shiliuhuacyhanzidict.insert({ "十六画","懒" });
	shiliuhuacyhanzidict.insert({ "十六画","壁" });
	shiliuhuacyhanzidict.insert({ "十六画","避" });
	shiliuhuacyhanzidict.insert({ "十六画","缴" });

	ofstream file("十六画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shiliuhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十六画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十六画常用汉字初始化失败" << endl;
	}
}

// 十七画
void 十七画常用汉字() {
	multimap<string, string>shiqihuacyhanzidict;
	shiqihuacyhanzidict.insert({ "十七画","戴" });
	shiqihuacyhanzidict.insert({ "十七画","擦" });
	shiqihuacyhanzidict.insert({ "十七画","鞠" });
	shiqihuacyhanzidict.insert({ "十七画","藏" });
	shiqihuacyhanzidict.insert({ "十七画","霜" });
	shiqihuacyhanzidict.insert({ "十七画","霞" });
	shiqihuacyhanzidict.insert({ "十七画","瞧" });
	shiqihuacyhanzidict.insert({ "十七画","蹈" });
	shiqihuacyhanzidict.insert({ "十七画","螺" });
	shiqihuacyhanzidict.insert({ "十七画","穗" });
	shiqihuacyhanzidict.insert({ "十七画","繁" });
	shiqihuacyhanzidict.insert({ "十七画","辫" });
	shiqihuacyhanzidict.insert({ "十七画","赢" });
	shiqihuacyhanzidict.insert({ "十七画","糟" });
	shiqihuacyhanzidict.insert({ "十七画","糠" });
	shiqihuacyhanzidict.insert({ "十七画","燥" });
	shiqihuacyhanzidict.insert({ "十七画","臂" });
	shiqihuacyhanzidict.insert({ "十七画","翼" });
	shiqihuacyhanzidict.insert({ "十七画","骤" });

	ofstream file("十七画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shiqihuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十七画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十七画常用汉字初始化失败" << endl;
	}
}

//十八画
void 十八画常用汉字() {
	multimap<string, string>shibahuacyhanzidict;
	shibahuacyhanzidict.insert({ "十八画","鞭" });
	shibahuacyhanzidict.insert({ "十八画","覆" });
	shibahuacyhanzidict.insert({ "十八画","蹦" });
	shibahuacyhanzidict.insert({ "十八画","镰" });
	shibahuacyhanzidict.insert({ "十八画","翻" });
	shibahuacyhanzidict.insert({ "十八画","鹰" });

	ofstream file("十八画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shibahuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十八画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十八画常用汉字初始化失败" << endl;
	}
}


///十九画
void 十九画常用汉字() {
	multimap<string, string>shijiuhuacyhanzidict;
	shijiuhuacyhanzidict.insert({ "十九画","警" });
	shijiuhuacyhanzidict.insert({ "十九画","攀" });
	shijiuhuacyhanzidict.insert({ "十九画","蹲" });
	shijiuhuacyhanzidict.insert({ "十九画","颤" });
	shijiuhuacyhanzidict.insert({ "十九画","瓣" });
	shijiuhuacyhanzidict.insert({ "十九画","爆" });
	shijiuhuacyhanzidict.insert({ "十九画","疆" });


	ofstream file("十九画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shijiuhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十九画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十九画常用汉字初始化失败" << endl;
	}
}


//二十画
void 二十画常用汉字() {
	multimap<string, string>ershihuacyhanzidict;
	ershihuacyhanzidict.insert({ "二十画","壤" });
	ershihuacyhanzidict.insert({ "二十画","耀" });
	ershihuacyhanzidict.insert({ "二十画","躁" });
	ershihuacyhanzidict.insert({ "二十画","嚼" });
	ershihuacyhanzidict.insert({ "二十画","嚷" });
	ershihuacyhanzidict.insert({ "二十画","籍" });
	ershihuacyhanzidict.insert({ "二十画","魔" });
	ershihuacyhanzidict.insert({ "二十画","灌" });

	ofstream file("二十画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : ershihuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "二十画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "二十画常用汉字初始化失败" << endl;
	}
}


//二十一画

void 二十一画常用汉字() {
	multimap<string, string>ershiyihuacyhanzidict;
	ershiyihuacyhanzidict.insert({ "二十一画","蠢" });
	ershiyihuacyhanzidict.insert({ "二十一画","霸" });
	ershiyihuacyhanzidict.insert({ "二十一画","露" });

	ofstream file("二十一画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : ershiyihuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "二十一画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "二十一画常用汉字初始化失败" << endl;
	}
}


//二十二画
void 二十二画常用汉字() {
	multimap<string, string>ershierhuacyhanzidict;
	ershierhuacyhanzidict.insert({ "二十二画","囊" });


	ofstream file("二十二画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : ershierhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "二十二画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "二十二画常用汉字初始化失败" << endl;
	}
}

//二十三画
void 二十三画常用汉字() {
	multimap<string, string>ershisanhuacyhanzidict;
	ershisanhuacyhanzidict.insert({ "二十三画","罐" });

	ofstream file("二十三画常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : ershisanhuacyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "二十三画常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "二十三画常用汉字初始化失败" << endl;
	}
}


//现代汉语次常用字(1000字)

//二画次

void 二画次常用汉字() {
	multimap<string, string>erhuacicyhanzidict;
	erhuacicyhanzidict.insert({ "二画次","匕" });
	erhuacicyhanzidict.insert({ "二画次","刁" });

	ofstream file("二画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : erhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "二画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "二画次常用汉字初始化失败" << endl;
	}
}


//四画次

void 四画次常用汉字() {
	multimap<string, string>sihuacicyhanzidict;
	sihuacicyhanzidict.insert({ "四画次","丐" });
	sihuacicyhanzidict.insert({ "四画次","歹" });
	sihuacicyhanzidict.insert({ "四画次","戈" });
	sihuacicyhanzidict.insert({ "四画次","夭" });
	sihuacicyhanzidict.insert({ "四画次","仑" });
	sihuacicyhanzidict.insert({ "四画次","讥" });
	sihuacicyhanzidict.insert({ "四画次","冗" });
	sihuacicyhanzidict.insert({ "四画次","邓" });

	ofstream file("四画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : sihuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "四画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "四画次常用汉字初始化失败" << endl;
	}
}


//五画次

void 五画次常用汉字() {
	multimap<string, string>wuhuacicyhanzidict;
	wuhuacicyhanzidict.insert({ "五画次","艾" });
	wuhuacicyhanzidict.insert({ "五画次","夯" });
	wuhuacicyhanzidict.insert({ "五画次","凸" });
	wuhuacicyhanzidict.insert({ "五画次","卢" });
	wuhuacicyhanzidict.insert({ "五画次","叭" });
	wuhuacicyhanzidict.insert({ "五画次","叽" });
	wuhuacicyhanzidict.insert({ "五画次","皿" });
	wuhuacicyhanzidict.insert({ "五画次","凹" });
	wuhuacicyhanzidict.insert({ "五画次","囚" });
	wuhuacicyhanzidict.insert({ "五画次","矢" });
	wuhuacicyhanzidict.insert({ "五画次","乍" });
	wuhuacicyhanzidict.insert({ "五画次","尔" });
	wuhuacicyhanzidict.insert({ "五画次","冯" });
	wuhuacicyhanzidict.insert({ "五画次","玄" });


	ofstream file("五画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : wuhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "五画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "五画次常用汉字初始化失败" << endl;
	}
}


//六画次

void 六画次常用汉字() {
	multimap<string, string>liuhuacicyhanzidict;
	liuhuacicyhanzidict.insert({ "六画次","邦" });
	liuhuacicyhanzidict.insert({ "六画次","迂" });
	liuhuacicyhanzidict.insert({ "六画次","邢" });
	liuhuacicyhanzidict.insert({ "六画次","芋" });
	liuhuacicyhanzidict.insert({ "六画次","芍" });
	liuhuacicyhanzidict.insert({ "六画次","吏" });
	liuhuacicyhanzidict.insert({ "六画次","夷" });
	liuhuacicyhanzidict.insert({ "六画次","吁" });
	liuhuacicyhanzidict.insert({ "六画次","吕" });
	liuhuacicyhanzidict.insert({ "六画次","吆" });
	liuhuacicyhanzidict.insert({ "六画次","屹" });
	liuhuacicyhanzidict.insert({ "六画次","廷" });
	liuhuacicyhanzidict.insert({ "六画次","迄" });
	liuhuacicyhanzidict.insert({ "六画次","臼" });
	liuhuacicyhanzidict.insert({ "六画次","仲" });
	liuhuacicyhanzidict.insert({ "六画次","伦" });
	liuhuacicyhanzidict.insert({ "六画次","伊" });
	liuhuacicyhanzidict.insert({ "六画次","肋" });
	liuhuacicyhanzidict.insert({ "六画次","旭" });
	liuhuacicyhanzidict.insert({ "六画次","匈" });
	liuhuacicyhanzidict.insert({ "六画次","凫" });
	liuhuacicyhanzidict.insert({ "六画次","妆" });
	liuhuacicyhanzidict.insert({ "六画次","亥" });
	liuhuacicyhanzidict.insert({ "六画次","汛" });
	liuhuacicyhanzidict.insert({ "六画次","讳" });
	liuhuacicyhanzidict.insert({ "六画次","讶" });
	liuhuacicyhanzidict.insert({ "六画次","讹" });
	liuhuacicyhanzidict.insert({ "六画次","讼" });
	liuhuacicyhanzidict.insert({ "六画次","诀" });
	liuhuacicyhanzidict.insert({ "六画次","弛" });
	liuhuacicyhanzidict.insert({ "六画次","阱" });
	liuhuacicyhanzidict.insert({ "六画次","驮" });
	liuhuacicyhanzidict.insert({ "六画次","驯" });
	liuhuacicyhanzidict.insert({ "六画次","纫" });


	ofstream file("六画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : liuhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "六画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "六画次常用汉字初始化失败" << endl;
	}
}


//七画次

void 七画次常用汉字() {
	multimap<string, string>qihuacicyhanzidict;

	qihuacicyhanzidict.insert({ "七画次","玖" });
	qihuacicyhanzidict.insert({ "七画次","玛" });
	qihuacicyhanzidict.insert({ "七画次","韧" });
	qihuacicyhanzidict.insert({ "七画次","抠" });
	qihuacicyhanzidict.insert({ "七画次","扼" });
	qihuacicyhanzidict.insert({ "七画次","汞" });
	qihuacicyhanzidict.insert({ "七画次","扳" });
	qihuacicyhanzidict.insert({ "七画次","抡" });
	qihuacicyhanzidict.insert({ "七画次","坎" });
	qihuacicyhanzidict.insert({ "七画次","坞" });
	qihuacicyhanzidict.insert({ "七画次","抑" });
	qihuacicyhanzidict.insert({ "七画次","拟" });
	qihuacicyhanzidict.insert({ "七画次","抒" });
	qihuacicyhanzidict.insert({ "七画次","芙" });
	qihuacicyhanzidict.insert({ "七画次","芜" });
	qihuacicyhanzidict.insert({ "七画次","苇" });
	qihuacicyhanzidict.insert({ "七画次","芥" });
	qihuacicyhanzidict.insert({ "七画次","芯" });
	qihuacicyhanzidict.insert({ "七画次","芭" });
	qihuacicyhanzidict.insert({ "七画次","杖" });
	qihuacicyhanzidict.insert({ "七画次","杉" });
	qihuacicyhanzidict.insert({ "七画次","巫" });
	qihuacicyhanzidict.insert({ "七画次","杈" });
	qihuacicyhanzidict.insert({ "七画次","甫" });
	qihuacicyhanzidict.insert({ "七画次","匣" });
	qihuacicyhanzidict.insert({ "七画次","轩" });
	qihuacicyhanzidict.insert({ "七画次","卤" });
	qihuacicyhanzidict.insert({ "七画次","肖" });
	qihuacicyhanzidict.insert({ "七画次","吱" });
	qihuacicyhanzidict.insert({ "七画次","吠" });
	qihuacicyhanzidict.insert({ "七画次","呕" });
	qihuacicyhanzidict.insert({ "七画次","呐" });
	qihuacicyhanzidict.insert({ "七画次","吟" });
	qihuacicyhanzidict.insert({ "七画次","呛" });
	qihuacicyhanzidict.insert({ "七画次","吻" });
	qihuacicyhanzidict.insert({ "七画次","吭" });
	qihuacicyhanzidict.insert({ "七画次","邑" });
	qihuacicyhanzidict.insert({ "七画次","囤" });
	qihuacicyhanzidict.insert({ "七画次","吮" });
	qihuacicyhanzidict.insert({ "七画次","岖" });
	qihuacicyhanzidict.insert({ "七画次","牡" });
	qihuacicyhanzidict.insert({ "七画次","佑" });
	qihuacicyhanzidict.insert({ "七画次","佃" });
	qihuacicyhanzidict.insert({ "七画次","伺" });
	qihuacicyhanzidict.insert({ "七画次","囱" });
	qihuacicyhanzidict.insert({ "七画次","肛" });
	qihuacicyhanzidict.insert({ "七画次","肘" });
	qihuacicyhanzidict.insert({ "七画次","甸" });
	qihuacicyhanzidict.insert({ "七画次","狈" });
	qihuacicyhanzidict.insert({ "七画次","鸠" });
	qihuacicyhanzidict.insert({ "七画次","彤" });
	qihuacicyhanzidict.insert({ "七画次","灸" });
	qihuacicyhanzidict.insert({ "七画次","刨" });
	qihuacicyhanzidict.insert({ "七画次","庇" });
	qihuacicyhanzidict.insert({ "七画次","吝" });
	qihuacicyhanzidict.insert({ "七画次","庐" });
	qihuacicyhanzidict.insert({ "七画次","闰" });
	qihuacicyhanzidict.insert({ "七画次","兑" });
	qihuacicyhanzidict.insert({ "七画次","灼" });
	qihuacicyhanzidict.insert({ "七画次","沐" });
	qihuacicyhanzidict.insert({ "七画次","沛" });
	qihuacicyhanzidict.insert({ "七画次","汰" });
	qihuacicyhanzidict.insert({ "七画次","沥" });
	qihuacicyhanzidict.insert({ "七画次","沦" });
	qihuacicyhanzidict.insert({ "七画次","汹" });
	qihuacicyhanzidict.insert({ "七画次","沧" });
	qihuacicyhanzidict.insert({ "七画次","沪" });
	qihuacicyhanzidict.insert({ "七画次","忱" });
	qihuacicyhanzidict.insert({ "七画次","诅" });
	qihuacicyhanzidict.insert({ "七画次","诈" });
	qihuacicyhanzidict.insert({ "七画次","罕" });
	qihuacicyhanzidict.insert({ "七画次","屁" });
	qihuacicyhanzidict.insert({ "七画次","坠" });
	qihuacicyhanzidict.insert({ "七画次","妓" });
	qihuacicyhanzidict.insert({ "七画次","姊" });
	qihuacicyhanzidict.insert({ "七画次","妒" });
	qihuacicyhanzidict.insert({ "七画次","纬" });

	ofstream file("七画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : qihuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "七画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "七画次常用汉字初始化失败" << endl;
	}
}


//八画次

void 八画次常用汉字() {
	multimap<string, string>bahuacicyhanzidict;
	bahuacicyhanzidict.insert({ "八画次","玫" });
	bahuacicyhanzidict.insert({ "八画次","卦" });
	bahuacicyhanzidict.insert({ "八画次","坷" });
	bahuacicyhanzidict.insert({ "八画次","坯" });
	bahuacicyhanzidict.insert({ "八画次","拓" });
	bahuacicyhanzidict.insert({ "八画次","坪" });
	bahuacicyhanzidict.insert({ "八画次","坤" });
	bahuacicyhanzidict.insert({ "八画次","拄" });
	bahuacicyhanzidict.insert({ "八画次","拧" });
	bahuacicyhanzidict.insert({ "八画次","拂" });
	bahuacicyhanzidict.insert({ "八画次","拙" });
	bahuacicyhanzidict.insert({ "八画次","拇" });
	bahuacicyhanzidict.insert({ "八画次","拗" });
	bahuacicyhanzidict.insert({ "八画次","茉" });
	bahuacicyhanzidict.insert({ "八画次","昔" });
	bahuacicyhanzidict.insert({ "八画次","苛" });
	bahuacicyhanzidict.insert({ "八画次","苫" });
	bahuacicyhanzidict.insert({ "八画次","苟" });
	bahuacicyhanzidict.insert({ "八画次","苞" });
	bahuacicyhanzidict.insert({ "八画次","茁" });
	bahuacicyhanzidict.insert({ "八画次","苔" });
	bahuacicyhanzidict.insert({ "八画次","枉" });
	bahuacicyhanzidict.insert({ "八画次","枢" });
	bahuacicyhanzidict.insert({ "八画次","枚" });
	bahuacicyhanzidict.insert({ "八画次","枫" });
	bahuacicyhanzidict.insert({ "八画次","杭" });
	bahuacicyhanzidict.insert({ "八画次","郁" });
	bahuacicyhanzidict.insert({ "八画次","矾" });
	bahuacicyhanzidict.insert({ "八画次","奈" });
	bahuacicyhanzidict.insert({ "八画次","奄" });
	bahuacicyhanzidict.insert({ "八画次","殴" });
	bahuacicyhanzidict.insert({ "八画次","歧" });
	bahuacicyhanzidict.insert({ "八画次","卓" });
	bahuacicyhanzidict.insert({ "八画次","昙" });
	bahuacicyhanzidict.insert({ "八画次","哎" });
	bahuacicyhanzidict.insert({ "八画次","咕" });
	bahuacicyhanzidict.insert({ "八画次","呵" });
	bahuacicyhanzidict.insert({ "八画次","咙" });
	bahuacicyhanzidict.insert({ "八画次","呻" });
	bahuacicyhanzidict.insert({ "八画次","咒" });
	bahuacicyhanzidict.insert({ "八画次","咆" });
	bahuacicyhanzidict.insert({ "八画次","咖" });
	bahuacicyhanzidict.insert({ "八画次","帕" });
	bahuacicyhanzidict.insert({ "八画次","账" });
	bahuacicyhanzidict.insert({ "八画次","贬" });
	bahuacicyhanzidict.insert({ "八画次","贮" });
	bahuacicyhanzidict.insert({ "八画次","氛" });
	bahuacicyhanzidict.insert({ "八画次","秉" });
	bahuacicyhanzidict.insert({ "八画次","岳" });
	bahuacicyhanzidict.insert({ "八画次","侠" });
	bahuacicyhanzidict.insert({ "八画次","侥" });
	bahuacicyhanzidict.insert({ "八画次","侣" });
	bahuacicyhanzidict.insert({ "八画次","侈" });
	bahuacicyhanzidict.insert({ "八画次","卑" });
	bahuacicyhanzidict.insert({ "八画次","刽" });
	bahuacicyhanzidict.insert({ "八画次","刹" });
	bahuacicyhanzidict.insert({ "八画次","肴" });
	bahuacicyhanzidict.insert({ "八画次","觅" });
	bahuacicyhanzidict.insert({ "八画次","忿" });
	bahuacicyhanzidict.insert({ "八画次","瓮" });
	bahuacicyhanzidict.insert({ "八画次","肮" });
	bahuacicyhanzidict.insert({ "八画次","肪" });
	bahuacicyhanzidict.insert({ "八画次","狞" });
	bahuacicyhanzidict.insert({ "八画次","庞" });
	bahuacicyhanzidict.insert({ "八画次","疟" });
	bahuacicyhanzidict.insert({ "八画次","疙" });
	bahuacicyhanzidict.insert({ "八画次","疚" });
	bahuacicyhanzidict.insert({ "八画次","卒" });
	bahuacicyhanzidict.insert({ "八画次","氓" });
	bahuacicyhanzidict.insert({ "八画次","炬" });
	bahuacicyhanzidict.insert({ "八画次","沽" });
	bahuacicyhanzidict.insert({ "八画次","沮" });
	bahuacicyhanzidict.insert({ "八画次","泣" });
	bahuacicyhanzidict.insert({ "八画次","泞" });
	bahuacicyhanzidict.insert({ "八画次","泌" });
	bahuacicyhanzidict.insert({ "八画次","沼" });
	bahuacicyhanzidict.insert({ "八画次","怔" });
	bahuacicyhanzidict.insert({ "八画次","怯" });
	bahuacicyhanzidict.insert({ "八画次","宠" });
	bahuacicyhanzidict.insert({ "八画次","宛" });
	bahuacicyhanzidict.insert({ "八画次","衩" });
	bahuacicyhanzidict.insert({ "八画次","祈" });
	bahuacicyhanzidict.insert({ "八画次","诡" });
	bahuacicyhanzidict.insert({ "八画次","帚" });
	bahuacicyhanzidict.insert({ "八画次","屉" });
	bahuacicyhanzidict.insert({ "八画次","弧" });
	bahuacicyhanzidict.insert({ "八画次","弥" });
	bahuacicyhanzidict.insert({ "八画次","陋" });
	bahuacicyhanzidict.insert({ "八画次","陌" });
	bahuacicyhanzidict.insert({ "八画次","函" });
	bahuacicyhanzidict.insert({ "八画次","姆" });
	bahuacicyhanzidict.insert({ "八画次","虱" });
	bahuacicyhanzidict.insert({ "八画次","叁" });
	bahuacicyhanzidict.insert({ "八画次","绅" });
	bahuacicyhanzidict.insert({ "八画次","驹" });
	bahuacicyhanzidict.insert({ "八画次","绊" });
	bahuacicyhanzidict.insert({ "八画次","绎" });


	ofstream file("八画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : bahuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "八画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "八画次常用汉字初始化失败" << endl;
	}
}


//九画次

void 九画次常用汉字() {
	multimap<string, string>jiuhuacicyhanzidict;
	jiuhuacicyhanzidict.insert({ "九画次","契" });
	jiuhuacicyhanzidict.insert({ "九画次","贰" });
	jiuhuacicyhanzidict.insert({ "九画次","玷" });
	jiuhuacicyhanzidict.insert({ "九画次","玲" });
	jiuhuacicyhanzidict.insert({ "九画次","珊" });
	jiuhuacicyhanzidict.insert({ "九画次","拭" });
	jiuhuacicyhanzidict.insert({ "九画次","拷" });
	jiuhuacicyhanzidict.insert({ "九画次","拱" });
	jiuhuacicyhanzidict.insert({ "九画次","挟" });
	jiuhuacicyhanzidict.insert({ "九画次","垢" });
	jiuhuacicyhanzidict.insert({ "九画次","垛" });
	jiuhuacicyhanzidict.insert({ "九画次","拯" });
	jiuhuacicyhanzidict.insert({ "九画次","荆" });
	jiuhuacicyhanzidict.insert({ "九画次","茸" });
	jiuhuacicyhanzidict.insert({ "九画次","茬" });
	jiuhuacicyhanzidict.insert({ "九画次","荚" });
	jiuhuacicyhanzidict.insert({ "九画次","茵" });
	jiuhuacicyhanzidict.insert({ "九画次","茴" });
	jiuhuacicyhanzidict.insert({ "九画次","荞" });
	jiuhuacicyhanzidict.insert({ "九画次","荠" });
	jiuhuacicyhanzidict.insert({ "九画次","荤" });
	jiuhuacicyhanzidict.insert({ "九画次","荧" });
	jiuhuacicyhanzidict.insert({ "九画次","荔" });
	jiuhuacicyhanzidict.insert({ "九画次","栈" });
	jiuhuacicyhanzidict.insert({ "九画次","柑" });
	jiuhuacicyhanzidict.insert({ "九画次","栅" });
	jiuhuacicyhanzidict.insert({ "九画次","柠" });
	jiuhuacicyhanzidict.insert({ "九画次","枷" });
	jiuhuacicyhanzidict.insert({ "九画次","勃" });
	jiuhuacicyhanzidict.insert({ "九画次","柬" });
	jiuhuacicyhanzidict.insert({ "九画次","砂" });
	jiuhuacicyhanzidict.insert({ "九画次","泵" });
	jiuhuacicyhanzidict.insert({ "九画次","砚" });
	jiuhuacicyhanzidict.insert({ "九画次","鸥" });
	jiuhuacicyhanzidict.insert({ "九画次","轴" });
	jiuhuacicyhanzidict.insert({ "九画次","韭" });
	jiuhuacicyhanzidict.insert({ "九画次","虐" });
	jiuhuacicyhanzidict.insert({ "九画次","昧" });
	jiuhuacicyhanzidict.insert({ "九画次","盹" });
	jiuhuacicyhanzidict.insert({ "九画次","咧" });
	jiuhuacicyhanzidict.insert({ "九画次","昵" });
	jiuhuacicyhanzidict.insert({ "九画次","昭" });
	jiuhuacicyhanzidict.insert({ "九画次","盅" });
	jiuhuacicyhanzidict.insert({ "九画次","勋" });
	jiuhuacicyhanzidict.insert({ "九画次","哆" });
	jiuhuacicyhanzidict.insert({ "九画次","咪" });
	jiuhuacicyhanzidict.insert({ "九画次","哟" });
	jiuhuacicyhanzidict.insert({ "九画次","幽" });
	jiuhuacicyhanzidict.insert({ "九画次","钙" });
	jiuhuacicyhanzidict.insert({ "九画次","钝" });
	jiuhuacicyhanzidict.insert({ "九画次","钠" });
	jiuhuacicyhanzidict.insert({ "九画次","钦" });
	jiuhuacicyhanzidict.insert({ "九画次","钧" });
	jiuhuacicyhanzidict.insert({ "九画次","钮" });
	jiuhuacicyhanzidict.insert({ "九画次","毡" });
	jiuhuacicyhanzidict.insert({ "九画次","氢" });
	jiuhuacicyhanzidict.insert({ "九画次","秕" });
	jiuhuacicyhanzidict.insert({ "九画次","俏" });
	jiuhuacicyhanzidict.insert({ "九画次","俄" });
	jiuhuacicyhanzidict.insert({ "九画次","俐" });
	jiuhuacicyhanzidict.insert({ "九画次","侯" });
	jiuhuacicyhanzidict.insert({ "九画次","徊" });
	jiuhuacicyhanzidict.insert({ "九画次","衍" });
	jiuhuacicyhanzidict.insert({ "九画次","胚" });
	jiuhuacicyhanzidict.insert({ "九画次","胧" });
	jiuhuacicyhanzidict.insert({ "九画次","胎" });
	jiuhuacicyhanzidict.insert({ "九画次","狰" });
	jiuhuacicyhanzidict.insert({ "九画次","饵" });
	jiuhuacicyhanzidict.insert({ "九画次","峦" });
	jiuhuacicyhanzidict.insert({ "九画次","奕" });
	jiuhuacicyhanzidict.insert({ "九画次","咨" });
	jiuhuacicyhanzidict.insert({ "九画次","飒" });
	jiuhuacicyhanzidict.insert({ "九画次","闺" });
	jiuhuacicyhanzidict.insert({ "九画次","闽" });
	jiuhuacicyhanzidict.insert({ "九画次","籽" });
	jiuhuacicyhanzidict.insert({ "九画次","娄" });
	jiuhuacicyhanzidict.insert({ "九画次","烁" });
	jiuhuacicyhanzidict.insert({ "九画次","炫" });
	jiuhuacicyhanzidict.insert({ "九画次","洼" });
	jiuhuacicyhanzidict.insert({ "九画次","柒" });
	jiuhuacicyhanzidict.insert({ "九画次","涎" });
	jiuhuacicyhanzidict.insert({ "九画次","洛" });
	jiuhuacicyhanzidict.insert({ "九画次","恃" });
	jiuhuacicyhanzidict.insert({ "九画次","恍" });
	jiuhuacicyhanzidict.insert({ "九画次","恬" });
	jiuhuacicyhanzidict.insert({ "九画次","恤" });
	jiuhuacicyhanzidict.insert({ "九画次","宦" });
	jiuhuacicyhanzidict.insert({ "九画次","诫" });
	jiuhuacicyhanzidict.insert({ "九画次","诬" });
	jiuhuacicyhanzidict.insert({ "九画次","祠" });
	jiuhuacicyhanzidict.insert({ "九画次","诲" });
	jiuhuacicyhanzidict.insert({ "九画次","屏" });
	jiuhuacicyhanzidict.insert({ "九画次","屎" });
	jiuhuacicyhanzidict.insert({ "九画次","逊" });
	jiuhuacicyhanzidict.insert({ "九画次","姚" });
	jiuhuacicyhanzidict.insert({ "九画次","娜" });
	jiuhuacicyhanzidict.insert({ "九画次","蚤" });
	jiuhuacicyhanzidict.insert({ "九画次","骇" });

	ofstream file("九画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : jiuhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "九画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "九画次常用汉字初始化失败" << endl;
	}
}



//十画次

void 十画次常用汉字() {
	multimap<string, string>shihuacicyhanzidict;
	shihuacicyhanzidict.insert({ "十画次","耘" });
	shihuacicyhanzidict.insert({ "十画次","耙" });

	shihuacicyhanzidict.insert({ "十画次","秦" });
	shihuacicyhanzidict.insert({ "十画次","匿" });
	shihuacicyhanzidict.insert({ "十画次","埂" });
	shihuacicyhanzidict.insert({ "十画次","捂" });
	shihuacicyhanzidict.insert({ "十画次","捍" });
	shihuacicyhanzidict.insert({ "十画次","袁" });
	shihuacicyhanzidict.insert({ "十画次","捌" });
	shihuacicyhanzidict.insert({ "十画次","挫" });
	shihuacicyhanzidict.insert({ "十画次","挚" });
	shihuacicyhanzidict.insert({ "十画次","捣" });
	shihuacicyhanzidict.insert({ "十画次","捅" });
	shihuacicyhanzidict.insert({ "十画次","埃" });
	shihuacicyhanzidict.insert({ "十画次","耿" });
	shihuacicyhanzidict.insert({ "十画次","聂" });
	shihuacicyhanzidict.insert({ "十画次","荸" });
	shihuacicyhanzidict.insert({ "十画次","莽" });
	shihuacicyhanzidict.insert({ "十画次","莱" });
	shihuacicyhanzidict.insert({ "十画次","莉" });
	shihuacicyhanzidict.insert({ "十画次","莹" });
	shihuacicyhanzidict.insert({ "十画次","莺" });
	shihuacicyhanzidict.insert({ "十画次","梆" });
	shihuacicyhanzidict.insert({ "十画次","栖" });
	shihuacicyhanzidict.insert({ "十画次","桦" });
	shihuacicyhanzidict.insert({ "十画次","栓" });
	shihuacicyhanzidict.insert({ "十画次","桅" });
	shihuacicyhanzidict.insert({ "十画次","桩" });
	shihuacicyhanzidict.insert({ "十画次","贾" });
	shihuacicyhanzidict.insert({ "十画次","酌" });
	shihuacicyhanzidict.insert({ "十画次","砸" });
	shihuacicyhanzidict.insert({ "十画次","砰" });
	shihuacicyhanzidict.insert({ "十画次","砾" });
	shihuacicyhanzidict.insert({ "十画次","殉" });
	shihuacicyhanzidict.insert({ "十画次","逞" });
	shihuacicyhanzidict.insert({ "十画次","哮" });
	shihuacicyhanzidict.insert({ "十画次","唠" });
	shihuacicyhanzidict.insert({ "十画次","哺" });
	shihuacicyhanzidict.insert({ "十画次","剔" });
	shihuacicyhanzidict.insert({ "十画次","蚌" });
	shihuacicyhanzidict.insert({ "十画次","蚜" });
	shihuacicyhanzidict.insert({ "十画次","畔" });
	shihuacicyhanzidict.insert({ "十画次","蚣" });
	shihuacicyhanzidict.insert({ "十画次","蚪" });
	shihuacicyhanzidict.insert({ "十画次","蚓" });
	shihuacicyhanzidict.insert({ "十画次","哩" });
	shihuacicyhanzidict.insert({ "十画次","圃" });
	shihuacicyhanzidict.insert({ "十画次","鸯" });
	shihuacicyhanzidict.insert({ "十画次","唁" });
	shihuacicyhanzidict.insert({ "十画次","哼" });
	shihuacicyhanzidict.insert({ "十画次","唆" });
	shihuacicyhanzidict.insert({ "十画次","峭" });
	shihuacicyhanzidict.insert({ "十画次","唧" });
	shihuacicyhanzidict.insert({ "十画次","峻" });
	shihuacicyhanzidict.insert({ "十画次","赂" });
	shihuacicyhanzidict.insert({ "十画次","赃" });
	shihuacicyhanzidict.insert({ "十画次","钾" });
	shihuacicyhanzidict.insert({ "十画次","铆" });
	shihuacicyhanzidict.insert({ "十画次","氨" });
	shihuacicyhanzidict.insert({ "十画次","秫" });
	shihuacicyhanzidict.insert({ "十画次","笆" });
	shihuacicyhanzidict.insert({ "十画次","俺" });
	shihuacicyhanzidict.insert({ "十画次","赁" });
	shihuacicyhanzidict.insert({ "十画次","倔" });
	shihuacicyhanzidict.insert({ "十画次","殷" });
	shihuacicyhanzidict.insert({ "十画次","耸" });
	shihuacicyhanzidict.insert({ "十画次","舀" });
	shihuacicyhanzidict.insert({ "十画次","豺" });
	shihuacicyhanzidict.insert({ "十画次","豹" });
	shihuacicyhanzidict.insert({ "十画次","颁" });
	shihuacicyhanzidict.insert({ "十画次","胯" });
	shihuacicyhanzidict.insert({ "十画次","胰" });
	shihuacicyhanzidict.insert({ "十画次","脐" });
	shihuacicyhanzidict.insert({ "十画次","脓" });
	shihuacicyhanzidict.insert({ "十画次","逛" });
	shihuacicyhanzidict.insert({ "十画次","卿" });
	shihuacicyhanzidict.insert({ "十画次","鸵" });
	shihuacicyhanzidict.insert({ "十画次","鸳" });
	shihuacicyhanzidict.insert({ "十画次","馁" });
	shihuacicyhanzidict.insert({ "十画次","凌" });
	shihuacicyhanzidict.insert({ "十画次","凄" });
	shihuacicyhanzidict.insert({ "十画次","衷" });
	shihuacicyhanzidict.insert({ "十画次","郭" });
	shihuacicyhanzidict.insert({ "十画次","斋" });
	shihuacicyhanzidict.insert({ "十画次","疹" });
	shihuacicyhanzidict.insert({ "十画次","紊" });
	shihuacicyhanzidict.insert({ "十画次","瓷" });
	shihuacicyhanzidict.insert({ "十画次","羔" });
	shihuacicyhanzidict.insert({ "十画次","烙" });
	shihuacicyhanzidict.insert({ "十画次","浦" });
	shihuacicyhanzidict.insert({ "十画次","涡" });
	shihuacicyhanzidict.insert({ "十画次","涣" });
	shihuacicyhanzidict.insert({ "十画次","涤" });
	shihuacicyhanzidict.insert({ "十画次","涧" });
	shihuacicyhanzidict.insert({ "十画次","涕" });
	shihuacicyhanzidict.insert({ "十画次","涩" });
	shihuacicyhanzidict.insert({ "十画次","悍" });
	shihuacicyhanzidict.insert({ "十画次","悯" });
	shihuacicyhanzidict.insert({ "十画次","窍" });
	shihuacicyhanzidict.insert({ "十画次","诺" });
	shihuacicyhanzidict.insert({ "十画次","诽" });
	shihuacicyhanzidict.insert({ "十画次","袒" });
	shihuacicyhanzidict.insert({ "十画次","谆" });
	shihuacicyhanzidict.insert({ "十画次","祟" });
	shihuacicyhanzidict.insert({ "十画次","恕" });
	shihuacicyhanzidict.insert({ "十画次","娩" });
	shihuacicyhanzidict.insert({ "十画次","骏" });


	ofstream file("十画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shihuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十画次常用汉字初始化失败" << endl;
	}
}



//十一画次

void 十一画次常用汉字() {
	multimap<string, string>shiyihuacicyhanzidict;

	shiyihuacicyhanzidict.insert({ "十一画次","锁" });
	shiyihuacicyhanzidict.insert({ "十一画次","麸" });
	shiyihuacicyhanzidict.insert({ "十一画次","琉" });
	shiyihuacicyhanzidict.insert({ "十一画次","琅" });
	shiyihuacicyhanzidict.insert({ "十一画次","措" });
	shiyihuacicyhanzidict.insert({ "十一画次","捺" });
	shiyihuacicyhanzidict.insert({ "十一画次","捶" });
	shiyihuacicyhanzidict.insert({ "十一画次","赦" });
	shiyihuacicyhanzidict.insert({ "十一画次","埠" });
	shiyihuacicyhanzidict.insert({ "十一画次","捻" });
	shiyihuacicyhanzidict.insert({ "十一画次","掐" });
	shiyihuacicyhanzidict.insert({ "十一画次","掂" });
	shiyihuacicyhanzidict.insert({ "十一画次","掖" });
	shiyihuacicyhanzidict.insert({ "十一画次","掷" });
	shiyihuacicyhanzidict.insert({ "十一画次","掸" });
	shiyihuacicyhanzidict.insert({ "十一画次","掺" });
	shiyihuacicyhanzidict.insert({ "十一画次","勘" });
	shiyihuacicyhanzidict.insert({ "十一画次","聊" });
	shiyihuacicyhanzidict.insert({ "十一画次","娶" });
	shiyihuacicyhanzidict.insert({ "十一画次","菱" });
	shiyihuacicyhanzidict.insert({ "十一画次","菲" });
	shiyihuacicyhanzidict.insert({ "十一画次","萎" });
	shiyihuacicyhanzidict.insert({ "十一画次","菩" });
	shiyihuacicyhanzidict.insert({ "十一画次","萤" });
	shiyihuacicyhanzidict.insert({ "十一画次","乾" });
	shiyihuacicyhanzidict.insert({ "十一画次","萧" });
	shiyihuacicyhanzidict.insert({ "十一画次","萨" });
	shiyihuacicyhanzidict.insert({ "十一画次","菇" });
	shiyihuacicyhanzidict.insert({ "十一画次","彬" });
	shiyihuacicyhanzidict.insert({ "十一画次","梗" });
	shiyihuacicyhanzidict.insert({ "十一画次","梧" });
	shiyihuacicyhanzidict.insert({ "十一画次","梭" });
	shiyihuacicyhanzidict.insert({ "十一画次","曹" });
	shiyihuacicyhanzidict.insert({ "十一画次","酝" });
	shiyihuacicyhanzidict.insert({ "十一画次","酗" });
	shiyihuacicyhanzidict.insert({ "十一画次","厢" });
	shiyihuacicyhanzidict.insert({ "十一画次","硅" });
	shiyihuacicyhanzidict.insert({ "十一画次","硕" });
	shiyihuacicyhanzidict.insert({ "十一画次","奢" });
	shiyihuacicyhanzidict.insert({ "十一画次","盔" });
	shiyihuacicyhanzidict.insert({ "十一画次","匾" });
	shiyihuacicyhanzidict.insert({ "十一画次","颅" });
	shiyihuacicyhanzidict.insert({ "十一画次","彪" });
	shiyihuacicyhanzidict.insert({ "十一画次","眶" });
	shiyihuacicyhanzidict.insert({ "十一画次","晤" });
	shiyihuacicyhanzidict.insert({ "十一画次","曼" });
	shiyihuacicyhanzidict.insert({ "十一画次","晦" });
	shiyihuacicyhanzidict.insert({ "十一画次","冕" });
	shiyihuacicyhanzidict.insert({ "十一画次","啡" });
	shiyihuacicyhanzidict.insert({ "十一画次","畦" });
	shiyihuacicyhanzidict.insert({ "十一画次","趾" });
	shiyihuacicyhanzidict.insert({ "十一画次","啃" });
	shiyihuacicyhanzidict.insert({ "十一画次","蛆" });
	shiyihuacicyhanzidict.insert({ "十一画次","蚯" });
	shiyihuacicyhanzidict.insert({ "十一画次","蛉" });
	shiyihuacicyhanzidict.insert({ "十一画次","蛀" });
	shiyihuacicyhanzidict.insert({ "十一画次","唬" });
	shiyihuacicyhanzidict.insert({ "十一画次","啰" });
	shiyihuacicyhanzidict.insert({ "十一画次","唾" });
	shiyihuacicyhanzidict.insert({ "十一画次","啤" });
	shiyihuacicyhanzidict.insert({ "十一画次","啥" });
	shiyihuacicyhanzidict.insert({ "十一画次","啸" });
	shiyihuacicyhanzidict.insert({ "十一画次","崎" });
	shiyihuacicyhanzidict.insert({ "十一画次","逻" });
	shiyihuacicyhanzidict.insert({ "十一画次","崔" });
	shiyihuacicyhanzidict.insert({ "十一画次","崩" });
	shiyihuacicyhanzidict.insert({ "十一画次","婴" });
	shiyihuacicyhanzidict.insert({ "十一画次","赊" });
	shiyihuacicyhanzidict.insert({ "十一画次","铐" });
	shiyihuacicyhanzidict.insert({ "十一画次","铛" });
	shiyihuacicyhanzidict.insert({ "十一画次","铝" });
	shiyihuacicyhanzidict.insert({ "十一画次","铡" });
	shiyihuacicyhanzidict.insert({ "十一画次","铣" });
	shiyihuacicyhanzidict.insert({ "十一画次","铭" });
	shiyihuacicyhanzidict.insert({ "十一画次","矫" });
	shiyihuacicyhanzidict.insert({ "十一画次","秸" });
	shiyihuacicyhanzidict.insert({ "十一画次","秽" });
	shiyihuacicyhanzidict.insert({ "十一画次","笙" });
	shiyihuacicyhanzidict.insert({ "十一画次","笤" });
	shiyihuacicyhanzidict.insert({ "十一画次","偎" });
	shiyihuacicyhanzidict.insert({ "十一画次","傀" });
	shiyihuacicyhanzidict.insert({ "十一画次","躯" });
	shiyihuacicyhanzidict.insert({ "十一画次","兜" });
	shiyihuacicyhanzidict.insert({ "十一画次","衅" });
	shiyihuacicyhanzidict.insert({ "十一画次","徘" });
	shiyihuacicyhanzidict.insert({ "十一画次","徙" });
	shiyihuacicyhanzidict.insert({ "十一画次","舶" });
	shiyihuacicyhanzidict.insert({ "十一画次","舷" });
	shiyihuacicyhanzidict.insert({ "十一画次","舵" });
	shiyihuacicyhanzidict.insert({ "十一画次","敛" });
	shiyihuacicyhanzidict.insert({ "十一画次","翎" });
	shiyihuacicyhanzidict.insert({ "十一画次","脯" });
	shiyihuacicyhanzidict.insert({ "十一画次","逸" });
	shiyihuacicyhanzidict.insert({ "十一画次","凰" });
	shiyihuacicyhanzidict.insert({ "十一画次","猖" });
	shiyihuacicyhanzidict.insert({ "十一画次","祭" });
	shiyihuacicyhanzidict.insert({ "十一画次","烹" });
	shiyihuacicyhanzidict.insert({ "十一画次","庶" });
	shiyihuacicyhanzidict.insert({ "十一画次","庵" });
	shiyihuacicyhanzidict.insert({ "十一画次","痊" });
	shiyihuacicyhanzidict.insert({ "十一画次","阎" });
	shiyihuacicyhanzidict.insert({ "十一画次","阐" });
	shiyihuacicyhanzidict.insert({ "十一画次","眷" });
	shiyihuacicyhanzidict.insert({ "十一画次","焊" });
	shiyihuacicyhanzidict.insert({ "十一画次","焕" });
	shiyihuacicyhanzidict.insert({ "十一画次","鸿" });
	shiyihuacicyhanzidict.insert({ "十一画次","涯" });
	shiyihuacicyhanzidict.insert({ "十一画次","淑" });
	shiyihuacicyhanzidict.insert({ "十一画次","淌" });
	shiyihuacicyhanzidict.insert({ "十一画次","淮" });
	shiyihuacicyhanzidict.insert({ "十一画次","淆" });
	shiyihuacicyhanzidict.insert({ "十一画次","渊" });
	shiyihuacicyhanzidict.insert({ "十一画次","淫" });
	shiyihuacicyhanzidict.insert({ "十一画次","淳" });
	shiyihuacicyhanzidict.insert({ "十一画次","淤" });
	shiyihuacicyhanzidict.insert({ "十一画次","淀" });
	shiyihuacicyhanzidict.insert({ "十一画次","涮" });
	shiyihuacicyhanzidict.insert({ "十一画次","涵" });
	shiyihuacicyhanzidict.insert({ "十一画次","惦" });
	shiyihuacicyhanzidict.insert({ "十一画次","悴" });
	shiyihuacicyhanzidict.insert({ "十一画次","惋" });
	shiyihuacicyhanzidict.insert({ "十一画次","寂" });
	shiyihuacicyhanzidict.insert({ "十一画次","窒" });
	shiyihuacicyhanzidict.insert({ "十一画次","谍" });
	shiyihuacicyhanzidict.insert({ "十一画次","谐" });
	shiyihuacicyhanzidict.insert({ "十一画次","裆" });
	shiyihuacicyhanzidict.insert({ "十一画次","袱" });
	shiyihuacicyhanzidict.insert({ "十一画次","祷" });
	shiyihuacicyhanzidict.insert({ "十一画次","谒" });
	shiyihuacicyhanzidict.insert({ "十一画次","谓" });
	shiyihuacicyhanzidict.insert({ "十一画次","谚" });
	shiyihuacicyhanzidict.insert({ "十一画次","尉" });
	shiyihuacicyhanzidict.insert({ "十一画次","堕" });
	shiyihuacicyhanzidict.insert({ "十一画次","隅" });
	shiyihuacicyhanzidict.insert({ "十一画次","婉" });
	shiyihuacicyhanzidict.insert({ "十一画次","颇" });
	shiyihuacicyhanzidict.insert({ "十一画次","绰" });
	shiyihuacicyhanzidict.insert({ "十一画次","绷" });
	shiyihuacicyhanzidict.insert({ "十一画次","综" });
	shiyihuacicyhanzidict.insert({ "十一画次","绽" });
	shiyihuacicyhanzidict.insert({ "十一画次","缀" });
	shiyihuacicyhanzidict.insert({ "十一画次","巢" });

	ofstream file("十一画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shiyihuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十一画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十一画次常用汉字初始化失败" << endl;
	}
}


//十二画次

void 十二画次常用汉字() {
	multimap<string, string>shierhuacicyhanzidict;
	shierhuacicyhanzidict.insert({ "十二画次","林" });
	shierhuacicyhanzidict.insert({ "十二画次","琢" });

	shierhuacicyhanzidict.insert({ "十二画次","琼" });
	shierhuacicyhanzidict.insert({ "十二画次","揍" });
	shierhuacicyhanzidict.insert({ "十二画次","堰" });
	shierhuacicyhanzidict.insert({ "十二画次","揩" });
	shierhuacicyhanzidict.insert({ "十二画次","揽" });
	shierhuacicyhanzidict.insert({ "十二画次","揖" });
	shierhuacicyhanzidict.insert({ "十二画次","彭" });
	shierhuacicyhanzidict.insert({ "十二画次","揣" });
	shierhuacicyhanzidict.insert({ "十二画次","搀" });
	shierhuacicyhanzidict.insert({ "十二画次","搓" });
	shierhuacicyhanzidict.insert({ "十二画次","壹" });
	shierhuacicyhanzidict.insert({ "十二画次","搔" });
	shierhuacicyhanzidict.insert({ "十二画次","葫" });
	shierhuacicyhanzidict.insert({ "十二画次","募" });
	shierhuacicyhanzidict.insert({ "十二画次","蒋" });
	shierhuacicyhanzidict.insert({ "十二画次","蒂" });
	shierhuacicyhanzidict.insert({ "十二画次","韩" });
	shierhuacicyhanzidict.insert({ "十二画次","棱" });
	shierhuacicyhanzidict.insert({ "十二画次","椰" });
	shierhuacicyhanzidict.insert({ "十二画次","焚" });
	shierhuacicyhanzidict.insert({ "十二画次","椎" });
	shierhuacicyhanzidict.insert({ "十二画次","棺" });
	shierhuacicyhanzidict.insert({ "十二画次","榔" });
	shierhuacicyhanzidict.insert({ "十二画次","椭" });
	shierhuacicyhanzidict.insert({ "十二画次","粟" });
	shierhuacicyhanzidict.insert({ "十二画次","棘" });
	shierhuacicyhanzidict.insert({ "十二画次","酣" });
	shierhuacicyhanzidict.insert({ "十二画次","酥" });
	shierhuacicyhanzidict.insert({ "十二画次","硝" });
	shierhuacicyhanzidict.insert({ "十二画次","硫" });
	shierhuacicyhanzidict.insert({ "十二画次","颊" });
	shierhuacicyhanzidict.insert({ "十二画次","雳" });
	shierhuacicyhanzidict.insert({ "十二画次","翘" });
	shierhuacicyhanzidict.insert({ "十二画次","凿" });
	shierhuacicyhanzidict.insert({ "十二画次","棠" });
	shierhuacicyhanzidict.insert({ "十二画次","晰" });
	shierhuacicyhanzidict.insert({ "十二画次","鼎" });
	shierhuacicyhanzidict.insert({ "十二画次","喳" });
	shierhuacicyhanzidict.insert({ "十二画次","遏" });
	shierhuacicyhanzidict.insert({ "十二画次","晾" });
	shierhuacicyhanzidict.insert({ "十二画次","畴" });
	shierhuacicyhanzidict.insert({ "十二画次","跋" });
	shierhuacicyhanzidict.insert({ "十二画次","跛" });
	shierhuacicyhanzidict.insert({ "十二画次","蛔" });
	shierhuacicyhanzidict.insert({ "十二画次","蜒" });
	shierhuacicyhanzidict.insert({ "十二画次","蛤" });
	shierhuacicyhanzidict.insert({ "十二画次","鹃" });
	shierhuacicyhanzidict.insert({ "十二画次","喻" });
	shierhuacicyhanzidict.insert({ "十二画次","啼" });
	shierhuacicyhanzidict.insert({ "十二画次","喧" });
	shierhuacicyhanzidict.insert({ "十二画次","嵌" });
	shierhuacicyhanzidict.insert({ "十二画次","赋" });
	shierhuacicyhanzidict.insert({ "十二画次","赎" });
	shierhuacicyhanzidict.insert({ "十二画次","赐" });
	shierhuacicyhanzidict.insert({ "十二画次","锉" });
	shierhuacicyhanzidict.insert({ "十二画次","锌" });
	shierhuacicyhanzidict.insert({ "十二画次","甥" });
	shierhuacicyhanzidict.insert({ "十二画次","掰" });
	shierhuacicyhanzidict.insert({ "十二画次","氮" });
	shierhuacicyhanzidict.insert({ "十二画次","氯" });
	shierhuacicyhanzidict.insert({ "十二画次","黍" });
	shierhuacicyhanzidict.insert({ "十二画次","筏" });
	shierhuacicyhanzidict.insert({ "十二画次","牍" });
	shierhuacicyhanzidict.insert({ "十二画次","粤" });
	shierhuacicyhanzidict.insert({ "十二画次","逾" });
	shierhuacicyhanzidict.insert({ "十二画次","腌" });
	shierhuacicyhanzidict.insert({ "十二画次","腋" });
	shierhuacicyhanzidict.insert({ "十二画次","腕" });
	shierhuacicyhanzidict.insert({ "十二画次","猩" });
	shierhuacicyhanzidict.insert({ "十二画次","猬" });
	shierhuacicyhanzidict.insert({ "十二画次","惫" });
	shierhuacicyhanzidict.insert({ "十二画次","敦" });
	shierhuacicyhanzidict.insert({ "十二画次","痘" });
	shierhuacicyhanzidict.insert({ "十二画次","痢" });
	shierhuacicyhanzidict.insert({ "十二画次","痪" });
	shierhuacicyhanzidict.insert({ "十二画次","竣" });
	shierhuacicyhanzidict.insert({ "十二画次","翔" });
	shierhuacicyhanzidict.insert({ "十二画次","奠" });
	shierhuacicyhanzidict.insert({ "十二画次","遂" });
	shierhuacicyhanzidict.insert({ "十二画次","焙" });
	shierhuacicyhanzidict.insert({ "十二画次","滞" });
	shierhuacicyhanzidict.insert({ "十二画次","湘" });
	shierhuacicyhanzidict.insert({ "十二画次","渤" });
	shierhuacicyhanzidict.insert({ "十二画次","渺" });
	shierhuacicyhanzidict.insert({ "十二画次","溃" });
	shierhuacicyhanzidict.insert({ "十二画次","溅" });
	shierhuacicyhanzidict.insert({ "十二画次","湃" });
	shierhuacicyhanzidict.insert({ "十二画次","愕" });
	shierhuacicyhanzidict.insert({ "十二画次","惶" });
	shierhuacicyhanzidict.insert({ "十二画次","寓" });
	shierhuacicyhanzidict.insert({ "十二画次","窖" });
	shierhuacicyhanzidict.insert({ "十二画次","窘" });
	shierhuacicyhanzidict.insert({ "十二画次","雇" });
	shierhuacicyhanzidict.insert({ "十二画次","谤" });
	shierhuacicyhanzidict.insert({ "十二画次","犀" });
	shierhuacicyhanzidict.insert({ "十二画次","隘" });
	shierhuacicyhanzidict.insert({ "十二画次","媒" });
	shierhuacicyhanzidict.insert({ "十二画次","媚" });
	shierhuacicyhanzidict.insert({ "十二画次","婿" });
	shierhuacicyhanzidict.insert({ "十二画次","缅" });
	shierhuacicyhanzidict.insert({ "十二画次","缆" });
	shierhuacicyhanzidict.insert({ "十二画次","缔" });
	shierhuacicyhanzidict.insert({ "十二画次","缕" });
	shierhuacicyhanzidict.insert({ "十二画次","骚" });

	ofstream file("十二画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shierhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十二画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十二画次常用汉字初始化失败" << endl;
	}
}


//十三画次

void 十三画次常用汉字() {
	multimap<string, string>shisanhuacicyhanzidict;
	shisanhuacicyhanzidict.insert({ "十三画次","瑟" });
	shisanhuacicyhanzidict.insert({ "十三画次","鹉" });

	shisanhuacicyhanzidict.insert({ "十三画次","瑰" });
	shisanhuacicyhanzidict.insert({ "十三画次","搪" });
	shisanhuacicyhanzidict.insert({ "十三画次","聘" });
	shisanhuacicyhanzidict.insert({ "十三画次","斟" });
	shisanhuacicyhanzidict.insert({ "十三画次","靴" });
	shisanhuacicyhanzidict.insert({ "十三画次","靶" });
	shisanhuacicyhanzidict.insert({ "十三画次","蓖" });
	shisanhuacicyhanzidict.insert({ "十三画次","蒿" });
	shisanhuacicyhanzidict.insert({ "十三画次","蒲" });
	shisanhuacicyhanzidict.insert({ "十三画次","蓉" });
	shisanhuacicyhanzidict.insert({ "十三画次","楔" });
	shisanhuacicyhanzidict.insert({ "十三画次","椿" });
	shisanhuacicyhanzidict.insert({ "十三画次","楷" });
	shisanhuacicyhanzidict.insert({ "十三画次","榄" });
	shisanhuacicyhanzidict.insert({ "十三画次","楞" });
	shisanhuacicyhanzidict.insert({ "十三画次","楣" });
	shisanhuacicyhanzidict.insert({ "十三画次","酪" });
	shisanhuacicyhanzidict.insert({ "十三画次","碘" });
	shisanhuacicyhanzidict.insert({ "十三画次","硼" });
	shisanhuacicyhanzidict.insert({ "十三画次","碉" });
	shisanhuacicyhanzidict.insert({ "十三画次","辐" });
	shisanhuacicyhanzidict.insert({ "十三画次","辑" });
	shisanhuacicyhanzidict.insert({ "十三画次","频" });
	shisanhuacicyhanzidict.insert({ "十三画次","睹" });
	shisanhuacicyhanzidict.insert({ "十三画次","睦" });
	shisanhuacicyhanzidict.insert({ "十三画次","瞄" });
	shisanhuacicyhanzidict.insert({ "十三画次","嗜" });
	shisanhuacicyhanzidict.insert({ "十三画次","嗦" });
	shisanhuacicyhanzidict.insert({ "十三画次","暇" });
	shisanhuacicyhanzidict.insert({ "十三画次","畸" });
	shisanhuacicyhanzidict.insert({ "十三画次","跷" });
	shisanhuacicyhanzidict.insert({ "十三画次","跺" });
	shisanhuacicyhanzidict.insert({ "十三画次","蜈" });
	shisanhuacicyhanzidict.insert({ "十三画次","蜗" });
	shisanhuacicyhanzidict.insert({ "十三画次","蜕" });
	shisanhuacicyhanzidict.insert({ "十三画次","蛹" });
	shisanhuacicyhanzidict.insert({ "十三画次","嗅" });
	shisanhuacicyhanzidict.insert({ "十三画次","嗡" });
	shisanhuacicyhanzidict.insert({ "十三画次","嗤" });
	shisanhuacicyhanzidict.insert({ "十三画次","署" });
	shisanhuacicyhanzidict.insert({ "十三画次","蜀" });
	shisanhuacicyhanzidict.insert({ "十三画次","幌" });
	shisanhuacicyhanzidict.insert({ "十三画次","锚" });
	shisanhuacicyhanzidict.insert({ "十三画次","锥" });
	shisanhuacicyhanzidict.insert({ "十三画次","锨" });
	shisanhuacicyhanzidict.insert({ "十三画次","锭" });
	shisanhuacicyhanzidict.insert({ "十三画次","锰" });
	shisanhuacicyhanzidict.insert({ "十三画次","稚" });
	shisanhuacicyhanzidict.insert({ "十三画次","颓" });
	shisanhuacicyhanzidict.insert({ "十三画次","筷" });
	shisanhuacicyhanzidict.insert({ "十三画次","魁" });
	shisanhuacicyhanzidict.insert({ "十三画次","衙" });
	shisanhuacicyhanzidict.insert({ "十三画次","腻" });
	shisanhuacicyhanzidict.insert({ "十三画次","腮" });
	shisanhuacicyhanzidict.insert({ "十三画次","腺" });
	shisanhuacicyhanzidict.insert({ "十三画次","鹏" });
	shisanhuacicyhanzidict.insert({ "十三画次","肄" });
	shisanhuacicyhanzidict.insert({ "十三画次","猿" });
	shisanhuacicyhanzidict.insert({ "十三画次","颖" });
	shisanhuacicyhanzidict.insert({ "十三画次","煞" });
	shisanhuacicyhanzidict.insert({ "十三画次","雏" });
	shisanhuacicyhanzidict.insert({ "十三画次","馍" });
	shisanhuacicyhanzidict.insert({ "十三画次","馏" });
	shisanhuacicyhanzidict.insert({ "十三画次","禀" });
	shisanhuacicyhanzidict.insert({ "十三画次","痹" });
	shisanhuacicyhanzidict.insert({ "十三画次","廓" });
	shisanhuacicyhanzidict.insert({ "十三画次","痴" });
	shisanhuacicyhanzidict.insert({ "十三画次","靖" });
	shisanhuacicyhanzidict.insert({ "十三画次","誊" });
	shisanhuacicyhanzidict.insert({ "十三画次","漓" });
	shisanhuacicyhanzidict.insert({ "十三画次","溢" });
	shisanhuacicyhanzidict.insert({ "十三画次","溯" });
	shisanhuacicyhanzidict.insert({ "十三画次","溶" });
	shisanhuacicyhanzidict.insert({ "十三画次","滓" });
	shisanhuacicyhanzidict.insert({ "十三画次","溺" });
	shisanhuacicyhanzidict.insert({ "十三画次","寞" });
	shisanhuacicyhanzidict.insert({ "十三画次","窥" });
	shisanhuacicyhanzidict.insert({ "十三画次","窟" });
	shisanhuacicyhanzidict.insert({ "十三画次","寝" });
	shisanhuacicyhanzidict.insert({ "十三画次","褂" });
	shisanhuacicyhanzidict.insert({ "十三画次","裸" });
	shisanhuacicyhanzidict.insert({ "十三画次","谬" });
	shisanhuacicyhanzidict.insert({ "十三画次","媳" });
	shisanhuacicyhanzidict.insert({ "十三画次","嫉" });
	shisanhuacicyhanzidict.insert({ "十三画次","缚" });
	shisanhuacicyhanzidict.insert({ "十三画次","缤" });
	shisanhuacicyhanzidict.insert({ "十三画次","剿" });


	ofstream file("十三画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shisanhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十三画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十三画次常用汉字初始化失败" << endl;
	}
}

//十四画次

void 十四画次常用汉字() {
	multimap<string, string>shisihuacicyhanzidict;

	shisihuacicyhanzidict.insert({ "十四画次","赘" });
	shisihuacicyhanzidict.insert({ "十四画次","熬" });
	shisihuacicyhanzidict.insert({ "十四画次","赫" });
	shisihuacicyhanzidict.insert({ "十四画次","蔫" });
	shisihuacicyhanzidict.insert({ "十四画次","摹" });
	shisihuacicyhanzidict.insert({ "十四画次","蔓" });
	shisihuacicyhanzidict.insert({ "十四画次","蔗" });
	shisihuacicyhanzidict.insert({ "十四画次","蔼" });
	shisihuacicyhanzidict.insert({ "十四画次","熙" });
	shisihuacicyhanzidict.insert({ "十四画次","蔚" });
	shisihuacicyhanzidict.insert({ "十四画次","兢" });
	shisihuacicyhanzidict.insert({ "十四画次","榛" });
	shisihuacicyhanzidict.insert({ "十四画次","榕" });
	shisihuacicyhanzidict.insert({ "十四画次","酵" });
	shisihuacicyhanzidict.insert({ "十四画次","碟" });
	shisihuacicyhanzidict.insert({ "十四画次","碴" });
	shisihuacicyhanzidict.insert({ "十四画次","碱" });
	shisihuacicyhanzidict.insert({ "十四画次","碳" });
	shisihuacicyhanzidict.insert({ "十四画次","辕" });
	shisihuacicyhanzidict.insert({ "十四画次","辖" });
	shisihuacicyhanzidict.insert({ "十四画次","雌" });
	shisihuacicyhanzidict.insert({ "十四画次","墅" });
	shisihuacicyhanzidict.insert({ "十四画次","嘁" });
	shisihuacicyhanzidict.insert({ "十四画次","踊" });
	shisihuacicyhanzidict.insert({ "十四画次","蝉" });
	shisihuacicyhanzidict.insert({ "十四画次","嘀" });
	shisihuacicyhanzidict.insert({ "十四画次","幔" });
	shisihuacicyhanzidict.insert({ "十四画次","镀" });
	shisihuacicyhanzidict.insert({ "十四画次","舔" });
	shisihuacicyhanzidict.insert({ "十四画次","熏" });
	shisihuacicyhanzidict.insert({ "十四画次","箍" });
	shisihuacicyhanzidict.insert({ "十四画次","箕" });
	shisihuacicyhanzidict.insert({ "十四画次","箫" });
	shisihuacicyhanzidict.insert({ "十四画次","舆" });
	shisihuacicyhanzidict.insert({ "十四画次","僧" });
	shisihuacicyhanzidict.insert({ "十四画次","孵" });
	shisihuacicyhanzidict.insert({ "十四画次","瘩" });
	shisihuacicyhanzidict.insert({ "十四画次","瘟" });
	shisihuacicyhanzidict.insert({ "十四画次","彰" });
	shisihuacicyhanzidict.insert({ "十四画次","粹" });
	shisihuacicyhanzidict.insert({ "十四画次","漱" });
	shisihuacicyhanzidict.insert({ "十四画次","漩" });
	shisihuacicyhanzidict.insert({ "十四画次","漾" });
	shisihuacicyhanzidict.insert({ "十四画次","慷" });
	shisihuacicyhanzidict.insert({ "十四画次","寡" });
	shisihuacicyhanzidict.insert({ "十四画次","寥" });
	shisihuacicyhanzidict.insert({ "十四画次","谭" });
	shisihuacicyhanzidict.insert({ "十四画次","褐" });
	shisihuacicyhanzidict.insert({ "十四画次","褪" });
	shisihuacicyhanzidict.insert({ "十四画次","隧" });
	shisihuacicyhanzidict.insert({ "十四画次","嫡" });
	shisihuacicyhanzidict.insert({ "十四画次","缨" });

	ofstream file("十四画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shisihuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十四画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十四画次常用汉字初始化失败" << endl;
	}
}

//十五画次

void 十五画次常用汉字() {
	multimap<string, string>shiwuhuacicyhanzidict;
	shiwuhuacicyhanzidict.insert({ "十五画次","撵" });
	shiwuhuacicyhanzidict.insert({ "十五画次","撩" });

	shiwuhuacicyhanzidict.insert({ "十五画次","撮" });
	shiwuhuacicyhanzidict.insert({ "十五画次","撬" });
	shiwuhuacicyhanzidict.insert({ "十五画次","擒" });
	shiwuhuacicyhanzidict.insert({ "十五画次","墩" });
	shiwuhuacicyhanzidict.insert({ "十五画次","撰" });
	shiwuhuacicyhanzidict.insert({ "十五画次","鞍" });
	shiwuhuacicyhanzidict.insert({ "十五画次","蕊" });
	shiwuhuacicyhanzidict.insert({ "十五画次","蕴" });
	shiwuhuacicyhanzidict.insert({ "十五画次","樊" });
	shiwuhuacicyhanzidict.insert({ "十五画次","樟" });
	shiwuhuacicyhanzidict.insert({ "十五画次","橄" });
	shiwuhuacicyhanzidict.insert({ "十五画次","敷" });
	shiwuhuacicyhanzidict.insert({ "十五画次","豌" });
	shiwuhuacicyhanzidict.insert({ "十五画次","醇" });
	shiwuhuacicyhanzidict.insert({ "十五画次","磕" });
	shiwuhuacicyhanzidict.insert({ "十五画次","磅" });
	shiwuhuacicyhanzidict.insert({ "十五画次","碾" });
	shiwuhuacicyhanzidict.insert({ "十五画次","憋" });
	shiwuhuacicyhanzidict.insert({ "十五画次","嘶" });
	shiwuhuacicyhanzidict.insert({ "十五画次","嘲" });
	shiwuhuacicyhanzidict.insert({ "十五画次","嘹" });
	shiwuhuacicyhanzidict.insert({ "十五画次","蝠" });
	shiwuhuacicyhanzidict.insert({ "十五画次","蝎" });
	shiwuhuacicyhanzidict.insert({ "十五画次","蝌" });
	shiwuhuacicyhanzidict.insert({ "十五画次","蝗" });
	shiwuhuacicyhanzidict.insert({ "十五画次","蝙" });
	shiwuhuacicyhanzidict.insert({ "十五画次","嘿" });
	shiwuhuacicyhanzidict.insert({ "十五画次","幢" });
	shiwuhuacicyhanzidict.insert({ "十五画次","镊" });
	shiwuhuacicyhanzidict.insert({ "十五画次","镐" });
	shiwuhuacicyhanzidict.insert({ "十五画次","稽" });
	shiwuhuacicyhanzidict.insert({ "十五画次","篓" });
	shiwuhuacicyhanzidict.insert({ "十五画次","膘" });
	shiwuhuacicyhanzidict.insert({ "十五画次","鲤" });
	shiwuhuacicyhanzidict.insert({ "十五画次","鲫" });
	shiwuhuacicyhanzidict.insert({ "十五画次","褒" });
	shiwuhuacicyhanzidict.insert({ "十五画次","瘪" });
	shiwuhuacicyhanzidict.insert({ "十五画次","瘤" });
	shiwuhuacicyhanzidict.insert({ "十五画次","瘫" });
	shiwuhuacicyhanzidict.insert({ "十五画次","凛" });
	shiwuhuacicyhanzidict.insert({ "十五画次","澎" });
	shiwuhuacicyhanzidict.insert({ "十五画次","潭" });
	shiwuhuacicyhanzidict.insert({ "十五画次","潦" });
	shiwuhuacicyhanzidict.insert({ "十五画次","澳" });
	shiwuhuacicyhanzidict.insert({ "十五画次","潘" });
	shiwuhuacicyhanzidict.insert({ "十五画次","澈" });
	shiwuhuacicyhanzidict.insert({ "十五画次","澜" });
	shiwuhuacicyhanzidict.insert({ "十五画次","澄" });
	shiwuhuacicyhanzidict.insert({ "十五画次","憔" });
	shiwuhuacicyhanzidict.insert({ "十五画次","懊" });
	shiwuhuacicyhanzidict.insert({ "十五画次","憎" });
	shiwuhuacicyhanzidict.insert({ "十五画次","翩" });
	shiwuhuacicyhanzidict.insert({ "十五画次","褥" });
	shiwuhuacicyhanzidict.insert({ "十五画次","谴" });
	shiwuhuacicyhanzidict.insert({ "十五画次","鹤" });
	shiwuhuacicyhanzidict.insert({ "十五画次","憨" });
	shiwuhuacicyhanzidict.insert({ "十五画次","履" });
	shiwuhuacicyhanzidict.insert({ "十五画次","嬉" });
	shiwuhuacicyhanzidict.insert({ "十五画次","豫" });
	shiwuhuacicyhanzidict.insert({ "十五画次","缭" });

	ofstream file("十五画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shiwuhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十五画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十五画次常用汉字初始化失败" << endl;
	}
}

//十六画次

void 十六画次常用汉字() {
	multimap<string, string>shiliuhuacicyhanzidict;

	shiliuhuacicyhanzidict.insert({ "十六画次","撼" });
	shiliuhuacicyhanzidict.insert({ "十六画次","擂" });
	shiliuhuacicyhanzidict.insert({ "十六画次","擅" });
	shiliuhuacicyhanzidict.insert({ "十六画次","蕾" });
	shiliuhuacicyhanzidict.insert({ "十六画次","薛" });
	shiliuhuacicyhanzidict.insert({ "十六画次","薇" });
	shiliuhuacicyhanzidict.insert({ "十六画次","擎" });
	shiliuhuacicyhanzidict.insert({ "十六画次","翰" });
	shiliuhuacicyhanzidict.insert({ "十六画次","噩" });
	shiliuhuacicyhanzidict.insert({ "十六画次","橱" });
	shiliuhuacicyhanzidict.insert({ "十六画次","橙" });
	shiliuhuacicyhanzidict.insert({ "十六画次","瓢" });
	shiliuhuacicyhanzidict.insert({ "十六画次","蟥" });
	shiliuhuacicyhanzidict.insert({ "十六画次","霍" });
	shiliuhuacicyhanzidict.insert({ "十六画次","霎" });
	shiliuhuacicyhanzidict.insert({ "十六画次","辙" });
	shiliuhuacicyhanzidict.insert({ "十六画次","冀" });
	shiliuhuacicyhanzidict.insert({ "十六画次","踱" });
	shiliuhuacicyhanzidict.insert({ "十六画次","蹂" });
	shiliuhuacicyhanzidict.insert({ "十六画次","蟆" });
	shiliuhuacicyhanzidict.insert({ "十六画次","螃" });
	shiliuhuacicyhanzidict.insert({ "十六画次","螟" });
	shiliuhuacicyhanzidict.insert({ "十六画次","噪" });
	shiliuhuacicyhanzidict.insert({ "十六画次","鹦" });
	shiliuhuacicyhanzidict.insert({ "十六画次","黔" });
	shiliuhuacicyhanzidict.insert({ "十六画次","穆" });
	shiliuhuacicyhanzidict.insert({ "十六画次","篡" });
	shiliuhuacicyhanzidict.insert({ "十六画次","篷" });
	shiliuhuacicyhanzidict.insert({ "十六画次","篙" });
	shiliuhuacicyhanzidict.insert({ "十六画次","篱" });
	shiliuhuacicyhanzidict.insert({ "十六画次","儒" });
	shiliuhuacicyhanzidict.insert({ "十六画次","膳" });
	shiliuhuacicyhanzidict.insert({ "十六画次","鲸" });
	shiliuhuacicyhanzidict.insert({ "十六画次","瘾" });
	shiliuhuacicyhanzidict.insert({ "十六画次","瘸" });
	shiliuhuacicyhanzidict.insert({ "十六画次","糙" });
	shiliuhuacicyhanzidict.insert({ "十六画次","燎" });
	shiliuhuacicyhanzidict.insert({ "十六画次","濒" });
	shiliuhuacicyhanzidict.insert({ "十六画次","憾" });
	shiliuhuacicyhanzidict.insert({ "十六画次","懈" });
	shiliuhuacicyhanzidict.insert({ "十六画次","窿" });
	shiliuhuacicyhanzidict.insert({ "十六画次","缰" });

	ofstream file("十六画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shiliuhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十六画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十六画次常用汉字初始化失败" << endl;
	}
}

//十七画次

void 十七画次常用汉字() {
	multimap<string, string>shiqihuacicyhanzidict;
	shiqihuacicyhanzidict.insert({ "十七画次","壕" });
	shiqihuacicyhanzidict.insert({ "十七画次","藐" });

	shiqihuacicyhanzidict.insert({ "十七画次", "檬" });
	shiqihuacicyhanzidict.insert({ "十七画次", "檐" });
	shiqihuacicyhanzidict.insert({ "十七画次", "檩" });
	shiqihuacicyhanzidict.insert({ "十七画次", "檀" });
	shiqihuacicyhanzidict.insert({ "十七画次", "礁" });
	shiqihuacicyhanzidict.insert({ "十七画次", "磷" });
	shiqihuacicyhanzidict.insert({ "十七画次", "瞭" });
	shiqihuacicyhanzidict.insert({ "十七画次", "瞬" });
	shiqihuacicyhanzidict.insert({ "十七画次", "瞳" });
	shiqihuacicyhanzidict.insert({ "十七画次", "瞪" });
	shiqihuacicyhanzidict.insert({ "十七画次", "曙" });
	shiqihuacicyhanzidict.insert({ "十七画次", "蹋" });
	shiqihuacicyhanzidict.insert({ "十七画次", "蟋" });
	shiqihuacicyhanzidict.insert({ "十七画次", "蟀" });
	shiqihuacicyhanzidict.insert({ "十七画次", "嚎" });
	shiqihuacicyhanzidict.insert({ "十七画次", "赡" });
	shiqihuacicyhanzidict.insert({ "十七画次", "镣" });
	shiqihuacicyhanzidict.insert({ "十七画次", "魏" });
	shiqihuacicyhanzidict.insert({ "十七画次", "簇" });
	shiqihuacicyhanzidict.insert({ "十七画次", "儡" });
	shiqihuacicyhanzidict.insert({ "十七画次", "徽" });
	shiqihuacicyhanzidict.insert({ "十七画次", "爵" });
	shiqihuacicyhanzidict.insert({ "十七画次", "朦" });
	shiqihuacicyhanzidict.insert({ "十七画次", "臊" });
	shiqihuacicyhanzidict.insert({ "十七画次", "鳄" });
	shiqihuacicyhanzidict.insert({ "十七画次", "糜" });
	shiqihuacicyhanzidict.insert({ "十七画次", "癌" });
	shiqihuacicyhanzidict.insert({ "十七画次", "懦" });
	shiqihuacicyhanzidict.insert({ "十七画次", "豁" });
	shiqihuacicyhanzidict.insert({ "十七画次", "臀" });


	ofstream file("十七画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shiqihuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十七画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十七画次常用汉字初始化失败" << endl;
	}
}


//十八画次

void 十八画次常用汉字() {
	multimap<string, string>shibahuacicyhanzidict;
	shibahuacicyhanzidict.insert({ "十八画次","藕" });
	shibahuacicyhanzidict.insert({ "十八画次","藤" });
	shibahuacicyhanzidict.insert({ "十八画次","瞻" });
	shibahuacicyhanzidict.insert({ "十八画次","喧" });
	shibahuacicyhanzidict.insert({ "十八画次","鳍" });
	shibahuacicyhanzidict.insert({ "十八画次","癞" });
	shibahuacicyhanzidict.insert({ "十八画次","瀑" });
	shibahuacicyhanzidict.insert({ "十八画次","襟" });
	shibahuacicyhanzidict.insert({ "十八画次","璧" });
	shibahuacicyhanzidict.insert({ "十八画次","戳" });

	ofstream file("十八画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shibahuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十八画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十八画次常用汉字初始化失败" << endl;
	}
}

//十九画次

void 十九画次常用汉字() {
	multimap<string, string>shijiuhuacicyhanzidict;
	shijiuhuacicyhanzidict.insert({ "十九画次","攒" });
	shijiuhuacicyhanzidict.insert({ "十九画次","孽" });
	shijiuhuacicyhanzidict.insert({ "十九画次","蘑" });
	shijiuhuacicyhanzidict.insert({ "十九画次","藻" });
	shijiuhuacicyhanzidict.insert({ "十九画次","鳖" });
	shijiuhuacicyhanzidict.insert({ "十九画次","蹭" });
	shijiuhuacicyhanzidict.insert({ "十九画次","蹬" });
	shijiuhuacicyhanzidict.insert({ "十九画次","簸" });
	shijiuhuacicyhanzidict.insert({ "十九画次","薄" });
	shijiuhuacicyhanzidict.insert({ "十九画次","蟹" });
	shijiuhuacicyhanzidict.insert({ "十九画次","靡" });
	shijiuhuacicyhanzidict.insert({ "十九画次","癣" });
	shijiuhuacicyhanzidict.insert({ "十九画次","羹" });

	ofstream file("十九画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : shijiuhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "十九画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "十九画次常用汉字初始化失败" << endl;
	}
}

//二十画次

void 二十画次常用汉字() {
	multimap<string, string>ershihuacicyhanzidict;
	ershihuacicyhanzidict.insert({ "二十画次","鬓" });
	ershihuacicyhanzidict.insert({ "二十画次","攘" });
	ershihuacicyhanzidict.insert({ "二十画次","蠕" });
	ershihuacicyhanzidict.insert({ "二十画次","巍" });
	ershihuacicyhanzidict.insert({ "二十画次","鳞" });
	ershihuacicyhanzidict.insert({ "二十画次","糯" });
	ershihuacicyhanzidict.insert({ "二十画次","譬" });

	ofstream file("二十画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : ershihuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "二十画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "二十画次常用汉字初始化失败" << endl;
	}
}

//二十一画次

void 二十一画次常用汉字() {
	multimap<string, string>ershiyihuacicyhanzidict;
	ershiyihuacicyhanzidict.insert({ "二十一画次","霹" });
	ershiyihuacicyhanzidict.insert({ "二十一画次","躏" });
	ershiyihuacicyhanzidict.insert({ "二十一画次","髓" });
	ofstream file("二十一画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : ershiyihuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "二十一画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "二十一画次常用汉字初始化失败" << endl;
	}
}

//二十二画次

void 二十二画次常用汉字() {
	multimap<string, string>ershierhuacicyhanzidict;
	ershierhuacicyhanzidict.insert({ "二十二画次","蘸" });
	ershierhuacicyhanzidict.insert({ "二十二画次","镶" });
	ershierhuacicyhanzidict.insert({ "二十二画次","瓤" });

	ofstream file("二十二画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : ershierhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "二十二画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "二十二画次常用汉字初始化失败" << endl;
	}
}

//二十三画次

void 二十三画次常用汉字() {
	multimap<string, string>ershisanhuacicyhanzidict;
	ershisanhuacicyhanzidict.insert({ "二十三画次","矗" });


	ofstream file("二十三画次常用汉字.txt"); // 打开一个文件进行写入操作
	if (file.is_open()) { // 如果文件成功打开
		for (const auto& pair : ershisanhuacicyhanzidict) { // 遍历字典中的所有元素
			file << pair.first << " " << pair.second << endl; // 将键值对写入文件中
		}
		file.close(); // 关闭文件
		cout << "二十三画次常用汉字初始化成功" << endl;
	}
	else {
		std::cerr << "二十三画次常用汉字初始化失败" << endl;
	}
}
