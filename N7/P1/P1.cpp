

#include "Array.h"

int main()
{

	Array a;
	cout << "Nhap mang: " << endl;
	cin >> a;

	int key = -2;
	while (true)
	{
		system("cls");
		cout << "ARRAY da nhap la : ";
		cout << a;
		while (!(key >= -1 && key < 5))
		{
			cout << "Menu (0->4) :" << endl;
			cout << "0.Khoi tao mang mac dinh." << endl;
			cout << "1.Khoi tao mang with size." << endl;
			cout << "2.Khoi tao mang with int [] va size." << endl;
			cout << "3.Copy Constructor." << endl;
			cout << "4.Type casting int* array" << endl;
			cout << "-1 to quit program" << endl;
			cout << "Nhap lua chon: ";
			cin >> key;
			cin.ignore();
		}
		if (key == -1)	return 0;
		switch (key)
		{
		case 0:
		{
			Array b;
			a = b;
			break;
		}
		case 1:
		{
			int n;
			cout << "Input size :";
			cin >> n;
			Array b(n);
			a = b;
			break;
		}
		case 2:
		{
			int n;
			cout << "Input size :";
			cin >> n;
			int* arr = new int[n];
			cout << "Nhap mang: " << endl;
			for (int i = 0; i < n; i++)
			{
				cin >> arr[i];
			}
			Array b(arr, n);
			a = b;
			break;
		}
		case 3:
		{
			Array b;
			cout << "Input Array b: " << endl;
			cin >> b;
			Array c(b);
			a = c;
			break;
		}
		case 4:
			int* p = (int* )a;
			cout << "Type casting array: " <<p[1] << endl;
			break;
		}
		system("pause");

		key = -2;
	}

}

