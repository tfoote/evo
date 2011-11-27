output = presentation.pdf

program = ../src/evo.e
in = ../in

tests = 001.res 002.res 003.res 004.res 005.res

001.res: $(in)/001.in
	$(program) -r -i 5 < $< > $@

002.res: $(in)/002.in
	$(program) -r -i 5 < $< > $@

003.res: $(in)/003.in
	$(program) -r -i 5 < $< > $@

004.res: $(in)/004.in
	$(program) -e avg -i 500 < $< > $@

005.res: $(in)/005.in
	$(program) -e avg -i 500 < $< > $@

tests: $(tests)
clear_tests:
	rm -f $(tests)


graphs = 004.pdf 005.pdf
graphs: $(graphs)
clear_graphs:
	rm -f $(graphs)

%.pdf: %.res graph.gnuplot
	gnuplot graph.gnuplot < $< > tmp.eps
	epstopdf tmp.eps --outfile=$@
	rm tmp.eps

all: $(output)

$(output): presentation.tex $(tests) $(graphs)
	pdflatex presentation.tex

clear: clear_tests clear_graphs
	rm -f $(output) presentation.aux presentation.log presentation.nav presentation.out presentation.snm presentation.toc