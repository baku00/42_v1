@echo on
cd libft
echo "====================="
echo "     make"
echo "====================="
make
echo "====================="
echo "     make re"
echo "====================="
make re
echo "====================="
echo "     make libft.a"
echo "====================="
make libft.a
echo "====================="
echo "     make clean"
echo "====================="
make clean
echo "====================="
echo "     make fclean"
echo "====================="
make fclean
echo "====================="
echo "     make"
echo "====================="
make
echo "====================="
echo "     make fclean"
echo "====================="
make fclean
norminette
norminette -RCheckDefine libft.h
pwd
#cd ..
#git clone https://github.com/alelievr/libft-unit-test.git
#cd libft-unit-test
#make fclean && make && ./run_test
#cd ..
#cd libft
#git clone https://github.com/tripouille/libftTester
#cd libftTester
#make m
