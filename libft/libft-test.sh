@echo on

git clone https://github.com/alelievr/libft-unit-test.git
cd libft-unit-test
make fclean && make && ./run_test strlcat
cd ..
cd libft
git clone https://github.com/ska42/libft-war-machine.git
cd libft-war-machine
bash grademe.sh strlcat
bash grademe.sh strlcat
cd ..
git clone https://github.com/tripouille/libftTester
cd libftTester
make strlcat
