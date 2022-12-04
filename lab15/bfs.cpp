#include <iostream>

using namespace std;
struct node{
    int node_number;
    string node_name;
    int conected_nodes[5] ={};
    int visited = 0;
};

void print(struct node box[],int size){
    for(int i=0;i<size;i++){
        cout<<"node number "<<box[i].node_number<<endl;
        cout<<"node name "<<box[i].node_name<<endl;
        if(box[i].visited == 0){
            cout<<"not visited"<<endl;
        }else{
            cout<<"visited"<<endl;
        }
        for(int j=0;j<5;j++){
            if(box[i].conected_nodes[j]!=0){
                cout<<"connected to "<<box[i].conected_nodes[j]<<endl;
            }
        }
        cout<<endl;
    }
}


int main(){
    int x = 0;
    cout<<"Enter node number: ";
    cin >> x;

    int statck[] ={};
    int stack_size = 0;

    struct node node_array[x];

    //createing nodes
    for (int i = 0; i < x; i++)
    {   
        cout<<"enter how many nodes are connect to node "<<i+1<<": ";
        int number_of_connected_nodes;
        cin>>number_of_connected_nodes;

        cout<<"enter the name of the node  "<<endl;
        string  name ;
        cin>>name;

        cout<<"enter the connected nodes for the node "<<i+1<<endl;
        int connected_nodes[number_of_connected_nodes];
        for(int j=0;j<number_of_connected_nodes;j++){
            cin>>connected_nodes[j];
        }
        node_array[i].node_number = i+1;
        for(int j=0;j<number_of_connected_nodes;j++){
            node_array[i].conected_nodes[j] = connected_nodes[j];
        }
        node_array[i].node_name = name;

    }
    print(node_array,x);


        struct node temp = node_array[0];
        cout<<"Node visited : "<<temp.node_name<<endl;
        node_array[0].visited = 1;
        for(int j=0;j<5;j++){
            if(temp.conected_nodes[j]!=0){
                statck[stack_size] = temp.conected_nodes[j];
                stack_size++;
            }
        }


    

    for (int i = 1; i < x; i++)
    {   
        struct node temp = node_array[statck[0]];
        cout<<"Node visited : "<<temp.node_name<<endl;
        node_array[i].visited = 1;
        for(int j=0;j<5;j++){
            if(temp.conected_nodes[j]!=0){
                statck[stack_size] = temp.conected_nodes[j];
                stack_size++;
            }
        }
    }

    for (size_t i = 0; i < sizeof(statck)/sizeof(int); i++)
    {
        cout<<statck<<" ";
    }
    cout<<endl;


    
    return 0;
}