
./s21_grep e tmp_test_file.txt > s21_grep.txt
grep e tmp_test_file.txt > grep.txt
diff -s s21_grep.txt grep.txt
rm s21_grep.txt grep.txt

./s21_grep -e "for" tmp_test_file.txt > s21_grep.txt
grep -e "for" tmp_test_file.txt > grep.txt
diff -s s21_grep.txt grep.txt
rm s21_grep.txt grep.txt

./s21_grep -i e tmp_test_file.txt -n > s21_grep.txt
grep -i -n e tmp_test_file.txt -n > grep.txt
diff -s s21_grep.txt grep.txt
rm s21_grep.txt grep.txt

./s21_grep -v e tmp_test_file.txt > s21_grep.txt
grep -v e tmp_test_file.txt > grep.txt
diff -s s21_grep.txt grep.txt
rm s21_grep.txt grep.txt

./s21_grep -c e tmp_test_file.txt > s21_grep.txt
grep -c e tmp_test_file.txt > grep.txt
diff -s s21_grep.txt grep.txt
rm s21_grep.txt grep.txt

./s21_grep -l e tmp_test_file.txt tmp_test_file.txt tmp_test_file.txt > s21_grep.txt
grep -l e tmp_test_file.txt tmp_test_file.txt tmp_test_file.txt > grep.txt
diff -s s21_grep.txt grep.txt
rm s21_grep.txt grep.txt

./s21_grep -n e tmp_test_file.txt > s21_grep.txt
grep -n e tmp_test_file.txt > grep.txt
diff -s s21_grep.txt grep.txt
rm s21_grep.txt grep.txt

#./s21_grep -h e tmp_test_file.txt > s21_grep.txt
#grep -h e tmp_test_file.txt > grep.txt
#diff -s s21_grep.txt grep.txt
#rm s21_grep.txt grep.txt
#
#./s21_grep -s e tmp_test_file.txt > s21_grep.txt
#grep -s e tmp_test_file.txt > grep.txt
#diff -s s21_grep.txt grep.txt
#rm s21_grep.txt grep.txt
#
#./s21_grep -f pattern tmp_test_file.txt > s21_grep.txt
#grep -f pattern tmp_test_file.txt > grep.txt
#diff -s s21_grep.txt grep.txt
#rm s21_grep.txt grep.txt