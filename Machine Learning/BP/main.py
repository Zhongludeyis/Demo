# -*- coding: utf-8 -*-
# @File    : main.py
# @Date    : 2019-05-25-16:20
# @Author  : Wade
import DataLoad as dataload
import ModelTrain as modeltrain
import DataPrediction as dataprediction


def main():
    data_train = dataload.load_data_train()
    # 装载训练数据
    modeltrain.Train_Model(data_train)
    # 利用训练数据训练模型
    data_pre = dataload.load_data_pre()
    # 装载预测使用的数据
    pre_result = dataprediction.Predict_Data(data_pre)
    # 返回预测结果
    print("真实值为 930291366.85 预测结果为：%f" % (pre_result))


if __name__ == '__main__':
    main()