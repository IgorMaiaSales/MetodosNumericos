# 3.  Localize a primeira raiz não-trivial de 𝑠𝑒𝑛 𝑥 = 𝑥^3, onde x está em radianos.
#
# (a) Graficamente
#
# Resposta: Aproximadamente 0.4.

import numpy as np
import matplotlib.pyplot as plt
import math

x = np.arange(-5, 2, 0.1)
plt.plot(x, x**3 - math.sin(x))
plt.show()
