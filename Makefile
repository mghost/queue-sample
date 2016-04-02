n=node
nc=$(n).cpp
nh=$(n).h
no=$(n).o
q=queue
qc=$(q).cpp
qh=$(q).h
qo=$(q).o
m=main
mc=$(m).cpp

run: compile_main
	./$(m)

compile_main: compile_queue $(mc)
	g++ -o $(m) $(mc) $(qo) $(no)

compile_queue: compile_node $(qc) $(qh)
	g++ -o $(qo) -c $(qc) $(no)

compile_node: $(nc) $(nh)
	g++ -o $(no) -c $(nc)

