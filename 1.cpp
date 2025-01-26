#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{

  //bool menu = true;
  system("chcp 1251>NULL");

  cout << ("1. Открыть файл") << endl;
  cout << ("2. Изменить файл") << endl;

  int nm;

  cin >> nm;

  switch(nm)
 {
	case 1: cout << ("Введите название файла") << endl;break;
	case 2: cout << ("Введите название файла") << endl;break;
 }

  if(nm=1)
  {
	int file;
	cin >> file;
	FILE* weat;
	weat = fopen("file","r");
	if(weat==NULL)
	{  printf("Ошибка!\n");
	   return;
	}


	  fclose(inp);
  }
  system("pause");


  return 0;
}
