<center>

# Problem 2: Hạt ? 

Time limit: $1.0s$ $|$ Memory limit: $1024M$

</center>

---

Hoàng Đỗ quyết định ăn các loại hạt. Anh ấy có tổng cộng $x$ hạt trong một chiếc hộp. Có $n$ loại hạt khác nhau trong hộp. Hộp chứa $a_{i}$ hạt thuộc loại thứ $i$  
Hoàng Đỗ chỉ muốn ăn một hạt, nhưng hạt này phải thuộc một trong $k$ loại hạt đã xác định trước, là $b_{1}, b_{2},..., b_{k}.$  
Hoàng Đỗ bắt đầu lấy hạt ra khỏi hộp ngẫu nhiên. Hỏi số lượng hạt **tối thiểu** mà Hoàng Đỗ phải lấy ra để **đảm bảo** rằng trong số các hạt đã lấy, anh ấy sẽ tìm thấy một loại hạt mà anh ấy muốn ăn.

## Input 
- Dòng đầu tiên chứa hai số nguyên $n$ (số loại hạt, $1 \le n \le 105$) và x(tổng số hạt, $1 \le x \le 10^7$).
- Dòng thứ hai chửa mảng $a$ gồm $n$ số nguyên, với $a_{i}$ là số lượng hạt loại thứ $i$. ($\sum_{i=1}^{n} a_{i} = x$)
- Dòng thứ ba chứa một số nguyên $k$ (Số loại hạt Hoàng Đỗ muốn ăn).
- Dòng thứ tư chứa mảng $b$ gồm $k$ số nguyên khác nhau, với $b_{i}$ là chỉ số loại hạt mà Hoàng Đỗ muốn ăn. ($1 \le b_{i}\le n$)

## Output
Một số nguyên duy nhất là đáp án - số hạt tối thiểu Hoàng Đỗ cần lấy để đảm bảo tìm thấy số loại hạt mong muốn.

 