REQUIRED_ELEMENTS = 'H', 'C', 'N', 'O', 'P', 'Ca'

def best_planet(solar_system, max_size):
    elements = ''.join(str(element) for element in REQUIRED_ELEMENTS)
    print(elements)
    suitable_planets = []
    for planet in solar_system:
        if elements in planet:
            suitable_planets.append(planet)
    return 0

solar_system = ['OHNCCaP_100', 'OHC_200', 'OCa_50', 'OHCCaP_400', 'OHNCCaP_225']
best_planet(solar_system, 225)

