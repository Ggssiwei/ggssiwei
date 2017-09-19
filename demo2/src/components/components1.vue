<template>
  <div >
    <h1>这里是子组件！</h1>
    <input v-model="msg" @keyup.enter="entermsg">
  </div>
</template>

<script>
export default {
  data: function(){
    return {
      msg:''
    }
  },
  methods:{
    entermsg:function(){
      this.$emit('listenMsg',this.msg);
      this.msg='';
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
