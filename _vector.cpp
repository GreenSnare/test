#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (size_t i = 0; i < 5; i++)
    {
        v.push_back(i);//添加元素
    }
    cout << v.size() << endl;//大小
    cout << v.capacity() << endl;//容量
    v.insert(v.begin()+2, 100);//插入元素
    v.pop_back();//删除最后一个元素
    v.erase(v.begin()+2);//删除指定位置的元素
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";//遍历
    }
    cout << endl;
    for(auto i : v)
    {
        cout << i << " ";//遍历
    }
    cout << endl;
    if(!v.empty())//判断是否为空
    {
        cout << "not empty" << endl;
        v.clear();//清空
    }
    return 0;
}