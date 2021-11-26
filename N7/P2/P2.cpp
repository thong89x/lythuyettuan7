#include"HocSinh.h"

int main()
{
	HocSinh student;
	cout << "Nhap Hoc Sinh dau tien: " << endl;
	cin >> student;

	int key = -2;
	while (true)
	{
		system("cls");
		cout << "Hoc Sinh da nhap la : " << endl;
		cout << student;
		cout << "============================" << endl;
		while (!(key >= -1 && key < 4))
		{
			cout << "Menu (0->3) :" << endl;
			cout << "0.Khoi tao mang mac dinh." << endl;
			cout << "1.Copy Constructor." << endl;
			cout << "2.So sanh 2 HocSinh." << endl;
			cout << "3.Type casting char* HocSinh" << endl;
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
				HocSinh temp;
				student = temp;
				break;
			}
			case 1:
			{
				HocSinh temp;
				cin >> temp;
				HocSinh temp2(temp);
				student = temp2;
				break;
			}
			case 2:
			{
				HocSinh newstudent;
				cout << "Nhap hoc sinh thu 2: "<<endl;
				cin >> newstudent;
				cout << "====================================\n" << newstudent;
				cout << "a < b :"; if (student < newstudent) cout << "true\n"; else cout << "false\n";
				cout << "a > b :"; if (student > newstudent) cout << "true\n"; else cout << "false\n";
				cout << "a == b :"; if (student == newstudent) cout << "true\n"; else cout << "false\n";
				cout << "a != b :"; if (student != newstudent) cout << "true\n"; else cout << "false\n";
				cout << "a <= b :"; if (student <= newstudent) cout << "true\n"; else cout << "false\n";
				cout << "a >= b :"; if (student >= newstudent) cout << "true\n"; else cout << "false\n";
				break;
			}
			case 3:
			{
				char* c = (char*)student;
				cout << "Print poiter: " << c << endl;
				break;
			}
		}
		system("pause");
		key = -2;
	}

}
