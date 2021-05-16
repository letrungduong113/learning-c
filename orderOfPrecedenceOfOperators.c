// Thứ tự ưu tiên của các toán tử

/*
* Dấu () có mức ưu tiên cao nhất. Nếu biểu thức có nhiều cặp dấu () thì cặp dấu () trong cùng sẽ có múc ưu tiên cao nhất
* Tiếp theo là *, /, % thì có cùng mức ưu tiên. Nếu trong biểu thức có nhiêu *, /, %  thì sẽ lần lượt thực hiện từ trái qua phải
* Kế đến là +, -, nếu trong biểu thức có nhiêu +, -  thì sẽ lần lượt thực hiện từ trái qua phải
* Cuối cùng là = có mức ưu tiên nhỏ nhất, thường mỗi biểu thức chỉ có 1 phép gán
*/