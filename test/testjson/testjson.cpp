#include"json.hpp"
using json = nlohmann::json;

#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

//json序列化实例1
void fun1()
{
    json js;
    js["x_1"] = "woshini";
    js["x_2"] = "nibaba";
    string send = js.dump();
    cout<<js<<endl;
    cout<<send<<endl;
}
string fun2()
{
    json j;
    j["a"] = {1,2,3,4,5};
    j["name"] = "zhangsan";
    j["asd"] = {{"123","456"},{"567","890"}};
    j["b"] = "czx";
    cout<<j<<endl;
    return j.dump();
}
int main()
{
    string buf = fun2();
    json jss = json::parse(buf);
    cout<<jss["a"]<<endl;
    return 0;
}