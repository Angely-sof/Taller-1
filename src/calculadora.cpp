{
    std:: string opt;
    double x,y;
    
    std::cin >> x >>opt>> y;
    
    if(opt =="+"||opt == "suma"){
        std::cout <<x+y<< std::endl;
    }
else if(opt =="-"||opt == "resta"){
        std::cout <<x-y<< std::endl;
    }
        else if (opt =="*"||opt == "multiplicacion"){
        std::cout <<x*y<< std::endl;
    }
     else if(opt =="/"||opt == "division"){
    
        if (y == 0){
            std::cout << "error\n"<<std::endl;
    		}
    		else{ std::cout << (float) x/y << std::endl;}}
    else{std::cout << "error\n" << std::endl;}
    return 0;
}
