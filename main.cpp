#include <iostream>
#include <string>
using namespace std;

// �����ϵ�˵Ľṹ��

#define MAX 1000

struct Person
{
    string m_name;
    int m_Sex; // �Ա�  �У�1  Ů��2
    int m_Age;
    string m_Phone;
    string m_Addr;
};

// ���ͨѶ¼�Ľṹ��

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
        case 1: // �����ϵ��
            addPerson(&abs);
            break;
        case 2: // ��ʾ��ϵ��
            // showPerson(&abs);
            break;
        case 3: // ɾ����ϵ��
            break;
        case 4: // ������ϵ��
            break;
        case 5: // �޸���ϵ��
            break;
        case 6: // �����ϵ��
            break;
        case 0: // �˳�ͨѶ¼
            cout << "��ӭ�´�ʹ��" << endl;
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
    cout << "*****  1. �����ϵ��  *****" << endl;
    cout << "*****  2. ��ʾ��ϵ��  *****" << endl;
    cout << "*****  3. ɾ����ϵ��  *****" << endl;
    cout << "*****  4. ������ϵ��  *****" << endl;
    cout << "*****  5. �޸���ϵ��  *****" << endl;
    cout << "*****  6. �����ϵ��  *****" << endl;
    cout << "*****  0. �˳�ͨѶ¼  *****" << endl;
    cout << "***************************" << endl;
}

void addPerson(Addressbooks *abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "ͨѶ¼�������޷���ӣ�" << endl;
        return;
    }
    else
    {
        string name;
        cout << "������������" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_name = name;

        cout << "�������Ա�(1 -- ��, 2 -- Ů)��" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "�����������������룡" << endl;
        }

        cout << "���������䣺" << endl;
        int age = 0;
        cin >> age;
        while(true)
        {
            if(age>0 && age < 150)
            {
                abs->personArray[abs->m_Size].m_Age = age;
                break;
            }
            cout << "���������������������룡" << endl;
        }

        cout << "������绰���룺" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        
        cout << "�������ַ��" << endl;
        string addr;
        cin >> addr;
        abs->personArray[abs->m_Size].m_Addr = addr;

        cout << "��ӳɹ�" << endl;
        system("pause");
        system("cls");
    }
}