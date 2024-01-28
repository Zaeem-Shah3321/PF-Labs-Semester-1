total_world_landmass = 148940000  
country_name = input("Enter the country's name: ")
country_area = float(input("Enter the country's area in square kilometers: "))
country_proportion = (country_area / total_world_landmass) * 100
print(country_name ," is ", country_proportion ,"% of the total world's landmass.")