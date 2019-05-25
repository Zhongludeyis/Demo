# -*- coding: utf-8 -*-
# @File    : DataPrediction.py
# @Date    : 2019-05-25-16:23
# @Author  : Wade
from keras.models import Sequential
from keras.layers.core import Dense, Activation


# 读取因变量标准化过程中的参数
def load_y():
    f = open("./y_mean_std.txt", "r")
    y_mean = f.read();
    y_mean = y_mean.split(" ")
    f.close()
    return y_mean


def Predict_Data(data_pre):
    # 定义模型
    model = Sequential()
    model.add(Dense(data_pre.shape[1], input_dim=data_pre.shape[1], kernel_initializer="uniform"))
    model.add(Activation('relu'))
    model.add(Dense(1, input_dim=data_pre.shape[1]))
    model.compile(loss='mean_squared_error', optimizer='adam')
    # 装载模型权重文件
    model.load_weights('./modelweight')
    mean_std = load_y()
    # 利用之前标准化的数据还原预测值
    pre_result = model.predict(data_pre) * float(mean_std[1]) + float(mean_std[0])
    return pre_result
