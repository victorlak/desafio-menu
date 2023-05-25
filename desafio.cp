/*void removerNome(string *p, string nome, int i, int n){
   int control = 0; 
    
    while(control < n){
        
        if(p[control] == nome){
            
        }
    }




void adicionarNome(string *p, string nome, int i){
    
   p[i] = nome;
   
   cout << "Nome adicionado!";
}*/

int main()
{
    int opcao = 0;
    int n = 0;
    int i = 0;
    string nome = "";
    
    cout << "Informe quantos nomes pretende salvar:";
    cin >> n;
    
    string *p = new string[n];
    
    while(opcao != 4 ){
        
    cout << "Escolha uma ação." << endl;
    
    cout <<"_________________________"<< endl;
    cout << "1-Adicionar um nome."<< endl;
    /*cout << "2-Remover um nome."<< endl;*/
    cout << "3-Listar os nomes."<< endl;
    cout << "4-Sair do programa."<< endl;
    cout <<"_________________________"<< endl;;
    cin >> opcao;
    
    if (opcao == 1){
        
        if(i < n){
        cout << "Informe o nome:";
        cin >> nome;
        
        p[i] = nome;
   
        cout << "Nome adicionado!"<< endl;
        
        i++;
        
        }else{
            cout <<"Usuários máximos atingidos!";
        }
    }else if(opcao != 1 && opcao != 3 && opcao != 4){
        
      cout << "Opçao inválida."<< endl;;  
    }
    
    
    
    
    
    /*else if (opcao == 2){
        cout <<"Informe o nome que deseja remover:";
        cin >> nome;
        
        removerNome(*p, nome, i);
        
    }*/else if (opcao == 3){
        int cont = 0;
        
        while(cont < n){
            cout <<p[cont] << endl;
            cont++;
        }
        
    }else if (opcao == 4){
        
        cout << "PROGRAMA ENCERRADO!";
    }
    
        
    }

    return 0;
}
