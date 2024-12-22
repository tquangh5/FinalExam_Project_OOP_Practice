Thi cuối kỳ thực hành
CSC10003 – Phương pháp lập trình hướng đối tượng
Thời gian làm bài: Từ 12g00 ngày 9/12/2024 đến 12g00 ngày 11/12/2024
Quy định nộp bài
● Nộp toàn bộ project, file báo cáo, hình vẽ UML nén lại thành tập tin
MSSV.zip và nộp trên Moodle. Nếu project biên dịch lỗi thì sẽ bị 0đ bài
đó.
● Các bài nộp trễ trong vòng 6 giờ sau deadline sẽ bị trừ 10% tổng điểm
của bài. Các bài nộp sau đó sẽ không được công nhận.
● Nghiêm cấm sao chép mã nguồn, nếu phát hiện sẽ bị 0đ tất cả các bài
có liên quan.
● Các biến sinh viên có thể tự đặt tên biến / tên phương thức / tên class
nhưng tên phải có ý nghĩa và dễ hiểu.
● Những thông tin nào đề bài không yêu cầu, sinh viên có thể tùy ý thiết
kế, tuy nhiên phải hợp lý và hợp logic của lập trình hướng đối tượng.
Đề bài: Xây dựng hệ thống đặt vé xe khách trực tuyến
Nhu cầu di chuyển tăng cao trong dịp Tết Nguyên Đán đặt ra thách thức lớn cho các nhà xe
trong việc quản lý vé và phục vụ hành khách. Để giải quyết bài toán này, nhà xe OO đang
tìm kiếm giải pháp công nghệ tiên tiến nhằm tối ưu hóa quy trình bán vé, mang lại sự tiện lợi
cho hành khách và nâng cao hiệu quả kinh doanh.
Hệ thống đặt vé xe khách trực tuyến được xem là giải pháp tối ưu trong bối cảnh hiện nay.
Hệ thống này cho phép hành khách tra cứu thông tin chuyến xe, so sánh giá vé, lựa chọn
chỗ ngồi và thanh toán trực tuyến một cách nhanh chóng và thuận tiện. Đồng thời, hệ thống
cũng cung cấp cho nhà xe OO công cụ quản lý thông tin chuyến xe, khách hàng, doanh thu
và báo cáo thống kê một cách hiệu quả.
Trong vai trò là một lập trình viên, bạn được giao nhiệm vụ thiết kế và phát triển hệ thống
đặt vé xe khách trực tuyến cho nhà xe OO. Yêu cầu đặt ra là áp dụng kiến thức lập trình
hướng đối tượng (OOP) để xây dựng một hệ thống hoàn chỉnh, đáp ứng đầy đủ các chức
năng cần thiết và đảm bảo tính ổn định, bảo mật và hiệu năng cao.
Đây là cơ hội để bạn thể hiện năng lực lập trình và đóng góp vào việc xây dựng một hệ
thống hữu ích, mang lại giá trị thiết thực cho nhà xe OO và hành khách trong dịp Tết
Nguyên Đán.
1
Mô tả chi tiết:
Hệ thống cần đáp ứng các yêu cầu về quản lý thông tin, chức năng chính, yêu cầu bổ sung
và có các tiêu chí chấm điểm như sau:
1. Quản lý thông tin:
Hệ thống cần quản lý hiệu quả các thông tin liên quan đến xe, chuyến xe, khách hàng và vé.
● Xe: Mỗi xe được mô tả bởi các thuộc tính như biển số xe (duy nhất), loại xe (ghế
ngồi, giường nằm), số chỗ ngồi và các tiện ích đi kèm (điều hòa, wifi, thức ăn, nước
uống,...). Mỗi tiện ích có thể có mức giá riêng, cho phép tính toán giá vé linh hoạt
dựa trên lựa chọn của khách hàng.
● Chuyến xe: Mỗi chuyến xe được xác định bởi mã chuyến xe (duy nhất), điểm đi,
điểm đến, ngày giờ khởi hành, giá vé cơ bản và số vé còn lại. Ngoài ra, cần lưu trữ
thông tin về xe phục vụ chuyến đi đó.
● Khách hàng: Thông tin khách hàng bao gồm họ tên, số điện thoại (duy nhất) và
email, được sử dụng để liên lạc và xác nhận thông tin đặt vé.
● Vé: Mỗi vé được đại diện bởi mã vé (duy nhất) và chứa thông tin chi tiết về chuyến
xe, khách hàng, giá vé (được tính toán dựa trên giá vé cơ bản và các tiện ích được
chọn), trạng thái vé (đã đặt, đã thanh toán, đã hủy) và danh sách các tiện ích mà
khách hàng đã chọn.
2. Chức năng chính (thực hiện qua giao diện dòng lệnh - CLI):
Hệ thống cung cấp các chức năng chính thông qua giao diện dòng lệnh, cho phép người
dùng tương tác và thực hiện các thao tác cần thiết.
2.1. Chức năng quản lý của hệ thống quản lý vé:
Chức năng quản lý của quản lý vé cho phép nhân viên quản lý (hoặc quản trị viên) thực hiện
các thao tác đặc biệt trên hệ thống để kiểm soát và điều hành việc bán vé.
Mô tả chi tiết:
Nhân viên quản lý có thể đăng nhập vào hệ thống bằng tài khoản được cấp quyền quản lý.
Sau khi đăng nhập, họ có thể truy cập vào chức năng quản lý của quản lý vé, nơi cung cấp
các tính năng sau:
● Quản lý chuyến xe:
○ Thêm chuyến xe mới: Cho phép nhân viên quản lý thêm thông tin về chuyến
xe mới vào hệ thống, bao gồm điểm đi, điểm đến, ngày giờ khởi hành, giá vé,
loại xe, số chỗ, tiện ích...
○ Chỉnh sửa thông tin chuyến xe: Cho phép cập nhật thông tin của các chuyến
xe hiện có, ví dụ như thay đổi giờ khởi hành, giá vé, hoặc hủy chuyến.
○ Xóa chuyến xe: Cho phép xóa chuyến xe khỏi hệ thống (nếu cần).
● Quản lý xe:
2
○ Thêm xe mới: Cho phép thêm thông tin về xe mới vào hệ thống, bao gồm
biển số xe, loại xe, số chỗ, tiện ích...
○ Chỉnh sửa thông tin xe: Cho phép cập nhật thông tin của các xe hiện có.
○ Xóa xe: Cho phép xóa xe khỏi hệ thống (nếu cần).
● Quản lý vé:
○ Xem danh sách tất cả các vé: Cho phép nhân viên quản lý xem danh sách tất
cả các vé đã được đặt trên hệ thống, bao gồm thông tin chi tiết về từng vé.
○ Chỉnh sửa thông tin vé: Cho phép cập nhật thông tin của các vé hiện có, ví dụ
như thay đổi trạng thái vé, thay đổi thông tin hành khách, hoặc hoàn tiền vé.
○ Hủy vé: Cho phép nhân viên quản lý hủy vé (trong trường hợp cần thiết).
● Báo cáo thống kê:
○ Thống kê doanh thu: Cho phép xem báo cáo doanh thu theo ngày, tháng,
năm hoặc theo chuyến xe.
○ Thống kê số lượng vé bán ra: Cho phép xem báo cáo số lượng vé bán ra
theo ngày, tháng, năm hoặc theo chuyến xe.
○ Thống kê số lượng khách hàng: Cho phép xem báo cáo số lượng khách
hàng đã sử dụng hệ thống.
Đọc thông tin từ file:
Để thuận tiện cho việc quản lý, hệ thống cho phép đọc thông tin về chuyến xe, xe, và vé từ
các file định dạng sẵn (ví dụ: CSV, JSON, XML hoặc file TXT có cấu trúc sinh viên tự định
nghĩa). Nhân viên quản lý có thể chuẩn bị dữ liệu trên các file này và sau đó import vào hệ
thống.
Ví dụ minh họa giao diện CLI:
> quan-ly-he-thong
> Chon chuc nang:
> 1. Quan ly chuyen xe
> 2. Quan ly xe
> 3. Quan ly ve
> 4. Bao cao thong ke
> 5. Doc thong tin tu file
> 6. Quay lai
> Chon (1-6): 5
> Chon loai thong tin muon doc:
> 1. Chuyen xe
> 2. Xe
> 3. Ve
> Chon (1-3): 1
> Nhap duong dan den file: data/chuyen_xe.csv
> Doc thong tin thanh cong!
Gợi ý áp dụng mẫu thiết kế:
Chức năng quản lý của quản lý vé có thể được triển khai bằng một mẫu thiết kế cho phép
phân quyền truy cập và thực thi các chức năng khác nhau dựa trên vai trò của người dùng.
3
Mẫu thiết kế này giúp kiểm soát quyền truy cập vào các chức năng nhạy cảm, đảm bảo chỉ
những người dùng được ủy quyền mới có thể thực hiện các thao tác quản lý.
2.2. Tra cứu chuyến xe:
Chức năng tra cứu chuyến xe được thiết kế để cung cấp cho khách hàng khả năng tìm kiếm
linh hoạt và hiệu quả, đáp ứng đa dạng các nhu cầu tìm kiếm.
Mô tả chi tiết:
Khách hàng có thể tra cứu chuyến xe dựa trên nhiều tiêu chí kết hợp, bao gồm:
● Điểm đi: Khách hàng nhập tên thành phố hoặc địa điểm cụ thể làm điểm khởi hành.
● Điểm đến: Khách hàng nhập tên thành phố hoặc địa điểm cụ thể là nơi muốn đến.
● Ngày khởi hành: Khách hàng nhập ngày khởi hành mong muốn.
● Khoảng giá: Khách hàng có thể giới hạn khoảng giá vé mong muốn, ví dụ từ
100.000 đến 500.000 đồng.
● Loại xe: Khách hàng có thể lựa chọn loại xe ưa thích, ví dụ xe ghế ngồi, xe giường
nằm, hoặc xe limousine.
● Tiện ích: Khách hàng có thể chọn các tiện ích mong muốn trên xe, ví dụ có điều
hòa, wifi, nước uống, hoặc nhà vệ sinh.
Để tăng tính linh hoạt, hệ thống cho phép khách hàng kết hợp nhiều tiêu chí tìm kiếm. Ví dụ,
khách hàng có thể tìm kiếm chuyến xe đi từ Hà Nội đến Đà Nẵng vào ngày 20/12/2024, có
giá vé từ 200.000 đến 400.000 đồng và có tiện ích wifi.
Hệ thống sẽ xử lý yêu cầu tìm kiếm bằng cách áp dụng lần lượt các tiêu chí mà khách hàng
đã chọn. Ví dụ, đầu tiên hệ thống sẽ lọc ra các chuyến xe có điểm đi và điểm đến phù hợp.
Sau đó, hệ thống sẽ tiếp tục lọc theo ngày khởi hành, khoảng giá, loại xe và tiện ích.
Kết quả tìm kiếm sẽ được hiển thị dưới dạng danh sách các chuyến xe phù hợp, bao gồm
thông tin tóm tắt về mỗi chuyến xe như: mã chuyến xe, giờ khởi hành, loại xe, giá vé, số vé
còn lại. Khách hàng có thể lựa chọn xem chi tiết từng chuyến xe để biết thêm thông tin.
Ví dụ minh họa giao diện CLI:
> tra-cuu-chuyen-xe
> Nhap diem di: Ha Noi
> Nhap diem den: Da Nang
> Nhap ngay khoi hanh (dd/mm/yyyy): 20/12/2024
> Nhap khoang gia (min-max): 200000-400000
> Chon loai xe (1: Ghe ngoi, 2: Giuong nam): 2
> Chon tien ich (1: Wifi, 2: Dieu hoa): 1
> Ket qua tim kiem:
| Ma chuyen | Gio khoi hanh | Loai xe | Gia ve | Ve con lai |
|------------|-----------------|------------|--------|------------
|
| CX123 | 18:00 | Giuong nam | 300000 | 10 |
| CX456 | 20:00 | Giuong nam | 350000 | 5 |
Gợi ý áp dụng mẫu thiết kế:
4
Chức năng tra cứu chuyến xe này có thể được triển khai bằng cách sử dụng một mẫu thiết
kế cho phép kết hợp nhiều tiêu chí lọc khác nhau một cách linh hoạt. Mỗi tiêu chí lọc (điểm
đi, điểm đến, ngày khởi hành,...) có thể được đóng gói thành một đối tượng riêng biệt. Các
đối tượng này có thể được kết hợp với nhau để tạo thành một chuỗi các tiêu chí lọc phức
tạp.
Mẫu thiết kế này cho phép hệ thống dễ dàng thêm mới hoặc thay đổi các tiêu chí lọc mà
không ảnh hưởng đến các phần khác của chương trình.
2.3. Hiển thị thông tin chi tiết chuyến xe:
Chức năng hiển thị thông tin chi tiết chuyến xe được thiết kế để cung cấp cho khách hàng
cái nhìn đầy đủ và rõ ràng về chuyến xe mà họ quan tâm, hỗ trợ họ trong việc đưa ra quyết
định đặt vé.
Mô tả chi tiết:
Khi khách hàng lựa chọn một chuyến xe từ kết quả tìm kiếm, hệ thống sẽ hiển thị chi tiết
thông tin về chuyến xe đó, bao gồm:
● Thông tin cơ bản:
○ Mã chuyến xe: Mã định danh duy nhất của chuyến xe.
○ Điểm đi, điểm đến: Tên thành phố hoặc địa điểm cụ thể.
○ Ngày giờ khởi hành, ngày giờ dự kiến đến: Thời gian khởi hành và thời gian
đến dự kiến của chuyến xe.
○ Giá vé cơ bản: Giá vé chưa bao gồm các phụ phí và tiện ích.
○ Số vé còn lại: Số lượng vé hiện có sẵn để đặt.
● Thông tin về xe:
○ Loại xe: Ghế ngồi, giường nằm, limousine,...
○ Biển số xe: Biển số đăng ký của xe.
○ Số chỗ: Tổng số chỗ ngồi trên xe.
○ Tiện ích: Danh sách các tiện ích có sẵn trên xe, ví dụ: điều hòa, wifi, nước
uống, nhà vệ sinh, ổ cắm điện,... Mỗi tiện ích có thể kèm theo mô tả chi tiết
(ví dụ: loại wifi, tốc độ wifi).
● Thông tin khác:
○ Hành trình di chuyển: Danh sách các điểm dừng đỗ (nếu có) và thời gian
dừng dự kiến tại mỗi điểm.
○ Quy định hành lý: Quy định về số lượng, kích thước và trọng lượng hành lý
được phép mang theo.
○ Chính sách hủy vé: Thông tin về điều khoản và phí hủy vé.
○ Thông tin liên hệ nhà xe: Số điện thoại, email để liên hệ với nhà xe khi cần hỗ
trợ.
Ví dụ minh họa giao diện CLI:
> xem-chi-tiet CX123
> Thong tin chi tiet chuyen xe CX123:
> Thong tin co ban:
5
Ma chuyen xe: CX123
Diem di: Ha Noi
Diem den: Da Nang
Ngay gio khoi hanh: 20/12/2024 18:00
Ngay gio du kien den: 21/12/2024 10:00
Gia ve co ban: 300.000 VND
So ve con lai: 10
> Thong tin ve xe:
Loai xe: Giuong nam
Bien so xe: 29A-12345
So cho: 40
Tien ich:
- Dieu hoa
- Wifi mien phi (toc do cao)
- Nuoc uong
- Khan lanh
- Nha ve sinh
> Thong tin khac:
Hanh trinh di chuyen:
- Ha Noi: 18:00
- Nghe An: 23:00 (dung 30 phut)
- Hue: 05:00 (dung 15 phut)
- Da Nang: 10:00
Quy dinh hanh ly: Moi hanh khach duoc mang toi da 20kg hanh
ly.
Chinh sach huy ve: Huy ve truoc 24h khoi hanh: Hoan 50% gia
ve.
Thong tin lien he nha xe: 0987654321
Gợi ý áp dụng mẫu thiết kế:
Để hiển thị thông tin chi tiết chuyến xe, có thể sử dụng một mẫu thiết kế cho phép "xây
dựng" đối tượng chuyến xe với các thuộc tính khác nhau một cách linh hoạt. Mẫu thiết kế
này cho phép tách biệt quá trình tạo đối tượng với việc biểu diễn đối tượng, giúp dễ dàng
thêm mới hoặc thay đổi thông tin hiển thị mà không cần sửa đổi mã nguồn của lớp Chuyến
xe.
2.4. Đặt vé:
Mô tả chi tiết:
Khi khách hàng đã chọn được chuyến xe phù hợp, hệ thống sẽ hướng dẫn khách hàng qua
các bước đặt vé sau:
● Chọn số lượng vé: Khách hàng nhập số lượng vé muốn đặt.
● Nhập thông tin hành khách: Đối với mỗi vé, khách hàng cần cung cấp thông tin
hành khách bao gồm: họ tên, số điện thoại và email (không bắt buộc).
● Chọn chỗ ngồi (nếu có): Nếu chuyến xe có sơ đồ chỗ ngồi, hệ thống sẽ hiển thị sơ
đồ và cho phép khách hàng chọn chỗ ngồi mong muốn.
6
● Chọn tiện ích bổ sung (nếu có): Hệ thống hiển thị danh sách các tiện ích bổ sung
có sẵn cho chuyến xe (ví dụ: bảo hiểm du lịch, nước uống, khăn lạnh) và cho phép
khách hàng lựa chọn. Mỗi tiện ích có thể có mức phí riêng.
● Xác nhận thông tin đặt vé: Hệ thống tổng hợp thông tin đặt vé, bao gồm thông tin
chuyến xe, thông tin hành khách, chỗ ngồi, tiện ích bổ sung và giá vé cuối cùng.
Khách hàng cần xác nhận thông tin trước khi tiến hành thanh toán.
Xử lý yêu cầu đặt vé:
Hệ thống sẽ xử lý yêu cầu đặt vé bằng cách tạo ra một đối tượng "đặt vé". Đối tượng này sẽ
chứa tất cả thông tin liên quan đến yêu cầu đặt vé, bao gồm thông tin chuyến xe, hành
khách, chỗ ngồi, tiện ích và phương thức thanh toán.
Sau khi tạo đối tượng "đặt vé", hệ thống sẽ chuyển đối tượng này cho một đối tượng khác
chịu trách nhiệm xử lý các yêu cầu đặt vé. Đối tượng này sẽ thực hiện các bước cần thiết
để hoàn tất việc đặt vé, bao gồm:
● Kiểm tra chỗ ngồi còn trống.
● Tính toán giá vé cuối cùng.
● Lưu trữ thông tin đặt vé vào cơ sở dữ liệu.
● Gửi email xác nhận cho khách hàng.
Ví dụ minh họa giao diện CLI:
> dat-ve CX123
> Nhap so luong ve: 2
> Thong tin hanh khach 1:
> Ho ten: Nguyen Van A
> So dien thoai: 0987654321
> Email:
> Thong tin hanh khach 2:
> Ho ten: Nguyen Thi B
> So dien thoai: 0912345678
> Email:
> Chon cho ngoi:
> [Hien thi so do cho ngoi]
> Chon cho ngoi cho hanh khach 1: A1
> Chon cho ngoi cho hanh khach 2: A2
> Chon tien ich:
> 1. Bao hiem du lich (50.000 VND)
> 2. Nuoc uong (10.000 VND)
> Chon tien ich cho hanh khach 1 (nhap so thu tu, cach nhau boi
dau phay): 1
> Chon tien ich cho hanh khach 2 (nhap so thu tu, cach nhau boi
dau phay): 1,2
> Xac nhan thong tin dat ve:
> Chuyen xe: CX123 - Ha Noi - Da Nang - 20/12/2024 18:00
7
> Hanh khach 1: Nguyen Van A - 0987654321 - Cho ngoi: A1 - Tien
ich: Bao hiem du lich
> Hanh khach 2: Nguyen Thi B - 0912345678 - Cho ngoi: A2 - Tien
ich: Bao hiem du lich, Nuoc uong
> Tong gia ve: 720.000 VND
> Xac nhan (y/n): y
Gợi ý áp dụng mẫu thiết kế:
Chức năng đặt vé này có thể được triển khai bằng cách sử dụng một mẫu thiết kế cho phép
hệ thống xử lý các yêu cầu đặt vé phức tạp một cách hiệu quả. Mẫu thiết kế này giúp tách
biệt quá trình tạo ra đối tượng "đặt vé" với quá trình xử lý yêu cầu đặt vé. Điều này giúp tăng
tính linh hoạt và khả năng mở rộng của hệ thống, ví dụ như dễ dàng thêm mới các bước xử
lý hoặc thay đổi cách thức xử lý mà không ảnh hưởng đến các phần khác của chương trình.
2.5. Thanh toán:
Chức năng thanh toán được thiết kế để hỗ trợ nhiều phương thức thanh toán khác nhau,
giúp khách hàng có thể lựa chọn hình thức thanh toán phù hợp với nhu cầu của mình.
Mô tả chi tiết:
Sau khi khách hàng đã xác nhận thông tin đặt vé, hệ thống sẽ hiển thị danh sách các
phương thức thanh toán được hỗ trợ. Ví dụ:
● Thanh toán bằng thẻ tín dụng
● Thanh toán bằng chuyển khoản ngân hàng
● Thanh toán bằng ví điện tử (Momo, ZaloPay,...)
● Thanh toán tiền mặt khi nhận vé
Khách hàng lựa chọn phương thức thanh toán mong muốn. Tùy vào từng phương thức, hệ
thống sẽ hiển thị các thông tin cần thiết để khách hàng thực hiện thanh toán. Ví dụ:
● Nếu khách hàng chọn thanh toán bằng thẻ tín dụng, hệ thống sẽ yêu cầu khách
hàng nhập thông tin thẻ (số thẻ, ngày hết hạn, mã CVV).
● Nếu khách hàng chọn thanh toán bằng chuyển khoản ngân hàng, hệ thống sẽ hiển
thị thông tin tài khoản ngân hàng của nhà xe.
● Nếu khách hàng chọn thanh toán bằng ví điện tử, hệ thống sẽ hiển thị mã QR để
khách hàng quét mã và thanh toán.
Sau khi khách hàng hoàn tất việc thanh toán, hệ thống sẽ kiểm tra kết quả thanh toán. Nếu
thanh toán thành công, hệ thống sẽ cập nhật trạng thái vé thành "Đã thanh toán" và gửi
email xác nhận cho khách hàng. Ngược lại, nếu thanh toán không thành công, hệ thống sẽ
thông báo cho khách hàng và hướng dẫn khách hàng thực hiện lại thanh toán hoặc chọn
phương thức thanh toán khác.
Ví dụ minh họa giao diện CLI:
> Chon phuong thuc thanh toan:
> 1. The tin dung
> 2. Chuyen khoan ngan hang
8
> 3. Vi dien tu
> 4. Tien mat khi nhan ve
> Chon (1-4): 1
> Nhap thong tin the tin dung:
> So the:
> Ngay het han (mm/yy):
> Ma CVV:
> [Xu ly thanh toan]
> Thanh toan thanh cong!
> Ve cua ban da duoc cap nhat trang thai "Da thanh toan".
> Vui long kiem tra email de xem thong tin xac nhan.
Gợi ý áp dụng mẫu thiết kế:
Chức năng thanh toán này có thể được triển khai bằng cách sử dụng một mẫu thiết kế cho
phép hệ thống hỗ trợ nhiều phương thức thanh toán khác nhau một cách linh hoạt. Mỗi
phương thức thanh toán có thể được đóng gói thành một đối tượng riêng biệt.
Mẫu thiết kế này cho phép hệ thống dễ dàng thêm mới hoặc thay đổi các phương thức
thanh toán mà không ảnh hưởng đến các phần khác của chương trình.
2.6. Quản lý vé:
Chức năng quản lý vé cho phép khách hàng xem lại, theo dõi và thực hiện các thao tác trên
vé đã đặt.
Mô tả chi tiết:
Sau khi đăng nhập, khách hàng có thể truy cập vào chức năng quản lý vé. Tại đây, hệ thống
sẽ hiển thị danh sách tất cả các vé mà khách hàng đã đặt, bao gồm cả vé đã thanh toán, vé
đang chờ thanh toán và vé đã hủy.
Đối với mỗi vé, hệ thống cung cấp các thông tin sau:
● Mã vé: Mã định danh duy nhất của vé.
● Thông tin chuyến xe: Điểm đi, điểm đến, ngày giờ khởi hành, loại xe.
● Thông tin hành khách: Họ tên, số điện thoại.
● Trạng thái vé: Đã đặt, đã thanh toán, đã hủy.
● Giá vé: Tổng giá trị vé, bao gồm giá vé cơ bản và các phụ phí (nếu có).
Khách hàng có thể lựa chọn một vé từ danh sách để xem chi tiết hoặc thực hiện các thao
tác sau:
● Xem chi tiết: Hiển thị đầy đủ thông tin của vé, bao gồm thông tin chuyến xe, hành
khách, chỗ ngồi, tiện ích bổ sung và lịch sử thay đổi trạng thái của vé.
● Hủy vé: Cho phép khách hàng hủy vé (nếu vé đang ở trạng thái cho phép hủy). Hệ
thống sẽ cập nhật trạng thái của vé và có thể áp dụng chính sách hoàn tiền (nếu có).
● Thay đổi thông tin: Cho phép khách hàng thay đổi một số thông tin trên vé (nếu vé
đang ở trạng thái cho phép thay đổi), ví dụ như:
○ Thay đổi thông tin hành khách.
○ Thay đổi chỗ ngồi (nếu có).
9
○ Thêm hoặc bớt tiện ích bổ sung.
○ Thay đổi phương thức thanh toán (nếu vé chưa được thanh toán).
Ví dụ minh họa giao diện CLI:
> quan-ly-ve
> Danh sách vé của bạn:
| Ma ve | Chuyen xe | Trang thai | Gia ve |
|--------|------------------------------|-------------|--------|
| VE123 | HN - DN - 20/12/2024 18:00 | Da thanh toan | 350000 |
| VE456 | SG - NT - 25/12/2024 10:00 | Da dat | 200000 |
> Chon ma ve de xem chi tiet hoac thuc hien thao tac: VE123
> Thong tin chi tiet ve VE123:
> ...
> Chon thao tac:
> 1. Huy ve
> 2. Thay doi thong tin
> 3. Quay lai
> Chon (1-3): 1
> Ban co chac chan muon huy ve VE123? (y/n): y
> Ve VE123 da duoc huy.
Gợi ý áp dụng mẫu thiết kế:
Chức năng quản lý vé này có thể được triển khai bằng cách sử dụng một mẫu thiết kế cho
phép hệ thống lưu trữ và quản lý trạng thái của vé một cách hiệu quả. Mỗi trạng thái của vé
(đã đặt, đã thanh toán, đã hủy) có thể được đóng gói thành một đối tượng riêng biệt.
Mẫu thiết kế này cho phép hệ thống dễ dàng thêm mới hoặc thay đổi các trạng thái của vé,
cũng như các hành động được phép thực hiện trên mỗi trạng thái mà không ảnh hưởng đến
các phần khác của chương trình.
2.7. Quản lý tài khoản:
Chức năng quản lý tài khoản được thiết kế để khách hàng có thể chủ động kiểm soát thông
tin cá nhân và tùy chỉnh trải nghiệm sử dụng hệ thống.
Mô tả chi tiết:
Sau khi đăng nhập, khách hàng có thể truy cập vào chức năng quản lý tài khoản. Tại đây,
hệ thống hiển thị các thông tin cá nhân của khách hàng, bao gồm:
● Thông tin cơ bản:
○ Họ tên
○ Số điện thoại
○ Email
10
○ Địa chỉ (nếu có)
○ Ngày sinh (nếu có)
● Thông tin bảo mật:
○ Tên đăng nhập
○ Mật khẩu (được ẩn đi)
Khách hàng có thể thực hiện các thao tác sau:
● Chỉnh sửa thông tin: Cho phép khách hàng cập nhật các thông tin cá nhân như họ
tên, số điện thoại, email, địa chỉ.
● Thay đổi mật khẩu: Cho phép khách hàng thay đổi mật khẩu hiện tại. Hệ thống sẽ
yêu cầu khách hàng nhập mật khẩu cũ, mật khẩu mới và xác nhận mật khẩu mới để
đảm bảo tính bảo mật.
● Xem lịch sử hoạt động: Hiển thị lịch sử các hoạt động của khách hàng trên hệ
thống, ví dụ như lịch sử đặt vé, lịch sử hủy vé, lịch sử thay đổi thông tin.
● Xóa tài khoản: Cho phép khách hàng xóa tài khoản của mình khỏi hệ thống (nếu
cần).
Ví dụ minh họa giao diện CLI:
> quan-ly-tai-khoan
> Thong tin tai khoan cua ban:
> Thong tin co ban:
Ho ten: Nguyen Van A
So dien thoai: 0987654321
Email: nguyenvana@email.com
> Thong tin bao mat:
Ten dang nhap: nguyenvana
> Chon thao tac:
> 1. Chinh sua thong tin
> 2. Thay doi mat khau
> 3. Xem lich su hoat dong
> 4. Xoa tai khoan
> 5. Quay lai
> Chon (1-5): 2
> Thay doi mat khau:
> Nhap mat khau cu:
> Nhap mat khau moi:
> Xac nhan mat khau moi:
> Mat khau da duoc thay doi thanh cong!
Gợi ý áp dụng mẫu thiết kế:
Chức năng quản lý tài khoản có thể được triển khai bằng một mẫu thiết kế cho phép "lưu
trữ" trạng thái của đối tượng tài khoản, bao gồm thông tin cá nhân và lịch sử hoạt động.
11
Mẫu thiết kế này cho phép khôi phục lại trạng thái trước đó của tài khoản nếu cần thiết, ví
dụ như khi khách hàng muốn xem lại lịch sử thay đổi thông tin cá nhân.
3. Yêu cầu bổ sung:
Để đảm bảo chất lượng và tính chuyên nghiệp của hệ thống, sinh viên cần tuân thủ các yêu
cầu bổ sung sau:
● Áp dụng mẫu thiết kế: Sinh viên cần áp dụng ít nhất 4 mẫu thiết kế đã học vào hệ
thống, ví dụ: Singleton, Factory, Strategy, Observer, Decorator, Command. Việc lựa
chọn và áp dụng các mẫu thiết kế cần phù hợp với từng chức năng cụ thể, nhằm
tăng tính linh hoạt, khả năng mở rộng và bảo trì của hệ thống.
● Phân tích và lựa chọn mẫu thiết kế: Sinh viên cần phân tích kỹ lưỡng yêu cầu của
từng chức năng và lựa chọn mẫu thiết kế phù hợp nhất. Trong báo cáo thiết kế, sinh
viên cần giải thích rõ ràng lý do lựa chọn từng mẫu thiết kế và cách thức áp dụng
chúng vào hệ thống.
● Sử dụng cấu trúc dữ liệu phù hợp: Sinh viên cần sử dụng các cấu trúc dữ liệu phù
hợp để lưu trữ và quản lý thông tin hiệu quả, chẳng hạn như mảng, danh sách liên
kết, cây, bảng băm. Việc lựa chọn cấu trúc dữ liệu phù hợp sẽ ảnh hưởng đến hiệu
suất và khả năng mở rộng của hệ thống.
● Tuân thủ nguyên tắc OOP: Chương trình cần được viết bằng ngôn ngữ C++ và
tuân thủ các nguyên tắc lập trình hướng đối tượng (đóng gói, kế thừa, đa hình). Việc
áp dụng các nguyên tắc OOP giúp tăng tính module hóa, tái sử dụng mã và dễ dàng
bảo trì hệ thống.
● Đảm bảo chất lượng: Chương trình cần đảm bảo tính đầy đủ, chính xác và hiệu
quả của các chức năng. Sinh viên cần kiểm tra kỹ lưỡng chương trình để đảm bảo
hoạt động đúng như mong đợi và xử lý các trường hợp ngoại lệ có thể xảy ra.
● Giao diện thân thiện: Giao diện dòng lệnh cần được thiết kế thân thiện và dễ sử
dụng, giúp người dùng dễ dàng tương tác với hệ thống.
4. Chấm điểm:
Bài thi sẽ được chấm điểm dựa trên các tiêu chí sau:
● Hoàn thành các chức năng cơ bản (7đ): Đánh giá dựa trên mức độ hoàn thiện các
chức năng chính của hệ thống, bao gồm chức năng quản lý của hệ thống, tra cứu
chuyến xe, hiển thị thông tin chi tiết chuyến xe, đặt vé, thanh toán, quản lý vé và
quản lý tài khoản.
● Áp dụng mẫu thiết kế (2đ): Đánh giá dựa trên việc lựa chọn và áp dụng các mẫu
thiết kế phù hợp vào hệ thống. Sinh viên cần giải thích rõ ràng lý do lựa chọn và
12
cách thức áp dụng từng mẫu thiết kế.
● Cấu trúc dữ liệu và thuật toán (+1đ): Đánh giá dựa trên việc sử dụng các cấu trúc
dữ liệu và thuật toán phù hợp để lưu trữ và quản lý thông tin, đảm bảo hiệu quả và
khả năng mở rộng của hệ thống.
● Báo cáo và sơ đồ UML (1đ): Đánh giá dựa chất lượng của báo cáo thiết kế hệ
thống, bao gồm mô tả lớp, sơ đồ UML và giải thích việc sử dụng các mẫu thiết kế.
Báo cáo cần rõ ràng, mạch lạc và đầy đủ thông tin.
Lưu ý:
Sinh viên cần phân tích đề bài và thiết kế hệ thống một cách hợp lý trước khi bắt đầu viết
mã. Việc thiết kế tốt sẽ giúp sinh viên triển khai chương trình hiệu quả và đạt được điểm số
cao.
Chúc các bạn làm bài tốt!
