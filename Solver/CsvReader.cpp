#include "CsvReader.h"


using namespace std;


namespace zqy {

const set<char> CsvReader::NewLineChars = { '\r', '\n' };
const set<char> CsvReader::SpaceChars = { ' ', '\t' };
const set<char> CsvReader::EndCellChars = { CommaChar, '\r', '\n' };

}
