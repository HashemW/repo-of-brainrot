#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_SIZE 784
#define MAX_NODES_LAYER1 256
#define MAX_NODES_LAYER2 512
#define MAX_NODES_LAYER3 256
#define SOFTMAX_NODES 10
#define MAX_CHAR_LENGTH 2048
/*
 * Declaration of neural network structure
 */
typedef struct neural_network {
    int input_layer[INPUT_SIZE];
    // Weights between layers (separate arrays)
    int w1[INPUT_SIZE][MAX_NODES_LAYER1];
    int b1;
    int layer1[MAX_NODES_LAYER1];
    int w2[MAX_NODES_LAYER1][MAX_NODES_LAYER2];
    int b2;
    int layer2[MAX_NODES_LAYER2];
    int w3[MAX_NODES_LAYER2][MAX_NODES_LAYER3];
    int b3;
    int layer3[MAX_NODES_LAYER3];
    int w4[MAX_NODES_LAYER3][SOFTMAX_NODES];
    int b4;
    int softmax_output[SOFTMAX_NODES];
} nn;

nn* create_nn() {
    nn* network = (nn*) malloc (sizeof(nn));
    if (network == NULL) {
        exit(EXIT_FAILURE);
    }



}

int main() {
//initialize variables

    struct neural_network mnist_nn;
    FILE* stream;
    char* line;
    char* input_node;
    int input_node_count;
//begin with opening the test data file.
    line = (char*) malloc(MAX_CHAR_LENGTH);
    stream = fopen("data/mnist_train.csv", "r");
    while (fgets(line, MAX_CHAR_LENGTH, stream)) {
        input_node = strtok(line, ",");
        while (input_node != NULL) {
            mnist_nn.input_layer[input_node_count] = (int) *input_node - '0';
            input_node = strtok(NULL, ",");
            input_node_count+=1;
        }
        break;
    }
    free(line);
    fclose(stream);
    return 0;
}


