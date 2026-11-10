# Write your MySQL query statement below
SELECT A.unique_id, B.name
FROM Employees AS B
LEFT JOIN EmployeeUNI AS A
    ON A.id = B.id;