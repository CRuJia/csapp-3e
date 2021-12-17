# 第二章 信息的表示和处理

## 知识点：
- 二进制代码在不同平台上是不兼容的。
- 通过异或不借用第三个变量交换两个值。
- 有符号数右移使用算数右移，左端补k个最高有效位的值。无符号数右移必须是逻辑右移，左端补0。
- 补码（Two's complement），机器一般都是用补码表示的。
- 扩展位数时会根据最高位补充，截断位数时高位直接丢弃。
- 乘法通常会溢出，然后进行截断高位。
- IEEE浮点数表示法。