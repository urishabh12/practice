import keras
from keras.models import Sequential
from keras.layers import Dense
from keras import backend as K 
from keras.layers import Activation
from keras.optimizers import Adam
x=[]
y=[]
for n in range(1,200):
    x.append(n)
    l=[k for k in range(1,n+1)]
    step=1
    while True:
        if len(l)==1:
            break
        if step>1:
            l.reverse()
        l_del=[x for x in l if l.index(x)%2!=0]
        l=l_del[:]
        step+=1
    y.append(l[0]) 

model = Sequential()
model.add(Dense(16, input_shape=(1,), activation="relu"))
model.add(Dense(32, activation="relu"))
model.add(Dense(1, activation="softmax"))
model.compile(Adam(lr=.0001), loss="sparse_categorical_crossentropy", metrics=["accuracy"])
model.fit(x,y,batch_size=10,epochs=20)