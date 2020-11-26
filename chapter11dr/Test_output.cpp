#include "../std_lib_facilities.h"

inline ios_base& general(ios_base& b)
{
	b.setf(ios_base::fmtflags(0), ios_base::floatfield);
	return b;
}

int main(){
	
int birth_year = 1999;

cout << showbase << birth_year << "\t(decimal)\n" 
	<< hex << birth_year << "\t(hexadecimal)\n"
	<< oct << birth_year << "\t(octal)\n";

cout << dec << birth_year << "\t(decimal again)\n";

int a, b, c, d;

cin >> a >> oct >> b >> hex >> c >> d;
cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';	//input is in dec, oct and hex respectively, but output is in dec

cout << general << 1234.567 << '\n'
	<< fixed << 1234.567 << '\n'
	<< scientific << 1234.567 << '\n' << general;

 cout << '|' << setw(10) << "Zoltan" << '|' << setw(10) << "Varga" 
        << '|' << setw(19) << "(30) 111 2222"
        << '|' << setw(26) << "varga.zoltan99@t-online.hu" << "|\n"
 	<< '|' << setw(10) << "Sandor" << '|' << setw(10) << "Nagy"
        << '|' << setw(19) << "(30) 111 2222"
        << '|' << setw(26) << "sandor.nagy@gmail.com" << "|\n"
    << '|' << setw(10) << "Tamas" << '|' << setw(10) << "Kiraly" 
        << '|' << setw(19) << "(30) 111 2222"
        << '|' << setw(26) << "tamas.kiraly@gmail.com" << "|\n"
    << '|' << setw(10) << "Bela" << '|' << setw(10) << "Arvai" 
        << '|' << setw(19) << "(30) 111 2222"
        << '|' << setw(26) << "bela.arvai@gmail.com" << "|\n"
	<< '|' << setw(10) << "David" << '|' << setw(10) << "Nagy"
        << '|' << setw(19) << "(30) 111 2222"
        << '|' << setw(26) << "david.nagy@gmail.com" << "|\n";

return 0;	
}
