input_dir="Inputs/"

for input_file in "$input_dir"/*; do
  echo "Running Warui with $input_file"
  ./Warui <"$input_file"

done

echo "All Runs Done, Can Now Run 'gcov -r Warui.cc'"
