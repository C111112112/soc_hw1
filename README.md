# 系統晶片設計實習(SOC)作業一
## C111112112 電子三甲 蔡宗洺

## 作業主題 : EGO-XZ7LED燈顯示系統
## 功能介紹
本系統使用 EGO-XZ7（Zynq-7000）開發板 搭配 AXI GPIO，實作一個具有互動式控制功能的 LED 動畫顯示裝置。主要功能如下

### LED 動畫效果：
讓LED在0xC3狀態跟0xFFFFFF3C狀態之間轉換

## 硬體
開發板： EGO-XZ7（Zynq-7000 SoC，型號：XC7Z020CLG484-1）

處理器： ARM Cortex-A9

## 軟體
Xilinx Vivado 2018：用於硬體設計與綜合。

Xilinx SDK：用於開發軟體並控制 PS。

## Block Design
![螢幕擷取畫面 2025-04-15 015145](https://github.com/user-attachments/assets/43f11925-d596-450a-b5f4-6761b64da03b)

## 實作示範影片
https://github.com/user-attachments/assets/58d20088-b7c5-4e95-a544-1f9001d7ad20
