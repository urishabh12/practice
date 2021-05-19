read filename
val=".cpp"
filename="${filename}${val}"
echo "${filename}"
if test -f "$filename"; then
	vi ${filename}
	break
fi
cp template.cpp ${filename}
vi ${filename}
