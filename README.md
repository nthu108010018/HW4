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
在openmv先做好apriltag跟車子角度處理好 用uart傳給mbed
角度絕對值大於30度，車子會轉彎修正
若無則繼續往前走 直到看不到apriltag
