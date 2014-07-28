all: pdf

pdf:
	pdflatex report
	bibtex report
	pdflatex report
	pdflatex report
	pdflatex report

clean:
	rm -f *.aux *.log *.bbl *.blg *.toc *.lof *.lot *.out *.bcf *.xml *-blx.* *.snm *.nav
	rm -f figures/*.aux head/*.log
	rm -f /tmp/.presentation*
