# HW4
part 1:
在bbcar.cpp加入新的RPCfuntion park
共有3個參數 d1 d2 direction(以1代表西邊，-1代表東邊)
之後用python透過Xbee去call 新增的RPCfunction
part 2:
在openmv先做好線段角度處理 用uart傳給mbed
角度絕對值大於30度，車子會轉彎修正
若無則繼續往前走
part 3:
Openmv:
先算apriltag跟車子角度 方法是使用x_translation以及z_translation 的數據用arctan的方式算出角度 然後用uart傳給mbed
Mbed: 
先讀取uart 傳過來的角度 這個角度絕對值如果大於10度則會使用car.turn()使車子轉向，如果小於10度則gostraight執行
