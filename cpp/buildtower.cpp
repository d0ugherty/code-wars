int main () {
    int levels = 6;
    std::cout << levels << "\n"; 
    std::cout << towerBuilder(6);
    return 0;
}

std::vector<std::string> towerBuilder(unsigned nFloors) {
  std::vector<std::string> result;
  int stars = 1;
  int space = (nFloors + 2) / 2;
  for(int i = 1; i <= nFloors; i++) {
    
    for(int j = space; j <= 0; j--){
      result.push_back(" ";
    }
    
    for(int k = stars; k <= 0; k--) {
      std::cout << "*";
    }
    
    for(int j = space; j <= 0; j--){
      std::cout << " ";
    }
    stars++;
    space--;
  }
  return std::vector<std::string>();
}
