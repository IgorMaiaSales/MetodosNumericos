# 2.  Determine a raiz real de 𝑓(𝑥) = −25 + 82𝑥 − 90𝑥^2 + 44𝑥^3 − 8𝑥^4 + 0,7𝑥^5:
#
# (a) Graficamente
#
# Resposta: Aproximadamente 0.6.

import numpy as np
import matplotlib.pyplot as plt

x = np.arange(-5, 2, 0.1)
plt.plot(x, -25 + 82*x - 90*x**2 + 44*x**3 - 8*x**4 + 0.7*x**5)
plt.show()
