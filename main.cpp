#include <iostream>
#include <cstdlib>
#include <clocale>
#include <windows.h>
#include <locale>
using namespace std;

int CM, M, DM, MM, KM;
int GRAM, KG, TONN, CENTN;

double num;

const double CMinMM = 0.1;
const double CMinDM = 10;
const double CMinKM = 1000;

const double KGinGRAMM = 0.001;
const double KGinCENTN = 100;
const double KGinTONN = 1000;


bool DistanceCM(double CMinMM ,double CMinDM, double CMinKM)
{



    cout << "������� ���������� � �����������:"<<endl;
    cout<<"����������:";
    cin>>CM;


    double distCMinMM=CM*CMinMM;
    double distCMinDM=CMinDM*CM;
    double distCMinKM=CMinKM*CM;



    cout << "����������:"<<endl;
    cout << "� �����������:"<<distCMinMM<<endl;
    cout << "� ����������:"<<distCMinDM<<endl;
    cout << "� ����������:"<<distCMinKM<<endl;

}
bool MassKG(double KGinGRAMM,double KGinCENTN, double KGinTONN)
{



    cout << "������� ����� � �����������:"<<endl;
    cout<<"����������:";
    cin>>KG;


    double distKGinGRAMM=KG*KGinGRAMM;
    double distKGinCENTN=KGinCENTN*KG;
    double distKGinTONN=KGinTONN*KG;


    cout << "����������:"<<endl;
    cout << "� �������:"<<distKGinGRAMM<<endl;
    cout << "� �����������:"<<KGinCENTN<<endl;
    cout << "� ������:"<<distKGinTONN<<endl;


}
void choosen(double MMinCM,double DMinCM, double KMinCM,double KGinGRAMM,double KGinCENTN, double KGinTONN)
{
   cout << "��� ����, ����� ��������� ����������: ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ������� 3"<<endl;
   while(1)
   {
      cin >> num;


   if(num == 1)
   {
     DistanceCM( MMinCM, DMinCM,  KMinCM);
   cout << "��� ����, ����� ��������� ����������: ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ������� 3"<<endl;
   }




    if(num == 2)
   {
     MassKG( KGinGRAMM, KGinCENTN,  KGinTONN);
   cout << "��� ����, ����� ��������� ����������: ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ������� 3"<<endl;
   }


    if(num == 3)
   {
    GenerateConsoleCtrlEvent(CTRL_BREAK_EVENT,0);
   }
   }










}
int main()
{
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

    system("chcp 1251>nul");
    choosen(  CMinMM,  CMinDM,   CMinKM,  KGinGRAMM,  KGinCENTN,   KGinTONN);





    system("pause>nul");
    return 0;
}

