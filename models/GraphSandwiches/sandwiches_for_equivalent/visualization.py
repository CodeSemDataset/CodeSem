'''
Created on Sep 09, 2021

@author: chizhang
'''

import json

from sklearn.manifold import TSNE
from bioinfokit.visuz import cluster

import matplotlib.pyplot as plt
import matplotlib.image as mpimg


def visualize(data_path):    
    embeddings = []
    label_class = []
    
    with open(data_path) as json_file:
        data = json.load(json_file)
        for idx, bug_type in enumerate(data):
            embeddings.extend(bug_type['bug'])
            label_class.extend([2*idx] * len(bug_type['bug']))
            
            embeddings.extend(bug_type['correct'])
            label_class.extend([2*idx+1] * len(bug_type['correct']))
            
    tsne_em = TSNE(n_components=2, perplexity=30.0, n_iter=1000, verbose=1).fit_transform(embeddings)
    cluster.tsneplot(score=tsne_em, colorlist=label_class, legendpos='upper right', legendanchor=(1.15, 1))

if __name__ == '__main__':
    visualize('./log/epoch3_graphs.json')
    
    img = mpimg.imread('./tsne_2d.png')
    plt.imshow(img)
    plt.show()


