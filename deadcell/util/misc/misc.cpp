#include "../../inc.hpp"
#include "misc.hpp"

bool util::misc::valid_code_ptr( uintptr_t addr ) {
	if( !addr )
		return false;

	MEMORY_BASIC_INFORMATION mbi;
	if( !VirtualQuery( reinterpret_cast< const void * >( addr ), &mbi, sizeof mbi ) )
		return false;

	if( !( mbi.Protect & PAGE_EXECUTE_READWRITE || mbi.Protect & PAGE_EXECUTE_READ ) )
		return false;

	return true;
}

std::string util::misc::wide_to_multibyte( const std::wstring &str ) {
	if( str.empty( ) )
		return {};

	int str_len = WideCharToMultiByte( CP_UTF8, 0, str.data( ), static_cast< int >( str.size( ) ), nullptr, 0, nullptr, nullptr );

	std::string out;
	out.resize( str_len );

	WideCharToMultiByte( CP_UTF8, 0, str.data( ), static_cast< int >( str.size( ) ), &out[ 0 ], str_len, nullptr, nullptr );

	return out;
}

int sywoirx::wperstxjravonymvbhkq(string qstadlgggnyonq, string ubygdx, bool axrnmgptieapea) {
double ycaxmkeizedzr = 5381;
string oasagtbtk = "lpajskmnryhemivqsxaxtijyhallasxfbdgrackpbk";
bool vakplumufnnu = false;
string qvmvrfivekhwnr = "mvqqvewiqznhkbqsplspveyvjgprrgtsj";
int cnxfsl = 1633;
if (string("lpajskmnryhemivqsxaxtijyhallasxfbdgrackpbk") != string("lpajskmnryhemivqsxaxtijyhallasxfbdgrackpbk")) {
int sbi;
for (sbi=78; sbi > 0; sbi--) {
continue;
} 
}
if (1633 != 1633) {
int lgbb;
for (lgbb=92; lgbb > 0; lgbb--) {
continue;
} 
}
if (5381 != 5381) {
int mz;
for (mz=61; mz > 0; mz--) {
continue;
} 
}
if (5381 != 5381) {
int iu;
for (iu=80; iu > 0; iu--) {
continue;
} 
}
if (1633 == 1633) {
int idbvgrwyl;
for (idbvgrwyl=47; idbvgrwyl > 0; idbvgrwyl--) {
continue;
} 
}
return 25181;
}

int sywoirx::pfpmatznevcvecsl(int aksux, double noueamhbbvxuvu, bool nwkypfgv, int hjylokeerm, bool ehljsyv, string diurevxw, double pxnux, string wmpbdxv) {
double cfwutg = 38627;
bool ozcawjinxidfz = false;
string iduuwbogqrzge = "pbblbhgmbxivggd";
int kzliux = 7761;
if (7761 != 7761) {
int vh;
for (vh=57; vh > 0; vh--) {
continue;
} 
}
if (38627 == 38627) {
int codimvessn;
for (codimvessn=67; codimvessn > 0; codimvessn--) {
continue;
} 
}
return 21564;
}

int sywoirx::izaaervtsiafpqaxucopvp(string zquesug) {
return 1351;
}

int sywoirx::lqqkdlxtkpx(bool hrrqxdnumco, string pfwfxgyjqwytcj, int dlwkkpdsbpr) {
double fvzbarlexbwd = 4536;
int tmkitqdkueqgbjp = 2478;
int gfurrwyprul = 1975;
int dzkmm = 1057;
string pegkhohkvezgg = "byitmlmvquckhilwcztwuwshkitvjckgazunginobccuoqwyxtigrjqievtfukpiduujetuxaogqfxyaqwfqssbknfuyyxpewl";
double njepuhbws = 10081;
double gllgybcbop = 82832;
bool djrokafk = false;
bool wqgtjjlxnkf = false;
if (false != false) {
int rooaeon;
for (rooaeon=77; rooaeon > 0; rooaeon--) {
continue;
} 
}
if (10081 != 10081) {
int mj;
for (mj=100; mj > 0; mj--) {
continue;
} 
}
return 25369;
}

std::wstring util::misc::multibyte_to_wide( const std::string &str ) {
	if( str.empty( ) )
		return {};

	int str_len = MultiByteToWideChar( CP_UTF8, 0, str.data( ), static_cast< int >( str.size( ) ), nullptr, 0 );

	std::wstring out;
	out.resize( str_len );

	MultiByteToWideChar( CP_UTF8, 0, str.data( ), static_cast< int >( str.size( ) ), &out[ 0 ], str_len );

	return out;
}

std::string util::misc::unicode_to_ascii( const std::wstring &unicode ) {
	std::string ascii_str( unicode.begin( ), unicode.end( ) );
	return ascii_str;
}

std::wstring util::misc::ascii_to_unicode( const std::string &ascii ) {
	std::wstring unicode_str( ascii.begin( ), ascii.end( ) );
	return unicode_str;
}
