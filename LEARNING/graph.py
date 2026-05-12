import sympy

# Define real and imaginary parts of z1 and z2
x1, y1 = sympy.symbols('x1 y1', real=True)
x2, y2 = sympy.symbols('x2 y2', real=True)

# Define complex numbers
z1 = x1 + sympy.I * y1
z2 = x2 + sympy.I * y2

# Calculate z1 - z2
diff = z1 - z2

# Calculate the magnitude (modulus) of z1 - z2
# |z1 - z2| = sqrt((x1-x2)^2 + (y1-y2)^2)
magnitude_diff = sympy.Abs(diff)

print(f"z1 - z2 = {diff}")
print(f"Magnitude |z1 - z2| = {magnitude_diff}")
