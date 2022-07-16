# toastr

https://github.com/CodeSeven/toastr

## example

```xml
<cms:call 'embed' 'embeds/toastr/toastr.html' type='success'
   content="Welcome back, <cms:show k_user_title case='title'/>"
   header='Logged in'
   icon='circle-check' />
```

```xml
<cms:call 'embed' 'embeds/toastr/toastr-success.html'
   content="Welcome back, <cms:show k_user_title case='title'/>"
   header='Logged in'
   icon='circle-check' />
```

Scripts and CSS styling necessary to the HTML are located in `assets.inc` and embedded automatically only once per page.
## params

* **type**
* **content**
* **header**
* **icon**

### type

Param **type** takes:  ***info, warning, success, error***

### icon

Icons used from CouchCMS icon set at `couch/theme/_system/assets/open-iconic.svg`.

Repository with icons:

```shell
git clone https://github.com/iconic/open-iconic \#OpenIconic
```

Directory `#OpenIconic/svg` has a list of names to choose from. Previews in `/png` folder.


## support

[![Mail](https://img.shields.io/badge/gmail-%23539CFF.svg?&style=for-the-badge&logo=gmail&logoColor=white)](mailto:"Anton"<tony.smirnov@gmail.com>?subject=[GitHub])
