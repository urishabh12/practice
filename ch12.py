import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPClassifier

d={'IP1':[0,1,1,0],'IP2':[0,1,0,1],'IP3':[1,1,1,1],'OP':[0,1,1,0]}
df=pd.DataFrame(data=d)
X_train=df[['IP1','IP2','IP3']]
y_train=df['OP']

dt={'IP1':[1],'IP2':[0],'IP3':[0]}
dft=pd.DataFrame(data=dt)

mlp=MLPClassifier(hidden_layer_sizes=(10,10))
mlp.fit(X_train,y_train)
prediction=mlp.predict(dft)

print(dft,end='     ')
print(prediction)