all: pdf

pdf: intro mesh

intro:
	pdflatex introduction_cpp
	bibtex introduction_cpp
	pdflatex introduction_cpp
	pdflatex introduction_cpp

mesh:
	pdflatex openmesh
	bibtex openmesh
	pdflatex openmesh
	pdflatex openmesh

clean:
	rm -f *.aux *.log *.bbl *.blg *.toc *.lof *.lot *.out *.bcf *.xml *-blx.* *.snm *.nav *.vrb
	rm -f figures/*.aux head/*.log
	rm -f /tmp/.presentation*
