
clean:
	@rm -rf cmake-build-debug && mkdir -p cmake-build-debug
build:
	@cd cmake-build-debug && cmake .. && make -j4 && cd ..
run:
	@./cmake-build-debug/bin/Linux/awesome

