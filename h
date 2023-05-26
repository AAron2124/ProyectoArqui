
  nav ul li {
    display: inline-block;
    position: relative;
  }
  
  nav ul li a {
    display: block;
    padding: 10px 20px;
    color: #fff;
    text-decoration: none;
  }
  
  nav ul li:hover {
    background-color: #555;
  }
  
  nav ul ul {
    display: none;
    position: absolute;
    top: 100%;
    left: 0;
    background-color: #555;
    padding: 0;
  }
  
  nav ul li:hover > ul {
    display:inherit;
  }
  
  nav ul ul li {
    display: block;
    width: 100%;
  }
  
  nav ul ul li a {
    padding: 10px 20px;
    color: #fff;
  }
  
  nav ul ul li a:hover {
    background-color: #666;
  }