#include <iostream>
#include<Windows.h>

using namespace std;

int main()
{
	int minichoose = 0;
	int i = 0;

	for (int nul = 0;nul < 100;nul++)
	{
		cout << "接下来请按照提示操作" << endl;
		cout << "特别提醒，如要使用2功能，请将图片和压缩包放置在此exe的目录下" << endl;
		Sleep(1200);

		cout << "图片为.jpg格式请选1" << endl << "图片为.png格式请选2" << endl;
		cout << "更改想要用来做封面的图片名为a" << endl;
		cout << "更改想捆绑的压缩包名字为b" << endl;
		cout << "*注意：压缩包格式控制为.zip" << endl;
		cin >> minichoose;

		if (minichoose == 1)
		{
			system("copy /b a.jpg+b.zip lucky.jpg");
			cout << "程序已经运行完毕，如果想退出请输入99退出循环，暂时不想退出则输入0" << endl;
			cin >> nul;

			if (nul == 99)
			{
				return 0;
			}

		}
		if (minichoose == 2)
		{
			system("copy /b a.png+b.zip lucky.png");
			cout << "程序已经运行完毕，如果想退出请输入99退出循环，暂时不想退出则输入0" << endl;
			cin >> nul;

			if (nul == 99)
			{
				return 0;
			}

		}
	}
}

