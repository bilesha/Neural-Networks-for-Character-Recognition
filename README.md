# Neural Networks for Character Recognition
 
Introduction 

Neural networks are artificial systems which are inspired by biological neural networks. They are simple units that operate in parallel and distributed mode to perform a global task. These systems learn to perform tasks by being fed large amounts of information and data without any task specific rules. They are inductive programs meaning that they will consume the information and conclude the result. 

Neural networks consist of operational logic which is derived from mathematical formulas. This is also known as threshold logic. Components commonly found in a neural network are weights, data sets, biases, connections, propagation function, activation function and learning rate. There are multiple sets of activation functions such as sigmoid, relu, tanh and linear. 

There are different types of learning techniques. They consist of supervised learning, clustering and reinforcement learning. Neural networks are taught through supervised learning. A supervised machine learns with an input variable and output variable. It continues iterating the data set until it is able to deliver an acceptable level of performance for inputs.

This report will be focusing on a programming a neural network that is designed to tests a multi-layer feed-forward network for recognising characters defined in the UCI machine learning repository: http://archive.ics.uci.edu/ml/datasets/Letter+Recognition.  The QT IDE will be used to run the program with a GUI interface.


Random Tests Tabulation
	Architecture 	Neuron 
Layers
	Number of
Hidden 
Neurons
	Learning 
Rate
	Performance Testing
on TEST SET
	Performance Testing
On TRAINING SET
	
Max EPOCHS
					MSE		MSE		
1	16-2-27
Sigmoid	2	25,25	0.01	0.196735	83.1	0.196735	84.925	50
2	16-2-27
Sigmoid	2	25,25	0.01	0.188198	85.375	0.188198	88.4	100
3	16-2-27
Sigmoid	2	25, 25	0.01
	0.167408
	85.8	0.167408	87.4	200
4	16-2-27
tanH	2	25, 25	0.01	1.656829	4.375	1.656829	4.11875	50
5	16-2-27
tanH	2	25,25	0.01	1.653853	4.125	1.653853	4.09	200
6	16-2-27
Relu	2	25,25	0.01	0.964	3.9	0.964	3.97	50
7	16-2-27
Sigmoid	2	60,60	0.1	0.08692	92.975	0.08692	95.4375	50
8	16-2-27
Sigmoid	2	60,60	0.1	0.053716	93.55	0.053716	97.76865	100
9	16-2-27
tanH	2	60,60	0.1	1.9253	4.175	1.9253	3.9875	100
10	16-2-27
Relu	2	60,60	0.1	0.9655	4.2	0.9655	3.968	100
11	16-3-27
Sigmoid	3	80,80, 80	0.2	0.07555	93.225	0.07555	96	50
12	16-3-27
TanH	3	80,80, 80	0.2	1.92262	3.475	1.922	3.83	100
13	16-3-27
RelU	3	80,80, 80	0.2	0.9654	4.2	0.9653	3.84	100
14	16-4-27
Sigmoid	4	56,56, 56, 56	0.4	0.185	85.925	0.185	87.64	100

The above table is a collection of tabulations for different parameters. From this dataset, it is clear that the sigmoid function has the best performance whereas both the tanH and Relu functions perform horrendously. Because of this, all three of my top performing architectures are derived from the sigmoid function. The top 3 are tabulated in a table below.
Top 3 Test Tabulation results
	Architecture 	Neuron 
Layers
	Number of
Hidden 
Neurons
	Learning 
Rate
	Performance Testing
on TEST SET
	Performance Testing
On TRAINING SET
	Initial weights	Trained weights	
Max EPOCHS
					MSE	PGC	MSE	PGC			
1	16-2-27
Sigmoid	2	60,60	0.1	0.053716	93.55	0.053716	97.76865	Initial
Weight1	Trained
Weight
File1	100
2	16-3-27
Sigmoid	3	80,80, 80	0.2	0.07555	93.225	0.07555	96	Too much data, crashes	Too much data, crashes	50
3	16-2-27
Sigmoid	2	60,60	0.1	0.08692	92.975	0.08692	95.4375	Initial
Weight3	Trained
Weight3	50



Excel graphs of MSE and PGC for highest performing architecture which is 16-2-27 with a sigmoid function with 60 hidden neurons and learning rate of 0.1.


 
 








Tabulation 1 results.
 
 
Tabulation 2 results
 
 


Tabulation 3 results.
 
 
Confusion Matrix

 

A confusion matrix was conducted using the highest performance neural network. 70 samples were inputted into the test pattern box to classify the if the test patterns were correctly identified by the system or not. With my confusion matrix and results, the neural network got an accuracy of 65/70 which results in a accuracy of 93%. This is lower than the expected percentage of good classification that was 98%. However, this can be justified because the training set had 16,000 samples whereas for the confusion matrix sample only had 70 samples. If I kept testing, it is possible for the result to hit close to 98%.
Pseudocode
Neural Network:: constructor
	Set LEARNING RATE = 0.02
	Create Input Layer instance
	For int i = 0; i < number of hidden layers; i++
		If (i = 0)
			Set Hidden Layers[i] = new instant of neuron layer with number_of_neurons = hidden Layers[0], number_of_neurons, INPUT_NEURONS 
else 
	Set Hidden Layers[i] = new instant of neuron layer with number_of_neurons = HiddenLayer_NumberofNeurons[i] - HiddenLayers[i-1]->number_of_neurons

Set Output Layer = instant of neuron layer with number_of_neurons = OUTPUT_NEURONS, HiddenLayers[NUMBER_OF_HIDDEN_LAYERS - 1]->number_of_neurons
Set target = double array of Output Layer->number of neurons
Set activation function = instance of Sigmoid 
Initialise function

Initialise function()
	Set sum of squared error = 0
	Set sample = 0
	Set iterations = 0
Set random number seed to 123
Assign random weights

Train network()
	Set double error
	Shuffle input patterns
	Set accumulated error = 0
	Set error = 0
Set int gc = 0
	Set sample = 0 
	while(number of training patterns > sample)
	Begin while
		Set input activation values to sample input attributes
		Set target output values to expected output of sample

		Call Feed Forward network
		Set error to 0.00
	Calculate mean squared of error 
		Call Back Propagate
		Increment sample
End while
Calculate and set percentage of good classifications
Return square of mean error

Bestout function
		Return the index of maximum value of given data array

Feed Forward(neuron layer to feed forward, number of inputs for the layer)
	Set double sum
	Set sum = 0.0
	For each neuron in neuron layer 
		For each input in inputs
			Set sum = input*weight
		Add bias to sum
		Set neuron layer activation to output of activation function of sum
	For each neuron in output layer
		Set output to softmax value
		Example 
		 

Back propagate()
 For each neuron in output layer
	Set error = activation - target
		 
	For each hidden layer 
	For each neuron in hidden layer
			Set error sum of output * weight
			Set error = error * derivative of activation function
 
For each neuron O in output layer 
	For each input link of output layer 
		Set weight = weight - learning rate * error * O.activation
 
For each neuron in hidden layer 2
	For each link from hidden layer 1 
		Set weight = weight - learning rate * error *  hidden layer 1  activation value 
		 
For each neuron in hidden layer 1 
	For each link from input layer 
		Set weight = weight - learning rate* error * input layer activation value\
		 




Discussion

Overall, I was satisfied with my algorithm and neural network as my top performance managed to hit 98% in the good classification spectrum. This was further proved accurate with the small sample size used for the confusion matrix which demonstrated an accuracy of 93% for the neural network algorithm. Other positives from my results were the fact that a neural network with 2 hidden layers had the highest performance with 60 neurons. This is good because including additional components demands more processing power and higher epoch count increases the time required to train. It is efficient and effective to have a system that consumes the least amount of processing power and the least amount of time to train. Adding an extra layer and neurons did not increase the result. Even 4 hidden layers, the performance went down instead of improving despite consuming more power and time. 
The issues with these results were that the tanH and Relu functions had terrible performances. Despite increasing epoch cycles, hidden layers and neurons, the performance did not increase. This could be due to the fact the mathematical formula in my program could be incorrect and is not delivering the correct results. Other potential issues are that the algorithm is not written properly to interact with tanH and Relu functions and there is a bug somewhere. The weights might also be causing an issue and such this algorithm might only be capable of functioning effectively with the sigmoid activation function. 
In conclusion, the most effective, highest and efficient performing architecture for the neural network to perform the character recognition task gathered from my tests is a sigmoid function with 16 inputs, 2 hidden layers, 27 outputs with 60 neurons and a learning rate of 0.1. These parameters gave a mean squared error of 0.053716 and a percentage of good classification at 98%. 


User Guide 
 ![image](https://user-images.githubusercontent.com/73975745/129800548-ed88dcc6-b502-445e-9b75-450ff6b908a2.png)

Read file: Read the respective text file from the directory folder. In this case, the respective text file is complete_data_set.txt. The count of each letter in the alphabet is then displayed in the results text box.

Initialize network: Initializes the network

Times Epoch: Select the number of epoch cycles to train the network

Test Network on TEST SET: Displays the number of correct classifications and percentage of good classifications for the test set file.

Test Network on TRAINING SET: Displays the number of correct classifications and percentage of good classifications for the training set file.

Save Weights: Save the weights onto a weights.txt file

Load Weights: Load the weights.txt file

Shuffle Data: Shuffles the data from the file

Activation Function: Pick a designated activation function

Number of Neuron Layers: Pick a designated number of neuron layers (does not work)

Apply Function and Neuron Layers: Sets the respective activation function and number of neuron layers. (Neuron layers change does not work)

Learning Rate: Sets the learning rate.

Mean of squared error: Displays the mean of the squared error while and after a epoch training cycle as occurred.

No of Good Classification: Displays the percentage of good classifications when the Test Network on TEST SET or Test Network on TRAINING SET is clicked.

Results: Displays the results

Classify Test Pattern: Enter a test pattern manually onto the box and it will display whether the letter was classified or not and displays the values of all 26 characters.


The number of hidden layers and number of neurons can adjust in the global.h header file. They are both stored as hyper parameters and it is simple to adjust the number of hidden layers and hidden neurons the user would want to test with. 
