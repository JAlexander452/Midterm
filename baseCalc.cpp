// This a calculator

#include <iostream>
#include<string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void displaymenu()  // The menu
{ cout<<"===================================================== \n";
cout<<" \t\tMENU \t \n ";
cout<<"===================================================== \n";
cout<<" 1.Convert Binary to Decimal \n";
cout<<" 2.Convert Decimal to Binary\n";
cout<<" 3.Convert HexaDecimal to Binary\n";
cout<<" 4.Convert Binary to hexidecimal\n";
cout<<" 5.Convert Octal to Binary\n";
cout<<" 6.Convert Binary to Octal\n";
}


//*********************************************************************************************************
void Binary() // binary to to decimal
{
	int n;
	cout << "Binary Number" << endl;
	cin >> n;
  int dec = 0, i = 0, rem;

  while (n!=0)    // calculation from Binary to Decimal
  {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
	
  }
	cout << "Heres the answer" << endl;  // Answer output
	cout << dec << endl;
	cout<< " #######################" << endl;
  return;

}
//*********************************************************************************************************
void Decimal() // Decimal to binary
{
	int n;
	cout << "Decimal" << endl;
	cin >> n;
 long long bin = 0;
  int rem, i = 1;

  while (n!=0) // calculation from Decimal to Binary
  {   
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }
	cout << "Heres the answer" << endl;  //Answer output
	cout <<bin<<endl;
	cout<< " #######################" << endl;
  return;
}

 //******************************************************************************************************
 void HexToBin()  // hex to binary
{
    long int i = 0;
	char hexdec[20];
	cout << " Enter a Hexidecimal Number" << endl;
	cin >> hexdec;
	cout << "\nEquivalent Binary value is : ";
 
    while (hexdec[i]) //hex to binary
	{
 
        switch (hexdec[i]) 
		{
        case '0':
            cout << "0000";
            break;
        case '1':
            cout << "0001";
            break;
        case '2':
            cout << "0010";
            break;
        case '3':
            cout << "0011";
            break;
        case '4':
            cout << "0100";
            break;
        case '5':
            cout << "0101";
            break;
        case '6':
            cout << "0110";
            break;
        case '7':
            cout << "0111";
            break;
        case '8':
            cout << "1000";
            break;
        case '9':
            cout << "1001";
            break;
        case 'A':
        case 'a':
            cout << "1010";
            break;
        case 'B':
        case 'b':
            cout << "1011";
            break;
        case 'C':
        case 'c':
            cout << "1100";
            break;
        case 'D':
        case 'd':
            cout << "1101";
            break;
        case 'E':
        case 'e':
            cout << "1110";
            break;
        case 'F':
        case 'f':
            cout << "1111";
            break;
        default:
            cout << "\nInvalid hexadecimal digit "
                 << hexdec[i];
        }
        i++;
		break;
    }
	cout << "\n******" << endl;
    //HexToBin(); // (hexdec)
return;
}
 //******************************************************************************************************
 void BinaryToHexaDec() // Binary to hex 
{
	int i=0;
	int bin;
	char hexDecNum[20];
    int hex=0, mul=1, chk=1, rem;
	int binaryNum;
    cout<<"Enter any Binary Number: ";
    cin>>binaryNum;
    //BinaryToHexaDec();
	
    while(bin!=0)
    {
        rem = bin%10;
        hex = hex + (rem*mul);
        if(chk%4==0)
        {
            if(hex<10)
                hexDecNum[i] = hex+48;
            else
                hexDecNum[i] = hex+55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        bin = bin/10;
    }
    if(chk!=1)
        hexDecNum[i] = hex+48;
    if(chk==1)
        i--;
	
	cout<<"\nEquivalent Value in Hexadecimal: ";
    for(i=i; i>=0; i--)
        cout<<hexDecNum[i];
    cout<<endl;
    return;
}
//******************************************************************************************************
string OctToBin()   // Octal to Binary
{
    long int i = 0;
	string octnum;
    string binary = "";
	
	cout << "Enter an Octal Number" << endl;
	cin >> octnum;
 
    while (octnum[i]) 
	{
        switch (octnum[i]) {
        case '0':
            binary += "000";
            break;
        case '1':
            binary += "001";
            break;
        case '2':
            binary += "010";
            break;
        case '3':
            binary += "011";
            break;
        case '4':
            binary += "100";
            break;
        case '5':
            binary += "101";
            break;
        case '6':
            binary += "110";
            break;
        case '7':
            binary += "111";
            break;
        default:
            cout << "\nInvalid Octal Digit "
                 << octnum[i];
            break;
        }
        i++;
		
		
    }
	cout << "Equivalent Binary Value = "
         << binary << endl; //(OctToBin())

 return binary;
}
//******************************************************************************************************
void BintoOct()  //Binary to octal
{
    int binnum1, binary, rem, decnum = 0, quot, i = 1, j;
    int octnum[100];
	cout << "Binary Number" << endl;
    cin>> binary;

    binnum1 = binary;
    while(binary > 0)
    {
        rem = binary % 10;
        decnum = decnum + rem * i;
        i = i * 2;
        binary = binary/10;
    }   
    i=1;
    quot = decnum;
    while(quot > 0)
    {
        octnum[i++] = quot % 8;
        quot = quot / 8;
    }

    cout<<" The equivalent octal value of " <<binnum1<< " is : ";
    for(j = i - 1; j > 0; j--)
        cout<<octnum[j] << endl;

    return ;
}

int main()
{ 
 
//string st[20];
int itemcount = 0;
 
//function to display Menu
 
displaymenu(); 
int yourchoice;
string confirm;
do
{ cout<<"\nEnter your choice(1 -6):";
cin>>yourchoice;
switch (yourchoice) // Mode choice
{
case 1: Binary(); 
break;
case 2: Decimal();
break;
case 3: HexToBin();
break;
case 4: BinaryToHexaDec();
break;
case 5: OctToBin();
break;
case 6: BintoOct();
break;
default: cout<<"invalid"; break;
}
cout<<"\nPress y or Y to Go again:";           // repeat comand
cin>>confirm;
} while (confirm == "y" || confirm == "Y");
return 0;
}