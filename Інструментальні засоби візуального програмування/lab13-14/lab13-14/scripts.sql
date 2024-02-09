SET SQL_SAFE_UPDATES = 0;
SET GLOBAL FOREIGN_KEY_CHECKS=0;

create database lab;
use lab;

show databases;
show tables;

select * from flight;
delete from flight;
drop table flight;

insert into flight (flight_id, flight_ticket_price, flight_destination_place, fligth_date, flight_time) values (123, 124, 'ASDFASDF', 'Андрій', 'Петрович');

update flight set flight_id values (4) where flight_id = 3;

#Creating main tables

create table flight
(

	flight_id integer primary key not null, 
    flight_ticket_price integer not null,
    flight_destination_place tinytext not null,
    flight_date tinytext not null,
	flight_time tinytext not null
    
);
