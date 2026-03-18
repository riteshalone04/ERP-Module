* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}

body {
    background-color: #f4f7f6;
    display: flex;
}

.container {
    display: flex;
    width: 100%;
    height: 100vh;
}

/* Sidebar */
.sidebar {
    width: 250px;
    background: #2c3e50;
    color: white;
    padding: 20px;
}

.sidebar h2 {
    margin-bottom: 30px;
    text-align: center;
    color: #3498db;
}

.sidebar ul {
    list-style: none;
}

.sidebar ul li {
    padding: 15px;
    cursor: pointer;
    border-radius: 5px;
    transition: 0.3s;
}

.sidebar ul li:hover, .sidebar ul li.active {
    background: #34495e;
    color: #3498db;
}

/* Main Content */
.content {
    flex: 1;
    padding: 30px;
    overflow-y: auto;
}

header {
    display: flex;
    justify-content: space-between;
    align-items: center;
    margin-bottom: 30px;
}

.status {
    background: #e1f5fe;
    padding: 10px 20px;
    border-radius: 20px;
    font-weight: bold;
    color: #0288d1;
}

/* Stats Cards */
.stats-grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
    gap: 20px;
    margin-bottom: 30px;
}

.card {
    background: white;
    padding: 20px;
    border-radius: 10px;
    box-shadow: 0 4px 6px rgba(0,0,0,0.1);
}

.card h3 { color: #7f8c8d; font-size: 0.9rem; }
.card p { font-size: 1.8rem; font-weight: bold; color: #2c3e50; }

/* Table */
table {
    width: 100%;
    background: white;
    border-collapse: collapse;
    border-radius: 10px;
    overflow: hidden;
    box-shadow: 0 4px 6px rgba(0,0,0,0.1);
}

th, td {
    padding: 15px;
    text-align: left;
    border-bottom: 1px solid #eee;
}

th { background: #f8f9fa; color: #7f8c8d; }

.tag {
    padding: 5px 10px;
    border-radius: 15px;
    font-size: 0.8rem;
    font-weight: bold;
}

.tag.in { background: #d4edda; color: #155724; }
