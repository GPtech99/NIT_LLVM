
#make sure the NIT_DIR is defined before compiling
export NIT_DIR=/home/ouajdi/Desktop/nit

clear
echo "***********************************************"
echo "Compile"
$NIT_DIR/bin/nitc ./nitllvm.nit --nit-dir $NIT_DIR -I $NIT_DIR/src -o ./bin/nitllvm
echo "***********************************************"
echo " 	♪┏(°.°)┛┗(°.°)┓┗(°.°)┛┏(°.°)┓ ♪ "
echo " 	♪       ┗(°.°)┓┗(°.°)┛        ♪ "
echo " 	♪          ┏(°.°)┓            ♪ "
echo "***********************************************"
echo "Execute"
./bin/nitllvm ./base_simple.nit
#./bin/nitllvm ./test.nit
echo "***********************************************"
