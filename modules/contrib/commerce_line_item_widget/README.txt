CONTENTS OF THIS FILE
---------------------
   
 * Introduction
 * Requirements
 * Recommended modules
 * Installation
 * Usage
 * Troubleshooting
 * FAQ
 * Maintainers
 
 
 INTRODUCTION
------------
This module offers the missing connection between product types and line item types.
In this case Products serve as a blueprint for line items.
A product is referenced and all fields for the line item are prefilled with the data from the product.
But you are still able to edit and customize the line item. This will not affect the product in any way.

To support audit-proof archiving all data has to be copied from a product once it is added to the order as a line item.
We do this by adding the same fields on product and line item types and adding a connection between the corresponding fields.
Once the line item is created all data from the product is copied to the new line item.
Editing the product will not change anything on previous orders that "reference" this product, as all data is perceived.
A reference to the original product is only kept for reporting but would not be necessary for the order itself.


REQUIREMENTS
------------
This module requires the following modules:
 * Commerce (https://drupal.org/project/commerce)
 * Commerce Customizable Products(https://www.drupal.org/project/commerce_custom_product)
@TODO


RECOMMENDED MODULES
-------------------
@TODO UI Modules to create custom product and line item types


INSTALLATION
------------
This widget is used on the order. Got to admin/commerce/config/order/fields and change the widget of the "Line item reference" field from "Line item manager" to "Dynamic line item widget".
In the widget settings you can now add the setting for each line item type.
First you need to select the corresponding product type, then for each field of the line item you can select the source field on the product type.
And you are done.


Usage
-----
Create an Order and you will see your new widget.
Search for a product in the reference field and select the product of your choice.
The form will switch to show all fields of the corresponding line item fields.
All data from the product is copied to the line item form.
Since it is a form you can now change the value of the fields before saving the order.

TROUBLESHOOTING
---------------
@TODO


FAQ
---
@TODO


MAINTAINERS
-----------
* Andrew Siz (AndrewsizZ) - https://www.drupal.org/u/andrewsizz
* Oskar Bechtold (bechtold) - https://www.drupal.org/u/bechtold