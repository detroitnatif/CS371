# ---
# jupyter:
#   jupytext:
#     cell_markers: '"""'
#     text_representation:
#       extension: .py
#       format_name: percent
#       format_version: '1.3'
#       jupytext_version: 1.16.4
#   kernelspec:
#     display_name: Python 3 (ipykernel)
#     language: python
#     name: python3
# ---

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
r"""
<style>
    @media print{
        body {
            position:relative !important;
        }
        .celltag_new_page {
            page-break-before: always !important;
        }
    }
</style>
<div hidden>
    $$
    \newcommand{\reals}{\mathbb{R}}
    \newcommand{\naturals}{\mathbb{N}}
    \newcommand{\integers}{\mathbb{Z}}
    \newcommand{\prob}{\mathbb{P}}
    \newcommand{\expect}{\mathbb{E}}
    \newcommand{\b}[1]{\mathbf{#1}}
    \newcommand{\bs}[1]{\boldsymbol{#1}}
    \newcommand{\c}[1]{\mathcal{#1}}
    \newcommand{mat}[2]{\left[\,\begin{array}{#1}#2\end{array}\,\right]}
    $$
</div>
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
# COMPSCI 371 Homework 0
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["T"]
"""
_**Group Members:**_
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AT"]
"""
### Problem 0 (3 points)
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
## Part 1: Linear Algebra 
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
### Problem 1.1
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
### Problem 1.2
"""

# %%

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
### Problem 1.3
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
### Problem 1.4
"""

# %% editable=true slideshow={"slide_type": ""} tags=["AST", "hide-input"]
import urllib.request
import ssl
from os import path as osp
import shutil


def retrieve(file_name, semester='fall24', homework=0):
    if osp.exists(file_name):
        print('Using previously downloaded file {}'.format(file_name))
    else:
        context = ssl._create_unverified_context()
        fmt = 'https://www2.cs.duke.edu/courses/{}/compsci371/homework/{}/{}'
        url = fmt.format(semester, homework, file_name)
        with urllib.request.urlopen(url, context=context) as response:
            with open(file_name, 'wb') as file:
                shutil.copyfileobj(response, file)
        print('Downloaded file {}'.format(file_name))


# %% editable=true slideshow={"slide_type": ""} tags=["AST"]
import pickle

# retrieve is defined in a hidden cell
file_name = 'points.pkl'
retrieve(file_name)
with open(file_name, 'rb') as file:
    t = pickle.load(file)

# %%
import numpy as np
import math
def create_mat(x, q):
    n = len(x)
    m = 2*q + 1
    a = []
    for i in range(n):
        a.append([0] * m)
    a = np.array(a)
    a[:, 0] = 1
    
    return a


# %%

def fit(x, y, q):
    A = create_mat(x, q)
    for k in range(1, q):
        A[:, k] = np.cos(2*math.pi * k * x)
    for k in range(q, 2*q + 1):
        A[:, k] = np.sin(2 * np.pi * (k - q) * x) 
    c = np.linalg.lstsq(A, y)
    
    return c


# %%

for q in range(5):
    fit(t.x, t.y, q)

import matplotlib.pyplot as plt

plt.figure(figsize=(10, 6))

plt.scatter(t.x, t.y)

plt.legend()
plt.show()


# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
## Part 2: Probability
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
### Problem 2.1
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
### Problem 2.2
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
### Problem 2.3
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
## Part 3: Geometry
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
### Problem 3.1
"""

# %% editable=true slideshow={"slide_type": ""} tags=["AST"]
# retrieve is defined in a hidden cell
file_name = 'lines.pkl'
retrieve(file_name)
with open(file_name, 'rb') as file:
    lines = pickle.load(file)

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
## Part 4: Calculus
"""

# %% [markdown] editable=true slideshow={"slide_type": ""} tags=["AST"]
"""
### Problem 4.1
"""
