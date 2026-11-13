# Write your MySQL query statement belos
select a.product_name,b.year,b.price from Product as a inner join
Sales as b on a.product_id = b.product_id;