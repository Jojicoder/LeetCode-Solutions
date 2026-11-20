# Write your MySQL query statement below


select a.id as id from Weather as a
inner join Weather as b on DATEDIFF(a.recordDate,b.recordDate) =1
and a.temperature > b.temperature;