# Write your MySQL query statement below

select a.unique_id, b.name from Employees as b left join EmployeeUNI as a on a.id = b.id;

