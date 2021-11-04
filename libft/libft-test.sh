@echo on

git clone https://github.com/alelievr/libft-unit-test.git
cd libft-unit-test
make fclean && make && ./run_test
cd ..
cd libft
git clone https://github.com/tripouille/libftTester
cd libftTester
make m
