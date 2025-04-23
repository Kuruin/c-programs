CREATE TABLE Stocks (
    stock_id INT PRIMARY KEY,              -- Unique identifier for each stock
    stock_name VARCHAR(100) UNIQUE,        -- Stock name, must be unique
    price decimal(10,2) not null,         -- Price of the stock, cannot be NULL
    quantity INT NOT NULL,                 -- Number of shares available, cannot be NULL
    date_added DATE,              -- Date when the stock was added, cannot be NULL
    CHECK (price >= 0),                    -- Ensures price is not negative
    CHECK (quantity >= 0)                  -- Ensures quantity is not negative
);

insert into Stocks(stock_id,stock_name,price,quantity)
values(1,'Angelone',103.2,4);

insert into Stocks(stock_id,stock_name,price,quantity)
values(2,'HDFC',250,5);

insert into Stocks(stock_id,stock_name,price,quantity)
values(3,'Bergepaints',200,3);

insert into Stocks(stock_id,stock_name,price,quantity)
values(4,'Example',300,9);

select * from stocks;

select * from Stocks where price >200;
select stock_name from Stocks where price >200;

delete from stocks where stock_name = 'Example';
select * from stocks;

select upper(stock_name) as stock_name_upper from stocks;
select concat(stock_name, ' -$',price) as concat_stocks from stocks;
select substring(stock_name,1,3) as substring_stock from stocks;

select count(*) from stocks;
select max(price) from stocks;
select avg(price) from stocks;
select sum(quantity) as total_quantity from stocks;

select * from stocks
where price = (select min(price) from stocks);


-- complex queries 

SELECT 
    CASE 
        WHEN price < 200 THEN 'Low Price'
        WHEN price BETWEEN 200 AND 300 THEN 'Medium Price'
        ELSE 'High Price'
    END AS price_range,
    COUNT(*) AS stock_count,
    SUM(quantity) AS total_quantity,
    AVG(price) AS avg_price
FROM Stocks
GROUP BY price_range;

SELECT * FROM Stocks
WHERE price >= (
    SELECT MAX(price) * 0.9 FROM Stocks
);

CREATE VIEW Stock_Overview AS
SELECT
    stock_name,
    quantity,
    price,
    (price * quantity) AS total_value
FROM Stocks;
SELECT * FROM Stock_Overview;

-- do joins,complex queries, trigger

