<template>
  <div>
    <h2>组件A</h2>
    <input type="text" v-model="message">
    <button v-on:click="send">发送！</button>
  </div>
</template>

<script>
import bus from './bus.js';
export default {
    data:function(){
        return {
            message:''
        }
    },
    methods:{
        send: function(){
            bus.$emit('event-name',this.message);
        }
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
