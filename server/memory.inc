<cms:ignore><!--Usage: <cms:call 'embed' 'server/memory.inc' text="Page <cms:show k_page_id />" /> --></cms:ignore>
<cms:capture into='content' trim='1'>
   <cms:show k_named_args.memo /> memory: <cms:php>return memory_get_usage(true) / 1024 / 1024;</cms:php>
</cms:capture>
<cms:write "<cms:get 'k_named_args.file' default='log.txt' />" add_newline='1'><cms:show content /></cms:write>
