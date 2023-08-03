import re

REQUIRED_ELEMENTS = 'H', 'C', 'N', 'O', 'P', 'Ca'

def best_planet(solar_system, max_size):
    print("max size: " + str(max_size))
    return get_best_size(get_suitable_planets(solar_system), max_size)

def get_suitable_planets(solar_system):
    elements = r'(?=.*H)(?=.*C)(?=.*N)(?=.*O)(?=.*P)(?=.*Ca)?[A-Za-z0-9_]*$'
    suitable_planets = []
    for planet in solar_system:
        if re.search(elements, planet):
            suitable_planets.append(planet)
    return suitable_planets

def get_best_size(suitable_planets, max_size):
    if suitable_planets:
        best_planet = suitable_planets[0]
        best_size = int(best_planet.split('_')[1])
        for planet in suitable_planets:
            print("planet: " )
            curr_size = int(planet.split('_')[1])
            print("current best planet: " + best_planet)
            if abs(max_size - curr_size) <= abs(best_size - curr_size):
                best_planet = planet
        if best_size > max_size:
            return ''
        else:
            return best_planet
    else:
        return ''
