class Accumul
{
public:
    static std::string accum(const std::string &s){
    int length = s.length();
    std::string newString;
    for(int i = 0; i < length; i++){
      char current = s[i];
      newString += toupper(current);
      for(int j = 1; j < i+1; j++){
        newString += tolower(current);
      }
      (i != (length - 1)) ? newString += '-' : newString += "";
  }
  
  return newString;
  }
};
