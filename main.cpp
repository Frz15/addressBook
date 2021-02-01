#include <iostream>
#include <string>
using namespace std;

// 设计联系人的结构体

#define MAX 1000

struct Person
{
    string m_name;
    int m_Sex; // 性别  男：1  女：2
    int m_Age;
    string m_Phone;
    string m_Addr;
};

// 设计通讯录的结构体

struct Addressbooks
{
    struct Person personArray[MAX];
    int m_Size;
};

void showMenu();
void addPerson(Addressbooks *abs);

int main()
{

    Addressbooks abs;
    abs.m_Size = 0;
    int select = 0;

    while (true)
    {
        showMenu();

        cin >> select;

        switch (select)
        {
        case 1: // 添加联系人
            addPerson(&abs);
            break;
        case 2: // 显示联系人
            // showPerson(&abs);
            break;
        case 3: // 删除联系人
            break;
        case 4: // 查找联系人
            break;
        case 5: // 修改联系人
            break;
        case 6: // 清空联系人
            break;
        case 0: // 退出通讯录
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }

    system("pause");
    return 0;
}

void showMenu()
{

    cout << "***************************" << endl;
    cout << "*****  1. 添加联系人  *****" << endl;
    cout << "*****  2. 显示联系人  *****" << endl;
    cout << "*****  3. 删除联系人  *****" << endl;
    cout << "*****  4. 查找联系人  *****" << endl;
    cout << "*****  5. 修改联系人  *****" << endl;
    cout << "*****  6. 清空联系人  *****" << endl;
    cout << "*****  0. 退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

void addPerson(Addressbooks *abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满，无法添加！" << endl;
        return;
    }
    else
    {
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_name = name;

        cout << "请输入性别(1 -- 男, 2 -- 女)：" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入！" << endl;
        }

        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        while(true)
        {
            if(age>0 && age < 150)
            {
                abs->personArray[abs->m_Size].m_Age = age;
                break;
            }
            cout << "输入年龄有误，请重新输入！" << endl;
        }

        cout << "请输入电话号码：" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        
        cout << "请输入地址：" << endl;
        string addr;
        cin >> addr;
        abs->personArray[abs->m_Size].m_Addr = addr;

        cout << "添加成功" << endl;
        system("pause");
        system("cls");
    }
}