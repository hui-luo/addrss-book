#include<iostream>
#include<string>

using namespace std;

struct person
{
    string name;                 //姓名
    int phone[11];               //电话号码
    string adress;               //住址
    person *next;
};

void showmenu ();                //显示菜单
person * addperson (person *head);//添加联系人
void show_adress_book (person *head);//显示联系人
void delete_person (person *head); //删除联系人
void search_person (person *head);  //查找联系人
void modification (person *head);   //修改联系人
void destory_person (person *head);   //清空联系人

int main ()
{
    int choose;
    while (true)
    {
        showmenu();
        cin >> choose;
        switch (choose)
        {
        case 1:
            break;
        case 2:
            break;       
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 0:return 0;
            break;
        default:return 0;
            break;
        }
    }
    
    

}
void showmenu ()
{
    cout << "*******************"  << endl;
    cout << "***1、添加联系人***"  << endl;
    cout << "***2、显示联系人***"  << endl;
    cout << "***3、删除联系人***"  << endl;
    cout << "***4、查找联系人***"  << endl;
    cout << "***5、修改联系人***"  << endl;
    cout << "***6、清空联系人***"  << endl;
    cout << "*******************"  << endl;  
}