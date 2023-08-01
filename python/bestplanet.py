REQUIRED_ELEMENTS = 'H', 'C', 'N', 'O', 'P', 'Ca'

def best_planet(solar_system, max_size):
    elements = ''.join(str(element) for element in REQUIRED_ELEMENTS)
    print(elements)
    suitable_planets = get_suitable_planets(solar_system, elements)
    best_planet = get_best_size(suitable_planets, max_size)
    return best_planet

def get_suitable_planets(solar_system, elements):
    suitable_planets = []
    for planet in solar_system:
        # replace this with a regex
        if elements in planet:
            suitable_planets.append(planet)
    return suitable_planets

def get_best_size(suitable_planets, max_size):
    best_planet = suitable_planets[0]
    best_size = int(best_planet.split('_')[1])
    for planet in suitable_planets:
        size = int(planet.split('_')[1])
        if abs(max_size - size) < abs(max_size - size):
            best_planet = planet
    return best_planet
        

solar_system = ['OHNCCaP_100', 'OHC_200', 'OCa_50', 'OHCCaP_400', 'OHNCCaP_225']
best_planet(solar_system, 225)

