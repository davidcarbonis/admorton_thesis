#!/bin/tcsh
############################
# Compile the latex to pdf #
############################

pdflatex admorton_thesis.tex
bibtex admorton_thesis
pdflatex admorton_thesis.tex
pdflatex admorton_thesis.tex

exit
