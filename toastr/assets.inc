<script src="<cms:show k_admin_link />includes/jquery-3.x.min.js?v=20200116"></script>
<script src="<cms:show k_system_theme_link />includes/toastr.min.js?v=20200116"></script>
<style>
/* Toastr (https://github.com/CodeSeven/toastr) - Copyright 2012-2015 - MIT License */
.toast-title{font-size:16px;font-weight:bold;}
.toast-message{font-size:14px;-ms-word-wrap:break-word;word-wrap:break-word;}
.toast-close-button{position:relative;top:-10px;right:-4px;float:right;font-size:20px;font-weight:bold;color:inherit;text-shadow:0 1px 0 #fff;opacity:.8;cursor:pointer;}
.toast-close-button:hover,.toast-close-button:focus{opacity:1;}
button.toast-close-button{padding:0;border:0;background:transparent;cursor:pointer;-webkit-appearance:none;}
.toast>.i{display:block;position:absolute;top:50%;left:14px;width:36px;height:36px;margin-top:-18px;}
.toast-top-center{top:15px;right:0;width:100%;}
.toast-bottom-center{right:0;bottom:15px;width:100%;}
.toast-top-full-width{top:15px;right:0;left:0;}
.toast-bottom-full-width{right:0;bottom:15px;left:0;}
.toast-top-left{top:15px;left:15px;}
.toast-top-right{top:15px;right:32px;}
.toast-bottom-right{right:32px;bottom:15px;}
.toast-bottom-left{bottom:15px;left:15px;}
.toast-top-center,.toast-top-full-width,.toast-top-right,.toast-top-left{margin-bottom:5px;}
.toast-bottom-center,.toast-bottom-full-width,.toast-bottom-right,.toast-bottom-left{margin-top:5px;}
#toast-container{position:fixed;z-index:999999;pointer-events:none;}
#toast-container>.toast{position:relative;width:334px;padding:10px 10px 12px 64px;border-width:1px;border-style:solid;border-radius:3px;overflow:hidden;opacity:.9;text-shadow:0 1px 0 rgba(255,255,255,.5);pointer-events:auto;cursor:pointer;}
#toast-container>:hover{opacity:1;}
#toast-container.toast-top-center>.toast,#toast-container.toast-bottom-center>.toast{width:300px;margin-right:auto;margin-left:auto;}
#toast-container.toast-top-full-width>.toast,#toast-container.toast-bottom-full-width>.toast{width:92%;margin-right:auto;margin-left:auto;}
.toast-progress{position:absolute;bottom:0;left:0;height:4px;opacity:.6;}
</style>
