#Java入门
##	Java 概述：
	*  服务器端：JavaWeb :JSP/SSH
	* CoreJava：（计算模型JVM、算法库、数据结构）
    * 移动端：Android （Web:HTML5/CSS3/JS库）
##	开发环境：
	* 基础开发环境：jdk (javac.exe java.exe)
	* IDE:	Eclipse JetBrain Intellij
##	java程序结构
 ```$xslt
public class A {
    public static void main(String[] args) {
        System.out.println("Hello world");
    }
}
```
	* 程序基本结构 class A 
	* 主方法 public static void main(String[]) (快捷键psvm+Tab)
	* 编译命令javac  A.java
	* 解释执行Java  A  //A.class
	* String => java.lang.String
	* System => java.lang.System
	* 基本输出println //print (快捷键 sout+Tab)
##	计算模型JVM：
### Java Virtual Machine(基础数据类型，Primitive DateType)
	* Byte/byte 1
	* Boolean/boolean 1
	* Character/char 2    //Character.isLetter(char)
	* Short/short 2
	* Integer/int 4       //Integer.toBinaryString(i)
	* Long/long 8
	* Float/float 4
	* Double/double 8     //Double.parseDouble
### 扩展数据类型（引用数据类型）
    * String
    * BigInteger/BigDecimal
    * Date/DateTime/Calendar
    * 所有数组类型
   
	
##	输入输出(格式化输出)
	* 输出System.out.println/print/printf
	* 原始System.in.read(char)
	* 格式化输入：java.util.Scanner
	    -- nextInt/nextByte/nextFLoat()/nextDouble()..
	    -- next()/nextLine()...
	    -- hashNext()/hasNextLine()/hasNextInt()...

	
	
