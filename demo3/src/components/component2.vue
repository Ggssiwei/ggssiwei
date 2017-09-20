<template>
  <div>
      <h1>组件B</h1>

      {{show}}

  </div>
</template>

<script>
import bus from './bus.js'
export default {
    data:function(){
        return {
            show : ''
        }
    },
    mounted: function(){
        var _this=this;
        bus.$on('event-name',function(msg){
            _this.show = msg;
        })
    }
}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
h1, h2 {
  font-weight: normal;
}

ul {
  list-style-type: none;
  padding: 0;
}

li {
  display: inline-block;
  margin: 0 10px;
}

a {
  color: #42b983;
}
</style>
