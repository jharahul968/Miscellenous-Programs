
import numpy as np
from scipy.interpolate import make_interp_spline
import matplotlib.pyplot as plt

x = np.array([0,0.2,0.3,0.55,0.56,0.59,0.61,0.64,0.67,0.68,0.7,0.72,0.73])
y = np.array([0,0,0,0.16,0.26,0.58,1.01,2,4.01,6.05,10.2,15.1,19.4])



# plot simple line graph
# plt.plot(x,y)



# plot smooth curve

X_Y_Spline = make_interp_spline(x, y)
 
# Returns evenly spaced numbers
# over a specified interval.
X_ = np.linspace(x.min(), x.max(), 500)
Y_ = X_Y_Spline(X_)
 

plt.plot(X_, Y_, "y")

 

plt.xlabel("Zener Voltage (V)")
plt.ylabel("Zener Current (mA)")
plt.title("Graph of V vs I for Zener Diode")



plt.axvline(0, color="black")
plt.axhline(0, color="black")

plt.grid(True)


plt.show()