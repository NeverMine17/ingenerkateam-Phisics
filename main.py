import pint
ureg = pint.UnitRegistry()

in1 = input('Convert: ').split()
in2 = input('To unit: ')

print(str(ureg.convert(float(in1[0]), in1[1], in2)) + ' ' + in2)