#include "不理解时候使用.h"


using 答案之书吧dict = map<string, string>;

void 不理解直接抄袭答案(string str, 答案之书吧dict  答案之书dict) {
	答案之书dict["你"] = "第二人称代词，和我说话的人";
	答案之书dict["我"] = "第一人称代词，说话的人";
	答案之书dict["他"] = "第三人称，你和我之外的人";
	答案之书dict["她"] = "第三人称，你和我之外的女人";
	答案之书dict["它"] = "第三人称，你和我之外的事情或者物";

	

	auto it = 答案之书dict.find(str);
	if (it != 答案之书dict.end()) {
		
		if (str == it->first) {

			it->second;
		
		}		
	}
}
