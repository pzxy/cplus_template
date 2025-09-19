
clean:
	@rm -rf build && mkdir -p build
build2:
	@mkdir -p build && cd build && cmake -DCMAKE_BUILD_TYPE=Debug -G Ninja .. && ninja -j4 && cd ..
run:
	@./build/bin/awesome
buildtest:
	@mkdir -p build && cd build && cmake -DCMAKE_BUILD_TYPE=Debug -DWITH_TESTS=ON -G Ninja .. && ninja -j4 && cd ..




