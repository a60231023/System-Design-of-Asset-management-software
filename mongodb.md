// Create a database named 'asset_management'
use asset_management;

// Create a collection for assets
db.createCollection("assets");

// Insert a document into the assets collection
db.assets.insertOne({
  name: "Laptop",
  location: "Room A"
});

// Create a collection for asset statuses
db.createCollection("asset_statuses");

// Insert a document into the asset_statuses collection
db.asset_statuses.insertOne({
  asset_id: ObjectId("615c8543a4f43e4e4a8b4567"),
  status: "In Use",
  date_start: ISODate("2022-01-01T00:00:00Z"),
  date_end: null
});

// Create a collection for maintenance
db.createCollection("maintenance");

// Insert a document into the maintenance collection
db.maintenance.insertOne({
  asset_id: ObjectId("615c8543a4f43e4e4a8b4567"),
  date: ISODate("2022-01-01T00:00:00Z"),
  type: "Checkup"
});

// Create a collection for procurement
db.createCollection("procurement");

// Insert a document into the procurement collection
db.procurement.insertOne({
  asset_id: ObjectId("615c8543a4f43e4e4a8b4567"),
  vendor: "Vendor A",
  date: ISODate("2022-01-01T00:00:00Z")
});

// Create a collection for disposal
db.createCollection("disposal");

// Insert a document into the disposal collection
db.disposal.insertOne({
  asset_id: ObjectId("615c8543a4f43e4e4a8b4567"),
  date: ISODate("2022-03-01T00:00:00Z"),
  reason: "Obsolete"
});

// Create a collection for users
db.createCollection("users");

// Insert a document into the users collection
db.users.insertOne({
  username: "John",
  access_level: 1
});
