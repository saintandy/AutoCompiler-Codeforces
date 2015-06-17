
read round < .roundname

if [ $1 ] ; then
    problem=$1
else
    echo 'Invalid input: enter the round name as argv'
fi

problem="$(echo $problem | head -c 1)"

python3 ../parse.py $round $problem ; ./../run.sh $problem.cpp

