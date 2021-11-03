@echo on

git clone https://github.com/alelievr/libft-unit-test.git
cd libft-unit-test
make fclean && make && ./run_test
cd ..
cd libft
git clone https://github.com/ska42/libft-war-machine.git
cd libft-war-machine
bash grademe.sh
bash grademe.sh
cd ..
git clone https://github.com/tripouille/libftTester
cd libftTester
make m
