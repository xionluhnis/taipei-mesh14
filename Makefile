all: pdf

pdf:
	pdflatex introduction_cpp
	bibtex introduction_cpp
	pdflatex introduction_cpp
	pdflatex introduction_cpp

clean:
	rm -f *.aux *.log *.bbl *.blg *.toc *.lof *.lot *.out *.bcf *.xml *-blx.* *.snm *.nav *.vrb
	rm -f figures/*.aux head/*.log
	rm -f /tmp/.presentation*
