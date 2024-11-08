
mfbvar
======

Overview
--------

The original `mfbvar` package implements Bayesian mixed-frequency VAR models. \
This fork fixes some bugs and implements some improvements: 
1. Changed ```optim.method``` from "BFGS" to "L-BFGS-B" for more stable estimation of residuals in individual series AR models that are used to estimate prior variances. Fixed in CSV and FSV variance types. (Dealing with "Too low order" issue).
2. Now it is possible to use series with changing frequency. Earlier this option was broken when estimating the prior variances step.
3. Now MINN FSV model outputs real inits and not the n_reps/n_thin draw.


Installation
------------

The current development version of the package can be installed with the help of `devtools`:

``` r
devtools::install_github("zyablitskiy/mfbvar")
```

