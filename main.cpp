#include <iostream>
#include <cstdlib>
#include <clocale>
#include <windows.h>
#include <locale>

using namespace std;

int CM, M, DM, MM, KM;
int GRAM, KG, TONN, CENTN;

double num;

const double CMinMM = 10;
const double CMinM = 0.01;
const double CMinKM = 0.001;

const double KGinGRAMM = 1000;
const double KGinCENTN = 0.01;
const double KGinTONN = 0.001;


bool DistanceCM(double CMinMM ,double CMinDM, double CMinKM)
{



    cout << "������� ���������� � �����������:"<<endl;
    cout<<"����������:";
    cin>>CM;


    double distCMinMM=CM*CMinMM;
    double distCMinM=CMinM*CM;
    double distCMinKM=CMinKM*CM;



    cout << "����������:"<<endl;
    cout << "� �����������:"<<distCMinMM<<endl;
    cout << "� ������:"<<distCMinM<<endl;
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
    cout << "� ���������::"<<distKGinCENTN<<endl;
    cout << "� ������:"<<distKGinTONN<<endl;


}
void choosen(double CMinMM,double CMinM, double CMinKM,double KGinGRAMM,double KGinCENTN, double KGinTONN)
{
   cout << "��� ����, ����� ��������� ����������: ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ������� 3"<<endl;
   while(1)
   {
      cin >> num;


   if(num == 1)
   {
     DistanceCM( CMinMM, CMinM,  CMinKM);
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
    choosen(CMinMM,  CMinM,   CMinKM,  KGinGRAMM,  KGinCENTN,   KGinTONN);



    system("pause>nul");
    return 0;
}

