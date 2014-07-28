all: pdf

pdf:
	pdflatex introduction
	bibtex introduction
	pdflatex introduction
	pdflatex introduction

clean:
	rm -f *.aux *.log *.bbl *.blg *.toc *.lof *.lot *.out *.bcf *.xml *-blx.* *.snm *.nav *.vrb
	rm -f figures/*.aux head/*.log
	rm -f /tmp/.presentation*
