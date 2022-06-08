echo "TEST1_________________________"
./s21_cat s21_cat.c >> s21_cat.txt
cat s21_cat.c >> cat.txt
diff -s s21_cat.txt cat.txt
echo "TEST 1 DONE___________________"
rm s21_cat.txt cat.txt

echo "TEST2_________________________"
./s21_cat -b s21_cat.c >> s21_cat.txt
cat -b s21_cat.c >> cat.txt
diff -s s21_cat.txt cat.txt
rm s21_cat.txt cat.txt
echo "TEST 2 DONE___________________"

echo "TEST1_________________________"
./s21_cat -e s21_cat.c >> s21_cat.txt
cat -e s21_cat.c >> cat.txt
diff -s s21_cat.txt cat.txt
rm s21_cat.txt cat.txt
echo "TEST 3 DONE___________________"

echo "TEST1_________________________"
./s21_cat -n s21_cat.c >> s21_cat.txt
cat -n s21_cat.c >> cat.txt
diff -s s21_cat.txt cat.txt
rm s21_cat.txt cat.txt
echo "TEST 4 DONE___________________"

echo "TEST1_________________________"
./s21_cat -s s21_cat.c >> s21_cat.txt
cat -s s21_cat.c >> cat.txt
diff -s s21_cat.txt cat.txt
rm s21_cat.txt cat.txt
echo "TEST 5 DONE___________________"

echo "TEST1_________________________"
./s21_cat -t s21_cat.c >> s21_cat.txt
cat -t s21_cat.c >> cat.txt
diff -s s21_cat.txt cat.txt
rm s21_cat.txt cat.txt
echo "TEST 6 DONE___________________"

echo "TEST1_________________________"
./s21_cat -v s21_cat.c >> s21_cat.txt
cat -v s21_cat.c >> cat.txt
diff -s s21_cat.txt cat.txt
rm s21_cat.txt cat.txt
echo "TEST 7 DONE___________________"