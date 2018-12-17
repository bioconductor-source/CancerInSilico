# CancerInSilico

[![Bioc](https://bioconductor.org/images/logo_bioconductor.gif)](https://bioconductor.org/packages/CancerInSilico)

The CancerInSilico package provides an R interface for running mathematical models of tumor progresson. This package has the underlying models implemented in C++ and the output and analysis features implemented in R.

# Installing CancerInSilico

*CancerInSilico* is a bioconductor R package and so the release version can
be installed as follows:

```
source("https://bioconductor.org/biocLite.R")
biocLite("CancerInSilico")
```

The most up-to-date version of *CancerInSilico* can be installed directly from
the *FertigLab* Github Repository:

```
## Method 1 using biocLite
biocLite("FertigLab/CancerInSilico", dependencies = TRUE, build_vignettes = TRUE)

## Method 2 using devtools package
devtools::install_github("FertigLab/CancerInSilico")
```
# Using CancerInSilico

Follow the vignette here: http://htmlpreview.github.io/?https://github.com/FertigLab/CancerInSilico/blob/master/vignettes/CancerInSilico.html