# -*- coding: utf-8 -*-
# @File    : ModelTrain.py
# @Date    : 2019-05-25-16:22
# @Author  : Wade
import numpy as np
from keras.models import Sequential
from keras.layers.core import Dense, Activation
    #模型训练
def Train_Model(data_train):
    modelfile = './modelweight'#模型存储文件
    y_mean_std = './y_mean_std.txt' #数据标准化过程中的参数，用于还原预测值。
    data_train = np.matrix(data_train)#将训练集格式化为矩阵。
    data_mean = np.mean(data_train, axis=0)#数据标准化
    data_std = np.std(data_train, axis=0)
    data_train = (data_train - data_mean) / data_std
    #分割自变量和因变量
    x_train = data_train[:, 0:(data_train.shape[1] - 1)]
    y_train = data_train[:, data_train.shape[1] - 1]
    #定义模型
    model = Sequential()
    #为方便使用我已经将input_dim取值为自变量的数量
    model.add(Dense(x_train.shape[1], input_dim=x_train.shape[1], kernel_initializer="uniform"))
    model.add(Activation('relu'))
    model.add(Dense(1, input_dim=x_train.shape[1]))
    model.compile(loss='mean_squared_error', optimizer='adam')
    model.fit(x_train, y_train, epochs=4000, batch_size=x_train.shape[0])
    #存储模型权重，注意这里只是保存的权重，所以之后要重新定义模型。
    model.save_weights(modelfile)
    #记录因变量标准化处理过程中的数据
    y_mean = data_mean[:, data_train.shape[1] - 1]
    y_std = data_std[:, data_train.shape[1] - 1]
    print("训练完毕")
    f = open(y_mean_std, "w")
    mean_std = str(y_mean.astype(str)) + " " + str(y_std.astype(str))
    mean_std = mean_std.replace("[", "")
    mean_std = mean_std.replace("]", "")
    mean_std = mean_std.replace("'", "")
    #存储因变量标准化处理过程中的数据
    f.write(mean_std)