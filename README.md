## Implementation Details for Capstone Project (PPNN):

### Dependencies
* Eigen3

### Execution 
```
git clone https://github.com/kubershahi/ashoka-capstone.git
cd ashoka-capstone
make nn         
make bb         
```
'make nn' is for the Neural Network and 'make bb' is for the SecureNN bulding blocks.

### Scratch Neural Network Implementation:
* Neural Network with ReLU and Softmax 
* Total of 2 Layers: one hidden layer with 256 neurons and one output layer with 10 neurons for MNIST dataset

### SecureNN Building Blocks
* Mapping and Reverse Mapping
* Truncation
* Secret Sharing
* Matrix Multiplication (Beaver's Multiplication Triples)
* Private Compare 

SecureNN Paper: https://eprint.iacr.org/2018/442.pdf

For final project report, see *Capstone_Report.pdf*.
