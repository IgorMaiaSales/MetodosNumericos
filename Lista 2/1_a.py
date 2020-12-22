# 1.  Determine a raiz real da equação f(x) = 5x³ - 5x² + 6x - 2:
#
# (a) Graficamente
#
# Resposta: Aproximadamente 0.4.

import numpy as np
import matplotlib.pyplot as plt

x = np.arange(-5, 5, 0.1)
plt.plot(x, 5*x**3 - 5*x**2 + 6*x - 2)
plt.show()
