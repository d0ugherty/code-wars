#include <iostream>
#include <vector>

std::vector<std::string> splitString(const std::string& planet, char delim);
std::string bestPlanet(const std::vector<std::string>& solaySystem, int maxSize);

static const std::vector<std::string> RQUIRED_ELEMENTS { "H", "C", "N", "O", "P", "Ca" };

int main() {
    std::vector<std::string>& solarSystem = {"OHNCCaP_100", "OHC_200", "OCa_50", "OHCCaP_400", "OHNCCaP_225"};
    std::string result = bestPlanet(solarSystem, 250);

    std::cout << result;
    return 0;

}

std::string bestPlanet(const std::vector<std::string>& solarSystem, int maxSize)
{
  
  //check if planet has all elements
  for(std::string& planet : solarSystem) {
    std::vector<std::string> planetString = splitString(planet,_);
  }
  return "";
}

std::vector<std::string> splitString(const std::string& planet, char delim) {
    std::vector<std::string> result;
    std::istringstream iss(planet);
    std::string token;
    while(std::getline(iss, token, delim)) {
        result.push_back(token);
    }
    return result;
}
