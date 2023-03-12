-- Create a database named 'asset_management'
CREATE DATABASE asset_management;

-- Create a table for assets
CREATE TABLE assets (
  asset_id INT AUTO_INCREMENT PRIMARY KEY,
  name VARCHAR(255),
  location VARCHAR(255)
);

-- Insert a row into the assets table
INSERT INTO assets (name, location) VALUES ("Laptop", "Room A");

-- Create a table for asset statuses
CREATE TABLE asset_statuses (
  status_id INT AUTO_INCREMENT PRIMARY KEY,
  asset_id INT,
  status VARCHAR(255),
  date_start DATE,
  date_end DATE,
  FOREIGN KEY (asset_id) REFERENCES assets(asset_id)
);

-- Insert a row into the asset_statuses table
INSERT INTO asset_statuses (asset_id, status, date_start, date_end) VALUES (1, "In Use", "2022-01-01", NULL);

-- Create a table for maintenance
CREATE TABLE maintenance (
  maintenance_id INT AUTO_INCREMENT PRIMARY KEY,
  asset_id INT,
  date DATE,
  type VARCHAR(255),
  FOREIGN KEY (asset_id) REFERENCES assets(asset_id)
);

-- Insert a row into the maintenance table
INSERT INTO maintenance (asset_id, date, type) VALUES (1, "2022-01-01", "Checkup");

-- Create a table for procurement
CREATE TABLE procurement (
  procurement_id INT AUTO_INCREMENT PRIMARY KEY,
  asset_id INT,
  vendor VARCHAR(255),
  date DATE,
  FOREIGN KEY (asset_id) REFERENCES assets(asset_id)
);

-- Insert a

Assets table: Contains information about each asset, such as its name, location, and purchase date.
Asset statuses table: Contains information about the status of each asset, such as whether it is currently in use, in maintenance, or disposed of.
Maintenance table: Contains information about each maintenance event for each asset, including the date of the maintenance and what was done.
Procurement table: Contains information about each procurement event for each asset, including the date of the procurement and the vendor.
Disposal table: Contains information about each disposal event for each asset, including the date of the disposal and the reason for disposal.
Users table: Contains information about each user of the asset management system, such as their username and access level.
The relationships between the tables can be represented through foreign keys. For example, the asset_id column in the asset_statuses table can reference the asset_id column in the assets table, indicating that each status is associated with a particular asset. Similarly, the asset_id columns in the maintenance, procurement, and disposal tables can reference the asset_id column in the assets table.




